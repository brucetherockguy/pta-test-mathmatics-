#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[500001] = { 0 };
	gets(str);
	int len = strlen(str);
	int first = 1;
	for (int i = len - 1; i >= 0; i--) {//既然是倒序输入，那么操作的时候就直接从末尾开始//
		int end, start;//end start，是与每一次判定开头和末尾所联动的，故无需将每一次的end start都储存在数组当中，完全可以随着每一次循环而变化，无需拆分成两次循环。而这也要求必须在一次循环中解决问题//
		if (str[i] != ' ') {
			 end = i;
			 while (str[i] != ' ' && i >= 0/*也要判定是否越界*/) {
				 i--;
			}
			 start = i + 1;
			 if (first == 0) {//判定first，只需在合适的位置加上关于first的if判断语句，之后在整个循环的末尾改变first的值即可//
				 putchar(' ');
			 }
			 for (int j = start; j <= end; j++) {
				 putchar(str[j]);
			 }
				 first = 0;
		}
	}
	return 0;
}