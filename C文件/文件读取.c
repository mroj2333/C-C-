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
		perror("文件打开失败");
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (fp != NULL)
		{
			//fputc(65+i, fp);	//输出大写A-Z
			fputc('A' + i, fp);	//输出小写a-z
			//fputc(97+i, fp);	//输出小写a-z
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
		perror("文件读取打开失败");
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