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
			count++;//������ 
		}//��������һ���ֵĶ��߿�����Щ�Ի�Ҫ֪�����ǵ�if else�����ִֻ����һ�� 
		else {
			if (temp == 0 && count != 0) {
				temp = 3;
				printf("%d", count);//�����һ��ĵ�������ǰ�޿ո� 
			}
			else if (count != 0) {//�ڶ���֮��ĵ����� 
				printf(" %d", count);
			}
			count = 0;//count�ض��壬������һ�����ʵ���ĸ����
		}
	}
	return 0;
}