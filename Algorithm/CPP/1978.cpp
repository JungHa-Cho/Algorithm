#include <stdio.h>

using namespace std;

int main(void)
{
    int t;
    int n[101];
    int primeCount = 0;
    int divideCount = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
    }


    for (int k = 0; k < t; k++) 
    {
        for (int j = 1; j < n[k]; j++)
        {
            if (j % n[k] == 0)
            {
                divideCount++;
                if (divideCount>1)
                    break;
            }
            if (j == n[k] - 1 && divideCount < 2) {
                primeCount++;
            }
        }
    }
    printf("%d\n", primeCount);
}