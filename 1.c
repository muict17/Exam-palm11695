#include <stdio.h>
void Sorting(int n, int *arr)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int PositiveCounter(int n, int arr[])
{
    int counter = 0;
    for(int i=0; i<n ; i++)
    {
        if(arr[i]>=0)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int PositiveElements = PositiveCounter(n,arr);
    Sorting(n,arr);
    if(PositiveElements > 3)
    {
        for(int i=0; i<PositiveElements; i++)
        {
            sum += arr[i];
        }
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            sum += arr[i];
        }
    }
    printf("%d\n",sum);
    return 0;
}