#include <stdio.h>

int main(int argc, char *argv[]) {
    int second;
    int minute;
    int remain;

    printf("input the second: ");
    scanf("%d", &second);

    minute = second / 60;
    remain = second % 60;

    printf("%d min %d sec\n", minute, remain);

    return 0;
}