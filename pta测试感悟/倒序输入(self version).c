//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char str[500001] = { 0 };
//    int startnum[500001];
//    int endnum[500001];
//    gets(str);//虽然scanf gets会在字符串末尾自动加上'\0',但是他是加在自定的长度末尾，如此处便为str[499999]='\0',所以说如果你用的字符串不到500000，中间就会出现无定义的情况，解决方法用初定义，或者用strlen得出长度后在末尾加'\0'//
//    //而采用字符逐个输入是不会自动添加'\0'更要注意以上内容//
//    int len = strlen(str);
//    int start = 0;
//    int end = 0;
//    for (int i = 0; str[i]!='\0'/*或者先令str[len]='\0',再用str[i]!='\0'作为判定条件*/; i++) {
//        if (str[i] != ' ') {
//            startnum[start++] = i;
//            while (str[i] != ' '&& str[i] != '\0'/*每一个对字符串的历遍操作都要考虑是否越界*/) {
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
