//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char str[500001] = { 0 };
//    int startnum[500001];
//    int endnum[500001];
//    gets(str);//��Ȼscanf gets�����ַ���ĩβ�Զ�����'\0',�������Ǽ����Զ��ĳ���ĩβ����˴���Ϊstr[499999]='\0',����˵������õ��ַ�������500000���м�ͻ�����޶�����������������ó����壬������strlen�ó����Ⱥ���ĩβ��'\0'//
//    //�������ַ���������ǲ����Զ����'\0'��Ҫע����������//
//    int len = strlen(str);
//    int start = 0;
//    int end = 0;
//    for (int i = 0; str[i]!='\0'/*��������str[len]='\0',����str[i]!='\0'��Ϊ�ж�����*/; i++) {
//        if (str[i] != ' ') {
//            startnum[start++] = i;
//            while (str[i] != ' '&& str[i] != '\0'/*ÿһ�����ַ��������������Ҫ�����Ƿ�Խ��*/) {
//                i++;
//            }
//            endnum[end++] = i - 1;
//        }
//    }
//    for (int i = start - 1; i >= 0; i--) {
//        for (int j = startnum[i]; j <= endnum[i]; j++) {
//            putchar(str[j]);
//        }
//        if (i != 0) {
//            putchar(' ');
//        }
//    }
//    return 0;
//}
