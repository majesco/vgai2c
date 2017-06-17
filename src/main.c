#include <vgai2c.h>

/*num0Bers*/
uint8_t one[8] =
{
  0B00010000,
  0B00110000,
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
  0B00000100,
  0B00000100,
  0B00001000,
  0B00010000,
  0B00100000,
  0B01111100
};

uint8_t three[8] =
{
  0B00111000,
  0B01000100,
  0B00000100,
  0B00011000,
  0B00000100,
  0B00000100,
  0B01000100,
  0B00111000
};

uint8_t four[8] =
{
  0B00000100,
  0B00001100,
  0B00010100,
  0B00100100,
  0B01000100,
  0B01111100,
  0B00000100,
  0B00000100
};

uint8_t five[8] =
{
  0B01111100,
  0B01000000,
  0B01000000,
  0B01111000,
  0B00000100,
  0B00000100,
  0B01000100,
  0B00111000
 };

uint8_t six[8] =
{
  0B00111000,
  0B01000100,
  0B01000000,
  0B01111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};

uint8_t seven[8] =
{
  0B01111100,
  0B00000100,
  0B00000100,
  0B00001000,
  0B00010000,
  0B00100000,
  0B00100000,
  0B00100000
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
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111100,
  0B00000100,
  0B01000100,
  0B00111000
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
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100
};

uint8_t c[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100110,
  0B00111100
};

uint8_t d[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111100
};

uint8_t e[8] =
{
  0B00000000,
  0B01111110,
  0B01100000,
  0B01100000,
  0B01111100,
  0B01100000,
  0B01100000,
  0B01111110
};

uint8_t f[8] =
{
  0B00000000,
  0B01111110,
  0B01100000,
  0B01100000,
  0B01111100,
  0B01100000,
  0B01100000,
  0B01100000
};

uint8_t g[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B01100000,
  0B01101110,
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
  0B00011110,
  0B00001100,
  0B00001100,
  0B00001100,
  0B01101100,
  0B01101100,
  0B00111000
};

uint8_t k[8] =
{
  0B00000000,
  0B01100110,
  0B01101100,
  0B01111000,
  0B01110000,
  0B01111000,
  0B01101100,
  0B01100110
};

uint8_t l[8] =
{
  0B00000000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
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
  0B01110011,
  0B01111011,
  0B01101111,
  0B01100111,
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
  0B01111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01100000,
  0B01100000
};

uint8_t q[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01101110,
  0B00111100,
  0B00000110
};

uint8_t r[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01111000,
  0B01101100,
  0B01100110
};

uint8_t s[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B00111100,
  0B00000110,
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
  0B00000110,
  0B00001100,
  0B00011000,
  0B00110000,
  0B01100000,
  0B01111110
};

/*emojis*/

uint8_t happy[8] =
{
0B00111100,
0B01000010,
0B10100101,
0B10000001,
0B10100101,
0B10011001,
0B01000010,
0B00111100
};

uint8_t poker[8] =
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
  0B11110000,
  0B00001001,
  0B10010110,
  0B00000110,
  0B11110110,
  0B01100110,
  0B00001001,
  0B11110000
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
  0B00000000,
  0B01110111,
  0B00010001,
  0B00000000,
  0B00011110,
  0B00000000,
  0B00000000
};

uint8_t wow[8] =
{
  0B00000000,
  0B00100100,
  0B00000000,
  0B00011000,
  0B00100100,
  0B00100100,
  0B00011000,
  0B00000000
};

uint8_t wink[8] =
{
  0B00000000,
  0B00000000,
  0B00100100,
  0B00001000,
  0B00000000,
  0B00100100,
  0B00011000,
  0B00000000
};

uint8_t chinese[8] =
{
  0B00000000,
  0B00000000,
  0B01100110,
  0B00000000,
  0B00000000,
  0B00111100,
  0B00000000,
  0B00000000
};

uint8_t thoughtful[8] =
{
  0B00000000,
  0B00000000,
  0B00100100,
  0B00000000,
  0B00000000,
  0B00011100,
  0B00100000,
  0B00000000
};

int main (int argc, char *argv[])
{
  char character;	
  if( argc != 2 ) {
      printf("You must provide the character to write.\n");
      exit(1);
  }

  character = argv[1][0];

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
      printf("Input character unrecognized.\n");
      exit(1);

	}



}


