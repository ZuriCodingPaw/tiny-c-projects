#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        puts("hello baby, welcome");
    } else {
        printf("Hello, %s\n", argv[1]);
    }

    time_t now;
    time(&now);
    printf("the computer things the time is: %ld\n", now);
    printf("%s", ctime(&now));
    struct tm* clock = localtime(&now);
    int hour = clock->tm_hour;
    printf("good ");
    if (hour<12) {
        puts("morning");
    } else if(hour<17) {
        puts("afternoon");
    } else {
        puts("evening");
    }
    return 0;
}
