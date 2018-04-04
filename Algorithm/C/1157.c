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
        if (input[count] == '\0') break; // ���ڿ��� ��

        for (int i = 0; i < 26; i++) // �빮�� �˻�
        {
            if (input[count] == BigAlphabet[i])
            {
                counting[i] += 1;
            }
        }

        for (int i = 0; i < 26; i++) // �ҹ��� �˻�
        {
            if (input[count] == SmallAlphabet[i])
            {
                counting[i] += 1;
            }
        }

        count++;
    }

    // ����
    int duplication = 0;
    int big = 0;
    int index = 0;
    for (int i = 0; i < 26; i++) // ī���� ���鼭 �� ū ī���� ã��
    {
        
        if (big <= counting[i])
        {
            duplication = 0;
            if (big == counting[i]) // �ߺ� �˻�
            {
                duplication = 1;
            }
            big = counting[i];
            index = i; // �� ū ī���� �ε��� ����
        }
        //printf(" %d ", counting[i]);
    }

    if (duplication) // �ߺ��̸� ����
    {
        printf("?\n");
    }
    else // �ƴϸ� ���ڿ�
    {
        printf("%c\n", BigAlphabet[index]);
    }
}