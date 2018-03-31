#include <stdio.h>

int main(void) 
{
    char input[100];
    int len, sum = 0;
    scanf("%d", &len);
    scanf("%s", input);

    for (int i = 0; i < len; i++) {
        sum += (input[i] - '0');
    }

    printf("%d\n", sum);

    return 0;

    //c-'0' 이다. c -'0'을 하는이유는 C언어에서 char와 int형이 섞여있게되면 모든 변수는 int 형으로 바뀌게 됩니다. 
    // 그래서 C 가 '1'이라면 C 에서의 실제값은 1이 아니고 문자1의 ASCII 값이 됩니다. 
    // 그러므로 C에서 '0'을 빼야지만 숫자에 아무영향을 미치지 않고 원하는 숫자를 사용하게됩니다. 
    // 위의 코드에서는 이 숫자가 배열의 첨자로 사용되고 있습니다. 여기서는 c-'0' 이 배열의 첨자로 사용되고 있다는 점만 알면된다.

    // int 범위가 벗어남, 100자리 수까지 입력이 들어오면,, 아래 방법은 안됨
    // N( 1 <= N <= 100 )
    // 각 숫자를 더하기
    //int n; // 숫자의 개수
    //int nn; // 숫자 n개가 공백없이 주어짐
    //int x;

    //scanf("%d", &n);
    //scanf("%d", &nn);

    //printf("%d", n);
    //printf("%d %d \r\n", (int)pow(10, n), (int)pow(10, n-1));
    //n = n - 1;
    //printf("%d %d %d\r\n", n, (int)pow(10, n) + 1, (int)pow(10, n-1));

    // i = 1 ~ 100
    // 1자리수에서부터 100자리수 까지
    // N = 1, 1
    // N = 2, 1, 10
    // N = 3, 1, 10, 100
    // N = 4, 1, 10, 100, 1000
    // N = 5, 1, 10, 100, 1000, 10000
    
    //int c = 0;
    //for (int i = (int)pow(10, n-1)+1; i >= 1; i = i / 10) 
    //{
        //printf("i = %d, n = %d, nn = %d, nn / i = %d, %d\r\n", i, n, nn, nn/i, nn/i%10);
        //c = c + (nn/i%10);
    //}
    //printf("%d",c);
    //return 0;
}