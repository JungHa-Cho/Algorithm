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
    int m, n;
    int sum = 0;
    int minimum = 10000;

    scanf("%d", &m);
    scanf("%d", &n);

    for (int k = m; k <= n; k++) 
    {
        if (isPrime(k)) {
            sum = sum + k;
            if (minimum > k) {
                minimum = k;
            }
        }
    }
    if (sum == 0) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", sum);
        printf("%d\n", minimum);
    }
}