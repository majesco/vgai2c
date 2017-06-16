CONFIG_MODULE_SIG=n
obj-m = vgai2c.o
KVERSION = $(shell uname -r)

all:
		make -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
clean:
		make -C /lib/modules/$(KVERSION)/build M=$(PWD) clean
