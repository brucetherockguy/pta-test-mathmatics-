#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
    char str[101];
    gets(str);
    int n;
    scanf("%d", &n);
    int len = strlen(str);
    for (int i = 1; i <= n; i++) {//左移从第一位开始，右移从最后一位开始，总而言之就是从改变后会“被踢出”字符串的元素开始//
        char cx = str[0];
        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        str[len - 1] = cx;
    }
    puts(str);
    return 0;
}