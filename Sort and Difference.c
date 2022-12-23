#include<stdio.h>
int main()
{
    int n,i,j,tem;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]<b[j+1])
            {
                tem=b[j];
                b[j]=b[j+1];
                b[j+1]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
