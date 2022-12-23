#include<stdio.h>
#include<math.h>
int main()
{
    int t,l,r,i,j,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++)
        {
            flag=1;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
