#include <stdio.h>

int main() {
    int month;
    
    printf("Введите номер месяца (от 1 до 12): ");
    scanf("%d", &month);
    
    if (month == 12 || month == 1 || month == 2) {
        printf("winter\n");
    } else if (month >= 3 && month <= 5) {
        printf("spring\n");
    } else if (month >= 6 && month <= 8) {
        printf("summer\n");
    } else if (month >= 9 && month <= 11) {
        printf("autumn\n");
    } else {
        printf("Неверный номер месяца\n");
    }
    
    return 0;
}