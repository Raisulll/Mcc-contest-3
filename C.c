#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k,n,w,money=0;
    scanf("%d%d%d",&k,&n,&w);
    for (int i = 1; i <= w; i++)
    {
        money=money+i*k;
    }
    if (money>n)
        printf("%d\n",money-n);
    else
        printf("0\n");
    return 0;
}
