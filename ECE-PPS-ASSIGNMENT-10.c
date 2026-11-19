#include <stdio.h>
int isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
 int dayOfWeek(int day, int month, int year)
 {
    static int t[] =  {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3)
        year--;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;    
 }

 int main()
 {
    int year, month, day, start, i;
    char *monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     printf("Enter year: ");
     scanf("%d", &year);

     if (year < 1)
     {
        printf("Invalid year!\n");
        return 1;
     }
     if (isLeap(year))
         daysInMonth[1] = 29;
     printf("\n========== CALENDAR %d ==========\n", year);
     
     for (month = 1; month <= 12; month++)
     {
        printf("\n----------- %s -----------\n", monthNames[month - 1]);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        start = dayOfWeek(1, month, year);

        for (i = 0; i < start; i++)
            printf("  ");
        for (day = 1; day <= daysInMonth[month - 1]; day++)
        {
            printf("%4d", day);
            if ((start + day) % 7 ==0)
                printf("\n");
        }    
        printf("\n");
     }
     return 0;
 }