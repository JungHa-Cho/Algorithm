#include <stdio.h>
#include <iostream>

using namespace std;

int main() 
{
    int divide1 = 3; // kg
    int divide2 = 5; // kg
    int input_kg;

    scanf("%d", &input_kg);

    int remainder;
    remainder = input_kg % divide2;
    int divide_five;
    divide_five = input_kg / divide2;

    // 예외 처리
    if (input_kg < divide2 ) {
        if (input_kg < divide1 ) {
            printf("%d", -1);
        } else if (input_kg == divide1) {
            printf("%d", 1);
        }
    } else if (input_kg == divide2) {
        printf("%d", 1);
    }

    int divide_three;
    if (remainder % divide1 != 0) {
        printf("%d", -1);
        4
    } else {
        divide_three = remainder / divide1; 
        printf("%d", divide_five + divide_three);
    }

    return 0;
}