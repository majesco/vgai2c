#include <vgai2c.h>

int writeToMatrix(uint8_t character[8]){
	int file;
	char filename[20];

	__u8 reg [8]= {0x0, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe}; /* Device register to access */
	 char buf[18];
  	
	snprintf(filename, 19, "/dev/i2c-%d", ADAPTER);

	file = open(filename, O_RDWR);
 	 if (file < 0) {
    	printf("Unable to open file.\n");
      	exit(1);
  	}

  	if (ioctl(file, I2C_SLAVE, VGAI2C_ADDRESS) < 0) {
    	printf("Communication with i2c-%d failed.\n", ADAPTER);
    	exit(1);
  	}

  	 buf[0] = reg[0];
     buf[1] = character[0];
     buf[2] = reg[1];
     buf[3] = character[1];
     buf[4] = reg[2];
     buf[5] = character[2];
     buf[6] = reg[3];
     buf[7] = character[3];
     buf[8] = reg[4];
     buf[9] = character[4];
     buf[10] = reg[5];
     buf[11] = character[5];
     buf[12] = reg[6];
     buf[13] = character[6];
     buf[14] = reg[7];
     buf[15] = character[7];
     

  	 if (write(file, buf, 16) != 16) {
    	printf("Error when writing to matrix.\n");
	 	exit(1);
	 }
	 char buf2 [3]; 
	 buf2[0] = 0x81;
     buf2[1] = 0x00;

  	 if (write(file, buf2, 2) != 2) {
    	printf("Error when writing to matrix.\n");
	 	exit(1);
	 }

	 return 0;

}