#include <stdio.h>
int t,a,b=0;
int main(void)
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}