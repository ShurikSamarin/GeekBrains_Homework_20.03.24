#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    
    printf("Введите пять чисел через пробел: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    int min = (num1 < num2) ? ((num1 < num3) ? ((num1 < num4) ? ((num1 < num5) ? num1 : num5) : num4) : num3) : ((num2 < num3) ? ((num2 < num4) ? ((num2 < num5) ? num2 : num5) : num4) : ((num3 < num4) ? ((num3 < num5) ? num3 : num5) : ((num4 < num5) ? num4 : num5)));
    
    printf("Наименьшее число: %d\n", min);
    
    return 0;
}