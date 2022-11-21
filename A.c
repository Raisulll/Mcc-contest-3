#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,max,min,mid;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        max=a;
    else if (b>c)
        max=b;
    else
        max=c;
    if (a<b && a<c)
        min=a;
    else if (b<c)
        min=b;
    else
        min=c;
    if((a<b && a>c)|| (a<c && a>b))
        mid=a;
    else if((b<c && b>a) || (b<a && b>c))
        mid=b;
    else
        mid=c;
    printf("%d %d %d\n",min,mid,max);
    return 0;
}
