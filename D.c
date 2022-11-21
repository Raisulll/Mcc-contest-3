#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,a,b;
    scanf("%d",&x);
    if (x%5==0)
        a=x/5;
    else
        a=x/5+1;
    printf("%d\n",a);
    return 0;
}
