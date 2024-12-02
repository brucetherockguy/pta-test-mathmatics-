#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    char str[100][11];//多个字符串的操作，采用二维数组的方法//
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    char* strp[100];//字符串指针的定义，就是储存地址的字符串，因为str字符串是常量，所以说不能直接进行赋值，只能作为被赋值的对象//
    for (int i = 0; i < n; i++) {
        strp[i] = str[i];
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(strp[j], strp[j + 1]) > 0) {//strcmp函数只有大于0，等于0.小于0这三种判定//
                char* p = strp[j];
                strp[j] = strp[j + 1];
                strp[j + 1] = p;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        puts(strp[i]);//puts函数可自动打出'\n',它不需要格式符//
    }
    return 0;
}