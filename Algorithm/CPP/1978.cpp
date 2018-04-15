#include <stdio.h>

using namespace std;

bool isPrime(int n) 
{
    if (n <= 1)
        return false;
    
    if ( (n & 1) == 0 )
        return (n == 2);
    
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;    
}

int main(void)
{
    int t;
    int n[101] = { 0, };
    int primeCount = 0;
    int divideCount = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) 
    {
        scanf("%d", &n[i]);
    }

    for (int k = 0; k < t; k++) 
    {
        if (isPrime(n[k]))
            primeCount++;
    }
    printf("%d\n", primeCount);
}