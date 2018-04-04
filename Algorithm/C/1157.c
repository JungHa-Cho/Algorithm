#include <stdio.h>

int main(void)
{
    char BigAlphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char SmallAlphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int counting[26] = { 0, };
    char input[1000000] = { 0, };

    scanf("%s", input);
    int count = 0;
    while (1)
    {
        if (input[count] == '\0') break; // 문자열의 끝

        for (int i = 0; i < 26; i++) // 대문자 검사
        {
            if (input[count] == BigAlphabet[i])
            {
                counting[i] += 1;
            }
        }

        for (int i = 0; i < 26; i++) // 소문자 검사
        {
            if (input[count] == SmallAlphabet[i])
            {
                counting[i] += 1;
            }
        }

        count++;
    }

    // 검증
    int duplication = 0;
    int big = 0;
    int index = 0;
    for (int i = 0; i < 26; i++) // 카운팅 돌면서 젤 큰 카운팅 찾음
    {
        
        if (big <= counting[i])
        {
            duplication = 0;
            if (big == counting[i]) // 중복 검사
            {
                duplication = 1;
            }
            big = counting[i];
            index = i; // 젤 큰 카운팅 인덱스 저장
        }
        //printf(" %d ", counting[i]);
    }

    if (duplication) // 중복이면 종료
    {
        printf("?\n");
    }
    else // 아니면 문자열
    {
        printf("%c\n", BigAlphabet[index]);
    }
}