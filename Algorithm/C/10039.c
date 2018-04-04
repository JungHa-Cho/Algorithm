#include <stdio.h>

int main(void)
{
    int WONSUB, SEHUI, SANGGUEN, SUNGE, KANGSU, sum = 0;
    
    scanf("%d", &WONSUB);
    scanf("%d", &SEHUI);
    scanf("%d", &SANGGUEN);
    scanf("%d", &SUNGE);
    scanf("%d", &KANGSU);

    if (WONSUB < 40) WONSUB = 40;
    if (SEHUI < 40) SEHUI = 40;
    if (SANGGUEN < 40) SANGGUEN = 40;
    if (SUNGE < 40) SUNGE = 40;
    if (KANGSU < 40) KANGSU = 40;

    sum = WONSUB + SEHUI + SANGGUEN + SUNGE + KANGSU;

    printf("%d\n", sum/5);
    return 0;
}