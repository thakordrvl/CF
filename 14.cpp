#include<stdio.h>
int main()
{
    int n,s[110],least=0,largest=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=1; i<n; i++)
    {
        if(s[least]>=s[i])
            least=i;
        if(s[largest]<s[i])
            largest=i;
    }
    if(least<largest)
    {
        printf("%d\n",largest+n-1-least-1);
    }
    else if(least==largest)
    {
        printf("0\n");
    }
    else//least>largest
    {
        printf("%d\n",largest+n-1-least);
    }
   //printf("%d %d %d %d\n",s[least],s[largest],least,largest);
    return 0;
}