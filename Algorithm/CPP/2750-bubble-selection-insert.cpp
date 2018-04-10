#include <stdio.h>
#include <string.h>

typedef enum { FALSE, TRUE } boolean;

void swap(int nn[], int index)
{
    int temp = nn[index-1];
    nn[index-1] = nn[index];
    nn[index] = temp;
}

boolean ascending(int first, int second) {
    return first < second ? TRUE : FALSE;
}

boolean descending(int first, int second) {
    return first > second ? TRUE : FALSE;
}

void SelectionSort(int sequence[], int size)
{
    int minIndex = 0;
    int minValue = 0;
    for (int round = 0; round < size; round++) {
        minValue = sequence[round];
        minIndex = round;
        for (int index = round; index < size; index++) {
            if (minValue > sequence[index]) {
                minValue = sequence[index];
                minIndex = index;
            }
        }

        if (minIndex == round) {
        } else {
            int temp = sequence[round];
            sequence[round] = sequence[minIndex];
            sequence[minIndex] = temp;
        }    
    }




    printf("SELECTION ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");
}

void InsertSort(int sequence[], int size)
{
    // �� ���� ��ĭ����, ��ĭ ��ĭ�� ���ذ��� ������ ���� ����
    // ���ǿ� ������ break;
    for (int round = 1; round < size; round++) 
        for (int index = round; index > 0; index--) 
            if (descending(sequence[index - 1], sequence[index])) 
                swap(sequence, index);


    printf("INSERT    ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");
}

void BubbleSort(int sequence[], int size)
{
    // ���⿡ ���� ����
    // ���������� ���� ���̳�, �������� ���ĵ� ���� ���� ���̳�.
    // �� ���� ����, ���� ������ ���� �ؾ���

    // Round = size - 1;
    // Index = ���帶�� ������ Ʋ����
    // �����ʿ��� �������� �˻��ϰ�, ���ʿ� ���� 
    for (int round = 0; round < size-1; round++)
        for (int index = size-1; index > round; index--)
            if (descending(sequence[index-1], sequence[index]))
                swap(sequence, index);




    printf("BUBBLE    ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");
}

int main(void)
{
    int size = 0;
    int sequence1[1001] = { 0, };
    int sequence2[1001] = { 0, };
    int sequence3[1001] = { 0, };
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &sequence1[i]);
    }

    memcpy(sequence2, sequence1, sizeof(sequence1));
    memcpy(sequence3, sequence1, sizeof(sequence1));

    BubbleSort(sequence1, size);
    InsertSort(sequence2, size);
    SelectionSort(sequence3, size);

    return 0;
}