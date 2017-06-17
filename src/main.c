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

/*num0Bers*/
uint8_t one[8] =
{
  0B00010000,
  0B00011000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00111000
};

uint8_t two[8] =
{
  0B00111000,
  0B01000100,
  0B01000000,
  0B01000000,
  0B00100000,
  0B00010000,
  0B00001000,
  0B01111100
};

uint8_t three[8] =
{
  0B00111000,
  0B01000100,
  0B01000000,
  0B00110000,
  0B01000000,
  0B01000000,
  0B01000100,
  0B00111000
};

uint8_t four[8] =
{
  0B00100000,
  0B00110000,
  0B00101000,
  0B00100100,
  0B00100010,
  0B00111110,
  0B00100000,
  0B00100000
};

uint8_t five[8] =
{
  0B00111110,
  0B00000010,
  0B00000010,
  0B00011110,
  0B00100000,
  0B00100000,
  0B00100010,
  0B00011100

 };

uint8_t six[8] =
{
  0B00011100,
  0B00100010,
  0B00000010,
  0B00011110,
  0B00100010,
  0B00100010,
  0B00100010,
  0B00011100
};

uint8_t seven[8] =
{
  0B00111110,
  0B00100000,
  0B00100000,
  0B00010000,
  0B00001000,
  0B00000100,
  0B00000100,
  0B00000100
};

uint8_t eight[8] =
{
  0B00111000,
  0B01000100,
  0B01000100,
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};

uint8_t nine[8] =
{
  0B00011100,
  0B00100010,
  0B00100010,
  0B00100010,
  0B00111100,
  0B00100000,
  0B00100010,
  0B00011100
};

uint8_t zero[8] =
{
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};
  
/*letters*/
uint8_t a[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01100110,
  0B01100110,
  0B01100110
};

uint8_t b[8] =
{
  0B00111110,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01100110,
  0B01100110,
  0B00111110,
  0B00000000
};

uint8_t c[8] =
{
  0B00111100,
  0B01100110,
  0B01100011,
  0B00000011,
  0B00000011,
  0B01100110,
  0B00111100,
  0B00000000
};

uint8_t d[8] =
{
  0B00011111,
  0B00100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00100110,
  0B00011111,
  0B00000000
};

uint8_t e[8] =
{
  0B00000000,
  0B01111110,
  0B00000110,
  0B00000110,
  0B00111110,
  0B00000110,
  0B00000110,
  0B01111110
};

uint8_t f[8] =
{
  0B00000000,
  0B01111110,
  0B00000110,
  0B00000110,
  0B00111110,
  0B00000110,
  0B00000110,
  0B00000110
};

uint8_t g[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B00000110,
  0B00000110,
  0B01110110,
  0B01100110,
  0B00111100
};

uint8_t h[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01100110,
  0B01100110,
  0B01100110
};

uint8_t i[8] =
{
  0B00000000,
  0B00111100,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00111100
};

uint8_t j[8] =
{
  0B00000000,
  0B01111000,
  0B00110000,
  0B00110000,
  0B00110000,
  0B00110110,
  0B00110110,
  0B00011000
};

uint8_t k[8] =
{
  0B00000000,
  0B01100110,
  0B00110110,
  0B00011110,
  0B00001110,
  0B00011110,
  0B00110110,
  0B01100110
};

uint8_t l[8] =
{
  0B00000000,
  0B00000110,
  0B00000110,
  0B00000110,
  0B00000110,
  0B00000110,
  0B00000110,
  0B01111110
};

uint8_t m[8] =
{
  0B00000000,
  0B01100011,
  0B01110111,
  0B01111111,
  0B01101011,
  0B01100011,
  0B01100011,
  0B01100011
};

uint8_t n[8] =
{
  0B00000000,
  0B01100011,
  0B01100111,
  0B01101111,
  0B01111011,
  0B01110011,
  0B01100011,
  0B01100011
};

uint8_t o[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100
};

uint8_t p[8] =
{
  0B00000000,
  0B00111110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111110,
  0B00000110,
  0B00000110
};

uint8_t q[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01110110,
  0B00111110,
  0B01100000
};

uint8_t r[8] =
{
  0B00000000,
  0B00111110,
  0B01100110,
  0B01100110,
  0B00111110,
  0B00011110,
  0B00110110,
  0B01100110
};

uint8_t s[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B00000110,
  0B00111100,
  0B01100000,
  0B01100110,
  0B00111100
};

uint8_t t[8] =
{
  0B00000000,
  0B01111110,
  0B01011010,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000
};

uint8_t u[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111110
};

uint8_t v[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100,
  0B00011000
};

uint8_t w[8] =
{
  0B00000000,
  0B01100011,
  0B01100011,
  0B01100011,
  0B01101011,
  0B01111111,
  0B01110111,
  0B01100011
};

uint8_t x[8] =
{
  0B00000000,
  0B01100011,
  0B01100011,
  0B00110110,
  0B00011100,
  0B00110110,
  0B01100011,
  0B01100011
};

uint8_t y[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100,
  0B00011000,
  0B00011000,
  0B00011000
};

uint8_t z[8] =
{
  0B00000000,
  0B01111110,
  0B01100000,
  0B00110000,
  0B00011000,
  0B00001100,
  0B00000110,
  0B01111110
};

/*emojis*/

uint8_t happy[8] =
{
  0B00000000,
  0B00111110,
  0B01101011,
  0B01111111,
  0B01011101,
  0B01100011,
  0B01111111,
  0B00111110
};

