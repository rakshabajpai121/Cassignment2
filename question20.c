#include <stdio.h>

int main() {
    // 20. Day of the Week Printer
    // rakshabajpayi
    int day;
    
    printf("Enter a number (1-7) representing the day of the week: ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day!\n");
            return 1;
    }
    
    return 0;
}
