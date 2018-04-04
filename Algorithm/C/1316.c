#include <stdio.h>
#include <string.h>

int N = 0; // 100 => N 자연수
char input[100] = { 0, };
int counting[26] = { 0, };
char SmallAlphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

void printCounting() 
{
    printf("[");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", SmallAlphabet[i]);
    }
    printf("]\n");
    printf("[");
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", counting[i]);
    }
    printf("]");
    printf("\n");
}

int getAlphabetIndex(char c)
{
    for (int i = 0; i < 26; i++)
    {
        if (SmallAlphabet[i] == c)
        {
            return i;
        }
    }
}

void initCount()
{
    for (int i = 0; i < 26; i++)
    {
        counting[i] = 0;
    }
}

int main(void)
{
    int group = 0;
    int gFlag = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", input);

        for (int j = 0; (input[j] != '\0'); j++)
        {
            // 단어의 한 알파벳씩 순회
            if (j+1 == strlen(input))
            {
                gFlag = 1;
                break;
            }
            
            if (j == 0) // 첫번째 알파벳은 무조건 카운팅
            {
                counting[getAlphabetIndex(input[j])] += 1;
                gFlag = 1;
                //printCounting();
                continue;
            }

            if ((input[j] == input[j+1]) == 1)
            {
                counting[getAlphabetIndex(input[j])] += 1;
                gFlag = 1;
            }
            else
            {
                if (counting[getAlphabetIndex(input[j+1])] > 0)
                {
                    // 그룹 문자가 아님
                    gFlag = 0;
                    break;
                }
                else
                {
                    counting[getAlphabetIndex(input[j])] += 1;
                    // 그룹 문자 통과
                    gFlag = 1;
                }
            }

            //printCounting();
            //printf("%d, %c = [%d]\n", j, input[j], getAlphabetIndex(input[j]));
        }

        if (gFlag == 1) 
        {
            group++;
            //printf("group = %d\n", group);
        }
        gFlag = 0;
        initCount();
    }

    printf("%d\n", group);
    return 0;
}