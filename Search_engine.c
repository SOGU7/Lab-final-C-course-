#include<stdio.h>
int main()
{
    int t,n,a[1000],i,s,k,p=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&s);
        k=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==s)
            {
                printf("Case %d: %d",p,i+1);
                k++;
                break;
            }
        }
        if(k==0)
            printf("Case %d: Not Found",p);
        p++;
        printf("\n");
    }
    return 0;
}
