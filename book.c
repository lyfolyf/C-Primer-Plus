//仅包含一本书的目录
#include<stdio.h>
#include<string.h>
#define MAXTITL 41
#define MAXAUTL 31
struct book { //定义book结构
    char title[MAXTITL];//定义结构第一个成员字符组title
    char author[MAXAUTL];//定义结构第二个成员字符组author
    float value;//定义结构第三个成员浮点变量value
};
int main(void)
{
	struct book library;
	printf("Please enter the book title.\n");
	gets(library.title);
	printf("NOW enter the author.\n");
	gets(library.author);
	printf("NOW enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.title, library.author, library.value);
	printf("DONE.\n");
	return 0;
}