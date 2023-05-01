/* Simple exercise that gets one input of the day of the week and translates it to the name of the day.
Exercise done while studying C in http://www.edube.org - 2.1.5.17 LAB
I added array on my own, to get a better code, in spite of not being the focus of the current level course yet.
I could not find the reason for, but when I input 3 as day, if pulls down the third and fourth elements of the array together.*/

#include <stdio.h>

int main()
{
        int dayOfweek, indexday = 0;
        char days[7][9] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
        
        printf("Type a day of the week:\n");
        scanf("%d", &dayOfweek);
    
        if ((dayOfweek > 7) || (dayOfweek <= 0))
        {
            printf("Wrong date. Try again.\n");
            return 0;
        }    
        
        indexday = dayOfweek - 1;
        
        printf("The day of the week: %s\n", days[indexday]);

	return 0;
}
