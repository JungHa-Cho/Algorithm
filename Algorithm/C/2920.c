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
    // 다장조는 c d e f g a b C 총 8개의 음으로 이루어 져 있다.
    // c = 1, d = 2, e = 3, f = 4, g = 5, a = 6, b = 7, C = 8로 치환한다.
    // 연주한 순서가 주어졌을때 이것이 ascending인지 decending인지 아니면 mixed인지 판별하는 프로그램을 작성하라
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