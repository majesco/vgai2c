#ifndef _VGAI2C_H
#define _VGAI2C_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/i2c-dev.h>

#define ADAPTER 1
#define VGAI2C_ADDRESS 0x70

int writeToMatrix(uint8_t character[8]);

#endif