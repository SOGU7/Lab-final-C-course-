#include<stdio.h>
int main()
{
    int t,n,i,rem,ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            ch = 64+rem;
            printf("%c",ch);
            n/=10;
        }
        printf("\n");
    }
    return 0;
}
