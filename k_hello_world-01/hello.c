#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello_from_kernel_module\n");
	return 0 ; 
}

static void  __exit hello_exit(void)
{
	printk(KERN_INFO "Good_bye_from_kernel_module\n");

}


module_init(hello_init);
module_exit(hello_exit);

