#include <stdio.h>
int Power(int n, int pwr)
{
    int value = 1;
    if (pwr != 0)
    {
         for (int i = 0; i < pwr; i++)
        {
            value *= n;
        }
    }
    return value;
}
int main()
{
    int n,check=0,temp,p3;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        p3 = Power(i,3);
        if(n == p3)
        {
            temp = i;
            check = 1;
            break;
        }
    }
    if(check==1)
    {
        printf("%d\n",temp);
    }
    else
    {
        printf("false\n");
    }
    
    return 0;
}