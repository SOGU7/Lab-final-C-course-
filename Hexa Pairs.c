#include <stdio.h>
#include <conio.h>
int gcd(int n1,int n2)
{
    int i,GCD_Num;
    for( i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i ==0 && n2 % i == 0)
            GCD_Num = i;
    }
    return GCD_Num;
}
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],c=0,d=0;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i!=j)
                {
                    d = gcd(a[i],a[j]);
                    if(d==1)
                        c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
