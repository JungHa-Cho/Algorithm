#include <stdio.h>

int main(void)
{
    // 자기 점수중에 최대값 = M
    // 그리고 나서 모든 점수를 ( 점수 / M * 100 )으로 고침

    // EX 최고점 70이고, ㅅ학 점수가 50이면 수학 점수는 50/70*100이 된다.
    int N = 0.0; // 1000보다 작거나 같음
    int C = 0;
    int M[1000] = { 0, };
    int sum = 0;
    int count = 0;
    double AVERAGE = 0.0;
    scanf("%d", &C);

    for (int j = 0; j < C; j++)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &M[i]);
            sum = sum + M[i];
        }
        AVERAGE = sum / N;
        for (int i = 0; i < N; i++)
        {
            // 75.50 평균일때?
            // 76 < 75.10
            if ((double)M[i] > AVERAGE) count++;
        }

        printf("%.3f%%\n", (double)count/N*100); // C double 출력자 %f는 자동 반올림
        sum = 0;
        count = 0;
    }

    return 0;
}