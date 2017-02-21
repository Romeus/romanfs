#include <linux/types.h>
/*
 * Describe filesystem structures used in this module
 */

struct page_block {
	char payload[4096];
};

typedef u32 crc_32_checksum;

struct superblock {
	const char* signature;
	u_int16_t blocks_total;
	u_int16_t blocks_free;
};


/*
 * Module's external interface
 */
int mount_fs(const char* filename);
int create_fs(const char* filename, u_int16_t number_of_blocks);
int umount_fs(const char* filename);
int read_block(u_int16_t blk_index, const char *buff);
int write_block(u_int16_t blk_index, char *buff);
int check_fs(const char* filename);
