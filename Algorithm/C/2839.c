#include <stdio.h>

int main(void) 
{
    int a;
    int three = 3;
    int five = 5;
    
    scanf("%d", &a);
    
    // 3 <= N <= 5000
    // �ּ� Ƚ���� ���ؾ� ��
    // 5�� ������ 3���� ���� ���� �������� 0�� �ִ��� üũ
    // a�� 12�϶�, 5�� �������� �������� 3�� ������,

    // ���μ���
    // 1. 12 - 10 = 2�̰� 2�� 3���� ������ ����
    // 2. 12 - 5 = 7�̰� 7�� 3���� ������ ����
    // 3. 12 - 0 = 12�̰� 12�� 3���� ���� �� ����
    // 4. �Է°� 12�� ���� ������ 3
    // 5000 ������ ���μ����� 1~4 �ݺ�
    
    // �ݷ�
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