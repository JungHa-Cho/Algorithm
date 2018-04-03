#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //int N = 0; // 0 <= N <= 99
    int count = 0;
    int input = 0;
    int cal = 0;

    char first[4];
    char last[4];

    scanf("%d", &input);
    cal = input;

    while (1) 
    {
        count++;
        if (cal < 10)
        {
            sprintf(first, "%d", cal);
            sprintf(last, "%d", cal);
            //itoa(cal, first, 10);
            //itoa(cal, last, 10);

            strcat(first, last);

            cal = atoi(first);
            //printf("%d\n", cal);
        }
        else 
        {
            //printf("%d\n", cal/10);
            //printf("%d\n", cal%10);

            sprintf(first, "%d", cal%10);
            //itoa(cal%10, first, 10);

            int temp = cal/10+cal%10;
            if (temp > 9) temp = temp % 10;

            sprintf(last, "%d", temp/10+temp%10);
            //itoa(temp/10+temp%10, last, 10);

            //printf("%s %s\n", first, last);

            strcat(first, last);

            //printf("%s\n", first);

            cal = atoi(first);
            //printf("%d\n", cal);
        }
        //printf("%d----------------\n", cal);
        if (cal == input) 
        {
            printf("%d\n", count);
            break;
        }
        first[0] = '\0';
        last[0] = '\0';
    }
    
    
    // EX 26
    // 2 + 6 = 8 --> 68
    // 6 + 8 = 14 --> 84
    // 8 + 4 = 12 --> 42
    // 4 + 2 = 6 --> 26

    // EX 8
    // 0 + 8 = 8 --> 88
    // 8 + 8 = 16 --> 86
    // 8 + 6 = 14 --> 64
    // 6 + 4 = 10 --> 40
    // 4 + 0 = 4 --> 4
    // 0 + 4 = 4 --> 44
    return 0;
}