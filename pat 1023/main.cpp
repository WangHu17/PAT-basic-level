#include<stdio.h>
int main()
{
    int a[10],b[50],i,j,n=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<50;j++)
    {
        b[j]=0;
    }
    for(i=1;i<10;i++)
    {
        if(a[i]!=0)
        {
            b[0]=i;
            a[i]--;
            break;
        }
    }
    j=1;
    for(i=0;i<10;i++)
    {
        if(a[i]!=0)
        {
            n+=a[i];
            for(;j<n+1;j++)
            {
                b[j]=i;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}