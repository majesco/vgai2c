#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */
#include <linux/slab.h> /* kmalloc() */
#include <linux/fs.h> /* everything... */
#include <linux/errno.h> /* error codes */
#include <linux/types.h> /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h> /* O_ACCMODE */
#include <asm/uaccess.h> /* copy_from/to_user */
#include <linux/i2c.h>

MODULE_DESCRIPTION("VGA-i2c driver");
MODULE_AUTHOR("Kevin Umaña <kevgiso@hotmail.com>");
MODULE_LICENSE("GPL");

/* Declaration of vgai2c.c functions */
static int vgai2c_probe(struct i2c_client *client,
		const struct i2c_device_id *id);
static int vgai2c_remove(struct i2c_client *client);
/* Structure that declares the usual file */
/* access functions */

struct vgai2c_device {
	struct i2c_client *client;
	/* TODO */
};


static int vgai2c_probe(struct i2c_client *client,
		const struct i2c_device_id *id)
{	uint8_t data;
	uint8_t command;
	struct vgai2c_device *dev;
	
	if (!i2c_check_functionality(client->adapter,
		I2C_FUNC_SMBUS_BYTE_DATA | I2C_FUNC_SMBUS_WORD_DATA |
		I2C_FUNC_SMBUS_I2C_BLOCK)) {
		printk(KERN_ERR "%s: needed i2c functionality is not supported\n", __func__);
		return -ENODEV;
	}
	printk("<1> VGA_i2c device initialized!\n");
	dev = kzalloc(sizeof(struct vgai2c_device), GFP_KERNEL);
	if (dev == NULL) {
		printk(KERN_ERR "%s: no memory\n", __func__);
		return -ENOMEM;
	}

	dev->client = client;
	i2c_set_clientdata(client, dev);
	data = BIT(0);
	command = 0xff;
	i2c_smbus_write_byte_data(client, command, data);

	return 0;
}

static int vgai2c_remove(struct i2c_client *client)
{
	struct vgai2c_client *dev = i2c_get_clientdata(client);
	printk("<1> VGA_i2c device removed!\n");
	/* TODO: do something */

	kfree(dev);
	return 0;
}

static const struct i2c_device_id vgai2c_id[] = {
		{ "vgai2c", 0 },
		{ }
};

static struct i2c_driver vgai2c_driver = {
		.driver = {
				.name = "vgai2c",
				.owner = THIS_MODULE,
		},
		.probe = vgai2c_probe,
		.id_table = vgai2c_id,
		.remove = vgai2c_remove,
};

module_i2c_driver(vgai2c_driver);