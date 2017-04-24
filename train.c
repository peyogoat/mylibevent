#include <string.h>
#include <stdio.h>
int main(void)
{
	char word[] = "hflloaa";
	printf("size is:%d\n",(int)strlen(word));
	printf("the word:%s\n",word);
	int a = strcmp(word,"hello");
	printf("a:%d\n",a);
}
