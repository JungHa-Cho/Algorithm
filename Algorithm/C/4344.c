#include <stdio.h>

int main(void)
{
    // �ڱ� �����߿� �ִ밪 = M
    // �׸��� ���� ��� ������ ( ���� / M * 100 )���� ��ħ

    // EX �ְ��� 70�̰�, ���� ������ 50�̸� ���� ������ 50/70*100�� �ȴ�.
    int N = 0.0; // 1000���� �۰ų� ����
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
            // 75.50 ����϶�?
            // 76 < 75.10
            if ((double)M[i] > AVERAGE) count++;
        }

        printf("%.3f%%\n", (double)count/N*100); // C double ����� %f�� �ڵ� �ݿø�
        sum = 0;
        count = 0;
    }

    return 0;
}