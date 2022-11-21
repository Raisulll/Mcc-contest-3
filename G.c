#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int k,sum=0;
    scanf("%lld",&k);
    for (int i = 1; i <=k ; i++)
    {
        sum=sum+i;
    }
    if(sum%2==0)
        printf("%lld/1\n",sum/2);
    else
        printf("%lld/2\n",sum);
    return 0;
}
