#include <stdio.h>

int main(void) 
{
    int a;
    int three = 3;
    int five = 5;
    
    scanf("%d", &a);
    
    // 3 <= N <= 5000
    // 최소 횟수를 구해야 함
    // 5로 나눈뒤 3으로 나눈 값의 나머지가 0이 있는지 체크
    // a가 12일때, 5로 나눴을때 나머지로 3을 나누고,

    // 프로세스
    // 1. 12 - 10 = 2이고 2를 3으로 나눌수 없음
    // 2. 12 - 5 = 7이고 7을 3으로 나눌수 없음
    // 3. 12 - 0 = 12이고 12를 3으로 나눌 수 있음
    // 4. 입력값 12에 대한 정답은 3
    // 5000 까지의 프로세스는 1~4 반복
    
    // 반례
    if (a == 3) { printf("1"); return 0; }
    if (a == 4) { printf("-1"); return 0; }
    if (a == 5) { printf("1"); return 0; }
    if (a < 10 && a % three == 0) { printf("%d", a / three); return 0;}
    if (a % five == 0) { printf("%d", a/five); return 0; }
    if ((a % five) % three == 0) { 
        int c = a / five;
        printf("%d", ((a%five)/three)+c); 
        return 0; 
    }

    if (!((a % five) % three == 0)) {
        int c = a / five;
        //printf("%d\r\n", c);
        while (--c != -1) {
            //printf("%d\r\n", c);
            if ((a - (c*five)) % three == 0) {
                //printf("%d %d %d %d %d", c, a, c*five, c*five%three, ((a-c*five)/three) + c);
                printf("%d", ((a-c*five)/three) + c);
                return 0;
            } 
        }
    }

    printf("-1");
    return 0;
}