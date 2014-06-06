#include <stdio.h>

void main(int argc, char* argv[]) {
	char s[1024];
	FILE *fp1;

	if(argc > 1) fp1 = fopen(argv[1], "r");
	else fp1=stdin;

	while((fgets(s, 1023, fp1)) != (char *)0 ) {
		if(s[0]=='\n') break; 
		fputs(s, stdout);
	}
	
	if(fp1 != stdin) fclose(fp1);
}

