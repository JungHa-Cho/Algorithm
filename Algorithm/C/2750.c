#include <stdio.h>

void BubbleSort(int nn[], int n)
{
    for (int round = 1; round <= n-1; round++)
    {
        for (int index = n; index > round; index--)
        {
            if (nn[index-1] > nn[index])
            {
                int temp = nn[index-1];
                nn[index-1] = nn[index];
                nn[index] = temp;
            }
        }
    }
}

void print(int nn[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", nn[i]);
    }
}

int main(void)
{
    int n = 0;
    int nn[1001] = { 0, };
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nn[i]);
    }
    BubbleSort(nn, n);
    print(nn, n);
    return 0;
}