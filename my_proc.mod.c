#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x27b8a481, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x47dd7707, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7b1e64b8, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5ce94eb0, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xa7c945a7, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa0772e56, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xb073ee64, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x30da6f17, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x33d68c73, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7E8765EDE6258740C327394");
