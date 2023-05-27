#include <time.h>
#include <stdio.h>

struct myTime
{
    int h;
    int m;
    int s;
};

struct myTime get_time(int timezone)
{
    time_t cur_time = time(NULL);
    int s = cur_time % 60;
    int m = ((cur_time - s) / 60) % 60;
    int h = ((cur_time - 60 * m - s) / 3600) % 24;
    struct myTime res = {.h=h+timezone, .m=m, .s=s};
    return res;
}

int main()
{
    struct myTime curTime = get_time(3);
    time_t cur_time = time(NULL) + 3 * 3600;
    struct tm* curTime2 = gmtime(&cur_time);
    printf("%d-%d-%d %d:%d:%d\n", curTime2->tm_mday, 1 + curTime2->tm_mon, 1900 + curTime2->tm_year, curTime2->tm_hour, curTime2->tm_min, curTime2->tm_sec);

    return 0;
}