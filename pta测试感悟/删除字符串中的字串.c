#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[81];//������ַ������������٣��ǵ����ٳ��ȼ�1//
    char str2[81];
    gets(str1);
    gets(str2);
    while (strstr(str1, str2) != NULL) {//strstr�������ܹ��ҵ���һ����ͬ�ĵ�ַ//
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        char* px;//�����forѭ�������ﶨ�壬���׳��ְѸö�������õ������õĴ���//
        for (px = strstr(str1, str2); px < str1 + len1 - len2; px++) {
            *px = *(px + len2);
        }
        *px = '\0';
        //�ַ����ڱ仯��ǵ����һ����ֵ'\0'���京����Ĩȥ��������������Ԫ��//
    }
    puts(str1);
    return 0;
}
//������strstr������һ��Ӧ�ã�ע�����û���������Ӵ������NULL���������ж������Ǳ���Ĺؼ�//