#include <stdio.h>
int main() 
{
    int t,i,n,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        char a[n];
        int f=0;
        scanf("%s",&a);
        for(k=0;k<n;k++)
        {
            if(a[k]=='Y')
            {
                printf("NOT INDIAN\n");
                f=1;
                break;
            }
            else if(a[k]=='I')
            {
                printf("INDIAN\n");
                f=1;
                break;
            }
        }
        if(f==0)
            printf("NOT SURE\n");
    }
	return 0;
}

