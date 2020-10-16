#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a[10];
    //memset常用于内存空间初始化，以防备不必要数据带来程序上的影响
    memset(a,1,sizeof(a));
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    char str[10] = "123";
    int n;
    //sscanf将数字字符以“%d”形式写到int型变量中
    sscanf(str, "%d", &n);
    printf("\n%d",n);

    n=324;
    //sprintf将n以"%d"的格式写到str字符数组中
    sprintf(str, "%d", n);
    printf("\n%s",str);

    char str1[100] = "1024:3.14,hello", str2[100];
    double db;
    sscanf(str1, "%d:%lf,%s", &n, &db, str2);
    printf("\n%d:%.2lf,%s",n,db,str2);
    //ssprintf多项变量同sscanf同理

    int a1,b;
    while(scanf("%d%d", &a1,&b) != EOF){
        printf("%d\n",a1+b);
        printf("\n");
    }
    return 0;
}
