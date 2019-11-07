#include <stdio.h>
int findDigits(int n)
{
    int counter = 0;
    while (n != 0)
    {
        n /= 10;
        counter++;
    }
    return counter;
}
void WriteToArray(int n, int *arr, int digits)
{
    int i = digits-1;
    while (n != 0)
    {
        arr[i] = n % 10;
        n /= 10;
        i--;
    }
}
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
    int n;
    scanf("%d", &n);
    int digits = findDigits(n);
    int arr[digits];
    WriteToArray(n, arr, digits);
    for(int i=0; i<digits; i++)
    {
        if(arr[i]==1)
        {
            arr[i] = 0;
        }
        else if(arr[i]==0)
        {
            arr[i] = 1;
        }
    }
    //....
    for(int i=0; i<digits; i++)
    {
        if(arr[i]>=2)
        {
            printf("WTF that you input.\nThe exam said ONLY Binary!!\n");
        }
    }
    
    arr[digits-1]++;
    for(int i=0; i<digits; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    
    return 0;
}