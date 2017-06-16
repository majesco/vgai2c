#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int Search_in_File(char *fname) {
	
	FILE *fp;
	char temp[512];

	// gcc users
	if((fp = fopen(fname, "r")) == NULL) {
		return(-1);
	}
	fgets(temp, 512, fp);
		
	printf("%s\n",temp );


	char * newString = temp +12;
	int len = strlen(newString);


	newString[len-2] = 0;

		printf("%s\n", newString);


	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
   	return(0);
}


