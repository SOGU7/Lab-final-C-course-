#include<stdio.h>
#include<string.h>
void string(char s[])
{

    int i,d,len=0,c,f[256]= {0},count=0;
    for(i=0; s[i]!='\0'; i++)
    {
        d=s[i];
        f[d]++;
    }
    for(c=97; c<123; c++)
    {
        if(f[c]==1)
            count++;
    }
    printf("%d",count);

}
int main()
{
    int b;
    scanf("%d",&b);
    getchar();
    char a[104];
    scanf("%s",a);
    string(a);
    return 0;
}
