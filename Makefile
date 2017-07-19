CONFIG_MODULE_SIG=n

obj-m := my_proc.o
KDIR := /lib/modules/4.8.10-user/build

kernel:
	make -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* .*.cmd
