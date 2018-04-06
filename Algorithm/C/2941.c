#include <stdio.h>
#include <string.h>

int main(void)
{
    char a = 'c';
    char a1 = '=';

    char b = 'c';
    char b1 = '-';

    char c = 'd';
    char c1 = 'z';
    char c2 = '=';

    char d = 'd';
    char d1 = '-';

    char e = 'l';
    char e1 = 'j';

    char f = 'n';
    char f1 = 'j';

    char g = 's';
    char g1 = '=';

    char h = 'z';
    char h1 = '=';

    char input[101];
    int count = 0;
    int flag = 0;
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++)
    {
        //char *temp = &input[i];
        //printf("%c\n", input[i]);
        if (strcmp(&a, &input[i]) == 1) 
        {
            //printf("%c\n", input[+2]);
            flag = flag + 1;
            count++;
        } 
        else if (strcmp(&c, &input[i]) == 1)
        {
            if (strcmp(&c1, &input[i+1]) == 1)
            {
                flag = flag + 1;
                count++;
            } 
            else 
            {
                flag = flag + 1;
                count++;
            }
        }
        else if (strcmp(&e, &input[i]) == 1)
        {
            flag = flag + 1;
            count++;
        }
        else if (strcmp(&f, &input[i]) == 1)
        {
            flag = flag + 1;
            count++;
        }
        else if (strcmp(&g, &input[i]) == 1)
        {
            flag = flag + 1;
            count++;
        }
        else if (strcmp(&h, &input[i]) == 1)
        {
            flag = flag + 1;
            count++;
        }
        else
        {
            printf("# %d #\n", flag);
            if (flag > 0)
            {
                flag--;
            }
            else
            {
                count++;
            }
        }
    }
    //char croatia[] = {'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='};
    printf("%d\n", count);
    return 0;
}