#include <stdio.h>

int main(void)
{
    // 자기 점수중에 최대값 = M
    // 그리고 나서 모든 점수를 ( 점수 / M * 100 )으로 고침

    // EX 최고점 70이고, ㅅ학 점수가 50이면 수학 점수는 50/70*100이 된다.
    int N = 0.0; // 1000보다 작거나 같음
    int M[1000] = { 0, };
    int MAX = 0;
    double AVERAGE = 0.0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &M[i]);
        if (MAX < M[i]) MAX = M[i];
        //printf("%d\n", M[i]);
    }

    for (int i = 0; i < N; i++)
    {
        //printf("%d %d %f\n", M[i], MAX, (double)M[i]/MAX*100);
        //M[i] = M[i]/MAX*100;
        AVERAGE = AVERAGE + (double)M[i]/MAX*100;
    }


    printf("%f\n", AVERAGE/N);

    return 0;
}