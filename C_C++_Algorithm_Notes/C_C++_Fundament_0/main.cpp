#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a[10];
    //memset�������ڴ�ռ��ʼ�����Է�������Ҫ���ݴ��������ϵ�Ӱ��
    memset(a,1,sizeof(a));
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    char str[10] = "123";
    int n;
    //sscanf�������ַ��ԡ�%d����ʽд��int�ͱ�����
    sscanf(str, "%d", &n);
    printf("\n%d",n);

    n=324;
    //sprintf��n��"%d"�ĸ�ʽд��str�ַ�������
    sprintf(str, "%d", n);
    printf("\n%s",str);

    char str1[100] = "1024:3.14,hello", str2[100];
    double db;
    sscanf(str1, "%d:%lf,%s", &n, &db, str2);
    printf("\n%d:%.2lf,%s",n,db,str2);
    //ssprintf�������ͬsscanfͬ��

    int a1,b;
    while(scanf("%d%d", &a1,&b) != EOF){
        printf("%d\n",a1+b);
        printf("\n");
    }
    return 0;
}
