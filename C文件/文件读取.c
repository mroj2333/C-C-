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
		perror("�ļ���ʧ��");
	}

	fputc("a", fp);

	fclose(fp);
}