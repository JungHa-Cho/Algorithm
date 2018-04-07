#include <stdio.h>

using namespace std;

int main(void)
{
    // 규칙 찾기
    // 1
    // 2, 3, 4, 5, 6, 7 = 6개
    // 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 = 6 + 6 개
    // 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 = 6 + 6 + 6개
    int N;
    scanf("%d", &N);
    int cnt = 1;
    long long range = 1;
    long long tmp = 1;

    while (1) {
        if (range >= N) {
            break;
        }

        tmp = 6 * (cnt++);
        range += tmp;
    }
    printf("%d\n", cnt);
    return 0;
}