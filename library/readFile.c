#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char* Search_in_File(char *fname) {
	
	FILE *fp;
	char temp[512];

	// gcc users
	if((fp = fopen(fname, "r")) == NULL) {
		return(-1);
	}
	fgets(temp, 512, fp);
		


	char * newString = temp +12;
	int len = strlen(newString);

	newString[len-3] = 0;



	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
   	return newString;
}


