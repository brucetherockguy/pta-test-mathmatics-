#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[81];//如果是字符串不超过多少，记得至少长度加1//
    char str2[81];
    gets(str1);
    gets(str2);
    while (strstr(str1, str2) != NULL) {//strstr函数，能够找到第一次相同的地址//
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        char* px;//如果在for循环括号里定义，容易出现把该定义变量拿到后面用的错误//
        for (px = strstr(str1, str2); px < str1 + len1 - len2; px++) {
            *px = *(px + len2);
        }
        *px = '\0';
        //字符串在变化后记得最后一个赋值'\0'，其含义是抹去多余的无需操作的元素//
    }
    puts(str1);
    return 0;
}
//总体是strstr函数的一个应用，注意如果没有这样的子串会输出NULL，这样的判定条件是本题的关键//