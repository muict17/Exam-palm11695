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
void WriteToArray(int n, int *Binary)
{
    //Reverse Binary
    int i = 0;
    while (n != 0)
    {
        Binary[i] = n % 10;
        n /= 10;
        i++;
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
    int Binary[digits];
    WriteToArray(n, Binary);
    //Find Base 8 digits
    int Base8_digits;
    if (digits % 3 == 0)
    {
        Base8_digits = digits / 3;
    }
    else
    {
        Base8_digits = (digits / 3) + 1;
    }
    int Base8[Base8_digits];
    for(int i=0; i<Base8_digits; i++)
    {
        Base8[i] = 0;
    }
    int B8_index = 0;
    for (int i = 0; i < digits;)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < digits)
            {
                Base8[B8_index] += Binary[i] * Power(2, j);
            }
            i++;
        }
        B8_index++;
    }

    for (int i = Base8_digits - 1; i >= 0; i--)
    {
        printf("%d", Base8[i]);
    }
    printf("\n");
    return 0;
}