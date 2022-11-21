#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x1,x2,x3,x4,x5;
    scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
    if(x1==0)
        printf("1\n");
    else if(x2==0)
        printf("2\n");
    else if(x3==0)
        printf("3\n");
    else if(x4==0)
        printf("4\n");
    else
        printf("5\n");
    return 0;
}
