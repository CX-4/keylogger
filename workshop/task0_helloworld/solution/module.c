#include <linux/module.h>
#include <linux/kernel.h>

static int __init hook_init(void)
{
	printk("Hello World!\n");

	return 0;
}

static void __exit hook_exit(void)
{
	printk("Bye World..\n");
}

module_init(hook_init);
module_exit(hook_exit);

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("hacker <hacker@darkweb.net>");
