#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[500001] = { 0 };
	gets(str);
	int len = strlen(str);
	int first = 1;
	for (int i = len - 1; i >= 0; i--) {//��Ȼ�ǵ������룬��ô������ʱ���ֱ�Ӵ�ĩβ��ʼ//
		int end, start;//end start������ÿһ���ж���ͷ��ĩβ�������ģ������轫ÿһ�ε�end start�����������鵱�У���ȫ��������ÿһ��ѭ�����仯�������ֳ�����ѭ��������ҲҪ�������һ��ѭ���н������//
		if (str[i] != ' ') {
			 end = i;
			 while (str[i] != ' ' && i >= 0/*ҲҪ�ж��Ƿ�Խ��*/) {
				 i--;
			}
			 start = i + 1;
			 if (first == 0) {//�ж�first��ֻ���ں��ʵ�λ�ü��Ϲ���first��if�ж���䣬֮��������ѭ����ĩβ�ı�first��ֵ����//
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