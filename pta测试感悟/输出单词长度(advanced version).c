#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 0;
	int count = 0, temp = 0;
	while (ch != '.') {
		scanf("%c", &ch);
		if (ch != ' ' && ch != '.')
		{
			count++;//计数器 
		}//在这里有一部分的读者可能有些迷惑，要知道我们的if else语句是只执行其一的 
		else {
			if (temp == 0 && count != 0) {
				temp = 3;
				printf("%d", count);//输出第一项的单词数，前无空格 
			}
			else if (count != 0) {//第二项之后的单词数 
				printf(" %d", count);
			}
			count = 0;//count重定义，计算下一个单词的字母数量
		}
	}
	return 0;
}