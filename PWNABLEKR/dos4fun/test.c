#include <stdio.h>

int main(void) {
	char buffer[100] = {0x41,};

	int size = 0;

	FILE *fp = fopen("flag", "r");
	fread(buffer, 1, 50, fp);
	fwrite(buffer, 50, 1, stdout);


	return 0;
}