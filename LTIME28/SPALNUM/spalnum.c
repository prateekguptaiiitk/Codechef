#include <stdio.h>
int main()
{
    int t,i,k,j;
    long long l,r,d,rev=0,s=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&l,&r);
        for(k=l;k<=r;k++)
        {
            for(j=k;j>0;j=j/10)
            {
                d=j%10;
                rev=rev*10+d;
            }
            if(rev==k)
            {
                s=s+k;
            }
            rev=0;
        }
        printf("%lld\n",s);
        s=0;
    }
	return 0;
}

