/* Simple exercise that gets two inputs, being the first the day of the month and the second being the month.
I sums up the days of the months before the current and then with the day of the current month, printing the current day.
Exercise done while studying C in http://www.edube.org - 2.1.5.16 LAB
I added array and for loop for my own, to get a better code, in spite of not being the focus of the current level course yet */

#include <stdio.h>

int main()
{
        int dayOfmonth, monthOfyear, days = 0;
        int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        
        printf("Type a day of the month:\n");
        scanf("%d", &dayOfmonth);
        printf("Type a month of the year:\n");
        scanf("%d", &monthOfyear);
    
        if ((dayOfmonth > 31) || (monthOfyear > 12) || (dayOfmonth <= 0) || (monthOfyear <= 0))
        {
            printf("Wrong date. Try again.");
        }    
        
        for (int i = 0; i < (monthOfyear-1); ++i)
            days += months[i];
            printf("Sum of months: %d\n", days); /* Just a print to validate the sum of months before the current one */
        
            days += dayOfmonth;

        printf("The day of the year: %d\n", days);
	return 0;
}
