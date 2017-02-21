#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/syscalls.h>
#include <linux/fcntl.h>
#include <asm/uaccess.h>
#include "romanfs.h"

/*
 * Module's external functions bodies
 */
int mount_fs(const char* filename)
{
	return 0;
}
EXPORT_SYMBOL_GPL(mount_fs);

int create_fs(const char* filename, u_int16_t number_of_blocks)
{
	return 0;
}
EXPORT_SYMBOL_GPL(create_fs);

int umount_fs(const char* filename)
{
	return 0;
}
EXPORT_SYMBOL_GPL(umount_fs);

int read_block(u_int16_t blk_index, const char *buff)
{
	return 0;
}
EXPORT_SYMBOL_GPL(read_block);

int write_block(u_int16_t blk_index, char *buff)
{
	return 0;
}
EXPORT_SYMBOL_GPL(write_block);


/*
 * Initialize/cleanup actions
 */
static int __init init_romanfs(void)
{
    printk(KERN_INFO "Roman FS is initialized\n");
    return 0;
}

static void __exit cleanup_romanfs(void)
{
    printk(KERN_INFO "Roman FS is shutting down\n");
}

module_init(init_romanfs);
module_exit(cleanup_romanfs);

/*
 * License information and module's description
 */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Roman Storozhenko <romeusmeister@gmail.com>");
MODULE_DESCRIPTION("Simple block read-write system");
