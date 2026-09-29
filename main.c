#include <stdio.h>

int main(int argc, char *argv[]) {
    int total;
    int hour;
    int minute;
    int second;

    printf("input the second: ");
    scanf("%d", &total);

    hour = total / 3600;
    minute = (total % 3600) / 60;
    second = total % 60;

    printf("The time is %d : %d : %d\n", hour, minute, second);

    return 0;
}