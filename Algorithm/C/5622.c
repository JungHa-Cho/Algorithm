#include <stdio.h>
#include <string.h>

int main(void)
{
    // 다이얼 영문 : 1 - 없음
    // 다이얼 영문 : 2 - ABC
    // 다이얼 영문 : 3 - DEF
    // 다이얼 영문 : 4 - GHI
    // 다이얼 영문 : 5 - JKL
    // 다이얼 영문 : 6 - MNO
    // 다이얼 영문 : 7 - PQRS
    // 다이얼 영문 : 8 - TUV
    // 다이얼 영문 : 9 - WXYZ
    // 다이얼 영문 : 0 - ???

    //int num[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
    int num[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    char input[16];
    int count = 0;

    // 다이얼 순서 : 빈, 빈, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0
    // 인덱스 번호 : 0,   1, 2, 3, 4, 5, 6, 7, 8, 9, 0
    // 힌트 : 1은 2초가 걸린다.
    // 힌트 : 2는 3초가 걸린다. +1초씩
    
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        count = count + num[input[i]-'A'];
    }
    printf("%d\n", count);
    return 0;
}