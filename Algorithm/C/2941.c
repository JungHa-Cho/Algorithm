#include <stdio.h>
#include <string.h>

int countingWord(char string[])
{
    int croatiaCount = 0;
    int length = strlen(string);
    for (int index = 0; index < length; index++)
    {
        if (string[index] == 'c') 
        {
            if (string[index + 1] == '=' || string[index + 1] == '-')
            {
                index++;
            }
        }
        else if (string[index] == 'd')
        {
            if (string[index + 1] == '-')
            {
                index++;
            }
            else if (string[index + 1] == 'z' && string[index + 2] == '=')
            {
                index++;
                index++;
            }
        }
        else if (string[index] == 'l')
        {
            if (string[index + 1] == 'j') 
            {
                index++;
            }
        }
        else if (string[index] == 'n')
        {
            if (string[index + 1] == 'j')
            {
                index++;
            }
        }
        else if (string[index] == 's')
        {
            if (string[index + 1] == '=')
            {
                index++;
            }
        }
        else if (string[index] == 'z')
        {
            if (string[index + 1] == '=')
            {
                index++;
            }
        }
        croatiaCount++;
        // printf("%c %d\n", string[index], croatiaCount);
    }
    return croatiaCount;
}

int main(void)
{
    char input[101];
    scanf("%s", input);
    printf("%d", countingWord(input));
}