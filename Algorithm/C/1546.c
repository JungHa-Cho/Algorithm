#include <stdio.h>

int main(void)
{
    // �ڱ� �����߿� �ִ밪 = M
    // �׸��� ���� ��� ������ ( ���� / M * 100 )���� ��ħ

    // EX �ְ��� 70�̰�, ���� ������ 50�̸� ���� ������ 50/70*100�� �ȴ�.
    int N = 0.0; // 1000���� �۰ų� ����
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