uint8_t poker[8] =
{
  0B00000000,
  0B00111110,
  0B01000001,
  0B01010101,
  0B01000001,
  0B01011101,
  0B01000001,
  0B00111110
};

uint8_t sad[8] =
{
0B00111100,
0B01000010,
0B10100101,
0B10000001,
0B10000001,
0B10111101,
0B01000010,
0B00111100
};

uint8_t love[8] =
{
  0B00000000,
  0B00100010,
  0B01110111,
  0B00100010,
  0B00000000,
  0B00111110,
  0B00011100,
  0B00000000
};

uint8_t laugh[8] =
{
  0B00000000,
  0B00111110,
  0B01000001,
  0B01010101,
  0B01000001,
  0B01011101,
  0B01001001,
  0B00111110
};

uint8_t heart[8] =
{
  0B00110110,
  0B01111111,
  0B01111111,
  0B01111111,
  0B00111110,
  0B00011100,
  0B00001000,
  0B00000000
};

uint8_t mad[8] =
{
  0B00000000,
  0B00111110,
  0B01001001,
  0B01011011,
  0B01111111,
  0B01100001,
  0B01111111,
  0B00111110
};

uint8_t wow[8] =
{
  0B00000000,
  0B00111110,
  0B01101011,
  0B01111111,
  0B01110111,
  0B01100011,
  0B01110111,
  0B00111110
};

uint8_t wink[8] =
{
  0B00000000,
  0B00111110,
  0B01111111,
  0B01001011,
  0B01111111,
  0B01100011,
  0B01110111,
  0B00111110
};

uint8_t chinese[8] =
{
  0B00000000,
  0B00111110,
  0B01001001,
  0B01111111,
  0B01111111,
  0B01100011,
  0B01111111,
  0B00111110
};

uint8_t thoughtful[8] =
{
  0B00000000,
  0B00111110,
  0B01101011,
  0B01111111,
  0B01110011,
  0B01101111,
  0B01111111,
  0B00111110
};

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

int send_to_driver(char character)
{

  switch(character) {
   case '1' :
      writeToMatrix(one);
      break;
	
   case '2'  :
      writeToMatrix(two);
      break; 
    
    case '3'  :
      writeToMatrix(three);
      break;

    case '4'  :
      writeToMatrix(four);
      break;

    case '5'  :
      writeToMatrix(five);
      break;

    case '6'  :
      writeToMatrix(six);
      break;
      
    case '7'  :
      writeToMatrix(seven);
      break;

    case '8'  :
      writeToMatrix(eight);
      break;

    case '9'  :
      writeToMatrix(nine);
      break;

    case '0'  :
      writeToMatrix(zero);
      break;

    case 'a'  :
      writeToMatrix(a);
      break;

    case 'b'  :
      writeToMatrix(b);
      break;

    case 'c'  :
      writeToMatrix(c);
      break;

    case 'd'  :
      writeToMatrix(d);
      break;

    case 'e'  :
      writeToMatrix(e);
      break;

    case 'f'  :
      writeToMatrix(f);
      break;

    case 'g'  :
      writeToMatrix(g);
      break;

    case 'h'  :
      writeToMatrix(h);
      break;

    case 'i'  :
      writeToMatrix(i);
      break;

    case 'j'  :
      writeToMatrix(j);
      break;

    case 'k'  :
      writeToMatrix(k);
      break;

    case 'l'  :
      writeToMatrix(l);
      break;

    case 'm'  :
      writeToMatrix(m);
      break;

    case 'n'  :
      writeToMatrix(n);
      break;

    case 'o'  :
      writeToMatrix(o);
      break;

    case 'p'  :
      writeToMatrix(p);
      break;

    case 'q'  :
      writeToMatrix(q);
      break;

    case 'r'  :
      writeToMatrix(r);
      break;

    case 's'  :
      writeToMatrix(s);
      break;

    case 't'  :
      writeToMatrix(t);
      break;

    case 'u'  :
      writeToMatrix(u);
      break;

    case 'v'  :
      writeToMatrix(v);
      break;

    case 'w'  :
      writeToMatrix(w);
      break;

    case 'x'  :
      writeToMatrix(x);
      break;

    case 'y'  :
      writeToMatrix(y);
      break;

    case 'z'  :
      writeToMatrix(z);
      break;

    case '!'  :
      writeToMatrix(laugh);
      break;

    case '@'  :
      writeToMatrix(poker);
      break;  

    case '#'  :
      writeToMatrix(happy);
      break;

    case '$'  :
      writeToMatrix(mad);
      break;

    case '%'  :
      writeToMatrix(heart);
      break;

    case '^'  :
      writeToMatrix(love);
      break;

    case '&'  :
      writeToMatrix(wink);
      break;

    case '*'  :
      writeToMatrix(thoughtful);
      break;

    case '('  :
      writeToMatrix(chinese);
      break;

    case ')'  :
      writeToMatrix(wow);
      break;

    default :
      //printf("Input character unrecognized.\n");
      break;

	}
}

extern int drawMessage(char *message){
  /*
  if( argc != 2 ) {
      printf("You must provide the characters to write.\n");
      exit(1);
  }*/

  /*char * message = argv[1];*/
  printf("Message to write: %s\n", message);
  int messagelen = strlen(message);
	printf("Message length is:%d\n", messagelen);
	int i;

	for (i = 0; i < messagelen; ++i)
	{
		printf("character in position %d is:%c\n", i, message[i]);
    send_to_driver(message[i]);
    sleep(3);
	}

	return 0;
}



