#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void writefile(void);
void readfile(void);


int main(void)
{
	writefile();
	readfile();

	return 0;
}


void writefile(void)
{
	FILE* fp = fopen("a.txt", "w");

	if (fp == NULL) {
		perror("�ļ���ʧ��");
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (fp != NULL)
		{
			//fputc(65+i, fp);	//�����дA-Z
			fputc('A' + i, fp);	//���Сдa-z
			//fputc(97+i, fp);	//���Сдa-z
		}
	}

	if (fp != NULL)
	{
		fclose(fp);
	}
}

void readfile(void)
{
	FILE* fp = fopen("a.txt", "r");
	if (fp ==NULL)
	{
		perror("�ļ���ȡ��ʧ��");
	}

	char* ch[40] = { 0 };

	for (size_t i = 0; i < 26; i++)
	{
		if (fp != NULL)
		{
			printf("%c", fgetc(fp));
		}
	}
}