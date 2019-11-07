#include <stdio.h>
int DigitsCounter(int n)
{
    int counter=0;
    while(n!=0)
    {
        n /= 2;
        counter++;
    }
    return counter;
}
int main()
{
    int n;
    scanf("%d",&n);
    int Bi_Digits = DigitsCounter(n);
    int Binary[Bi_Digits];
    for(int i=0; i<Bi_Digits; i++)
    {
        Binary[i] = n%2;
        n /= 2;
    }
    for(int i=Bi_Digits-1; i>=0; i--)
    {
        printf("%d",Binary[i]);
    }
    printf("\n");
    return 0;
}