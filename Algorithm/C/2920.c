#include <stdio.h>

#define c 1
#define d 2
#define e 3
#define f 4
#define g 5
#define a 6
#define b 7
#define C 8

int main(void) 
{
    // �������� c d e f g a b C �� 8���� ������ �̷�� �� �ִ�.
    // c = 1, d = 2, e = 3, f = 4, g = 5, a = 6, b = 7, C = 8�� ġȯ�Ѵ�.
    // ������ ������ �־������� �̰��� ascending���� decending���� �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��϶�
    // int c = 1;
    // int d = 2;
    // int e = 3;
    // int f = 4;
    // int g = 5;
    // int a = 6;
    // int b = 87
    int DA, DB, DC, DD, DE, DF, DG, DH = 0;
    scanf("%d", &DA);
    scanf("%d", &DB);
    scanf("%d", &DC);
    scanf("%d", &DD);

    scanf("%d", &DE);
    scanf("%d", &DF);
    scanf("%d", &DG);
    scanf("%d", &DH);

    if (c == DA)
    {
        if (d == DB) {
            if (e == DC) {
                if (f == DD) {
                    if (g == DE) {
                        if (a == DF) {
                            if (b == DG) {
                                if (C == DH) {
                                    printf("ascending\n");
                                } else {
                                    printf("mixed\n");
                                    return 0;
                                }
                            } else {
                                printf("mixed\n");
                                return 0;
                            }
                        } else {
                            printf("mixed\n");
                            return 0;
                        }
                    } else {
                        printf("mixed\n");
                        return 0;
                    }
                } else {
                    printf("mixed\n");
                    return 0;
                }
            } else {
                printf("mixed\n");
                return 0;
            }
        } else {
            printf("mixed\n");
            return 0;
        }
        
    }
    else if (C == DA)
    {
        if (b == DB) {
            if (a == DC) {
                if (g == DD) {
                    if (f == DE) {
                        if (e == DF) {
                            if (d == DG) {
                                if (c == DH) {
                                    printf("descending\n");
                                } else {
                                    printf("mixed\n");
                                    return 0;
                                }
                            } else {
                                printf("mixed\n");
                                return 0;
                            }
                        } else {
                            printf("mixed\n");
                            return 0;
                        }
                    } else {
                        printf("mixed\n");
                        return 0;
                    }
                } else {
                    printf("mixed\n");
                    return 0;
                }
            } else {
                printf("mixed\n");
                return 0;
            }
        } else {
            printf("mixed\n");
            return 0;
        }
    } else {
        printf("mixed\n");
    }
    return 0;
}