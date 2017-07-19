#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/utsname.h>
#define NAME "myProc"

static struct proc_dir_entry* myProc_file;


static int myProc_show(struct seq_file *seq, void *data)
{
	seq_printf(seq, "utsname : %s\nutsrelease : %s\nutsversion : %s\n", utsname()->sysname, utsname()->release, utsname()->version);

	return 0;
}

static int myProc_open(struct inode* inode, struct file* file) 
{
	return single_open(file, myProc_show, NULL);
}

static const struct file_operations myProc_fops = 
{
	.owner	= THIS_MODULE,
	.open 	= myProc_open,
	.read	= seq_read,
	.llseek	= seq_lseek,
	.release = single_release,
};

static int __init myProc_init(void)
{
	myProc_file = proc_create(NAME, 0, NULL, &myProc_fops);

	if(myProc_file == NULL) {
		printk("[FAIL] __init module\n");
		return -ENOMEM;
	}
	
	printk("[SUCCEED] __init module\n");

	return 0;
}

static void __exit myProc_exit(void)
{
	printk("__EXIT RUN\n");
	remove_proc_entry(NAME, NULL);
}

module_init(myProc_init);
module_exit(myProc_exit);

MODULE_LICENSE("GPL");

 

			
