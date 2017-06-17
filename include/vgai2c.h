#ifndef _VGAI2C_H
#define _VGAI2C_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <linux/fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/i2c-dev.h>
#include <errno.h>
#include <sys/types.h>
#include <linux/inotify.h>

#define ADAPTER 1
#define VGAI2C_ADDRESS 0x70

#define EVENT_SIZE  ( sizeof (struct inotify_event) )
#define EVENT_BUF_LEN     ( 1024 * ( EVENT_SIZE + 16 ) )

int writeToMatrix(uint8_t character[8]);

#endif