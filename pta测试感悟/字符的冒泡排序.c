#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    char str[100][11];//����ַ����Ĳ��������ö�ά����ķ���//
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    char* strp[100];//�ַ���ָ��Ķ��壬���Ǵ����ַ���ַ�������Ϊstr�ַ����ǳ���������˵����ֱ�ӽ��и�ֵ��ֻ����Ϊ����ֵ�Ķ���//
    for (int i = 0; i < n; i++) {
        strp[i] = str[i];
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(strp[j], strp[j + 1]) > 0) {//strcmp����ֻ�д���0������0.С��0�������ж�//
                char* p = strp[j];
                strp[j] = strp[j + 1];
                strp[j + 1] = p;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        puts(strp[i]);//puts�������Զ����'\n',������Ҫ��ʽ��//
    }
    return 0;
}