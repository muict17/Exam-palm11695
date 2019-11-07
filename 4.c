#include <stdio.h>
void Transpose(int n, int m, int i, int j, int arr[][m], int tps[][n],int counter)
{
    if(counter == n*m)
    {
        return;
    }
    tps[j][n-1-i] = arr[i][j];
    counter++;
    if(j>m-1)
    {
        Transpose(n,m,i+1,0,arr,tps,counter);
    }
    else
    {
        Transpose(n,m,i,j+1,arr,tps,counter);
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],tps[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    Transpose(n,m,0,0,arr,tps,0);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",tps[i][j]);
        }
        printf("\n");
    }
    return 0;
}