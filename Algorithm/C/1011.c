#include <stdio.h>

int calculate(int distance)
{

}

int main(void)
{
    // before move k
    // after move k-1 or k+1
    // ex first move is this case -1, 0, 1 and -1 or 0 is no means
    // next move 0, 1, 2
    // next move 1, 2, 3


    // go x, dest y
    // but, dest y before k = 1

    // 1 | 1
    // 2 | 1, 1
    // 3 | 1, 1, 1
    // 4 | 1, 2, 1
    // 5 | 1, 2, 2, 1

    long t, k, x, a, b = 0;
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d%d", &a, &b);
        x = b - a;
        k = 0;
        for (long i = 1; ; i++)
        {
            k = k + i;
            if (x <= k)
            {
                printf("%u\n", 2 * i - 1);
                printf("i = %u, k = %u, x = %u, 2*i-1 = %u\n", i, k, x, 2*i-1);
                break;
            }
            k = k + i;
            if (x <= k)
            {
                printf("%u\n", 2*i);
                printf("i = %u, k = %u, x = %u, 2*i = %u\n", i, k, x, 2*i);
                break;
            }
        }
    }
}