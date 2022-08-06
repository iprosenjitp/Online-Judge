#include <iostream>
using namespace std;

int main()
{
    char a[4], b[4];
    int start_date, end_date, duration;
    int start_day, start_hr, start_min, start_sec;
    int end_day, end_hr, end_min, end_sec;
    int min, hr, day;

    scanf("%s %d", &a, &start_day);
    scanf("%d : %d : %d", &start_hr, &start_min, &start_sec);

    scanf("%s %d", &b, &end_day);
    scanf("%d : %d : %d", &end_hr, &end_min, &end_sec);

    start_date = start_day*86400 + start_hr*3600 + start_min*60 + start_sec;
    end_date = end_day*86400 + end_hr*3600 + end_min*60 + end_sec;

    duration = end_date - start_date;

    day = duration / 86400;
    duration = duration % 86400;

    hr = duration / 3600;
    duration = duration % 3600;

    min = duration / 60;
    duration = duration % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hr, min, duration);

    return 0;
}
