#include <stdio.h>


void readfile(void);

int main(void)
{
	readfile();

	return 0;
}

void readfile(void)
{
	FILE* fp = fopen("a.txt", "w");

	if (fp == NULL) {
		perror("文件打开失败");
	}

	fputc("a", fp);

	fclose(fp);
}