#include<stdio.h>
#include<stdlib.h>

#define YEARONE 2010
#define FIRSTMONTH 4
#define FIRSTDAY 19

int main()
{
    int resultdays, resultmonths, resultyears, totaldays, tempmonth, yeardifference, monthdifference, daydifference, presentyear, presentmonth, presentday;
    int Year=365, January=31, February=28, March=31, April=30, May=31, June=30, July=31, August=31, September=30, October=31, November=30, December=31;

    //Brief
    printf("Hello and Welcome!\n");
    printf("This program was created by: Mohamed Said.\n");
    printf("Its idea is to calculate the number of days that I knew my wife.\n");
    printf("Now, Let's get started!\n==================================================\n\n");

    //Day Section
    printf("Please, Enter the present day in numbers: ");
    scanf("%d", &presentday);

    //Month Section
    printf("\n\n==================================================\n\n01- January.\n02- February.\n03- March.\n04- April.\n05- May.\n06- June.\n07- July.\n08- August.\n09- September.\n10- October.\n11- November.\n12- December.\n\n");
    printf("Now, choose the Current Month by pressing the corresponding two digits: ");
    scanf("%d", &presentmonth);

    //Month Switch-Case
    switch(presentmonth)
    {
        case'01':
        presentmonth=January;
        break;

        case'02':
        presentmonth=February;
        break;

        case'03':
        presentmonth=March;
        break;

        case'04':
        presentmonth=April;
        break;

        case'05':
        presentmonth=May;
        break;

        case'06':
        presentmonth=June;
        break;

        case'07':
        presentmonth=July;
        break;

        case'08':
        presentmonth=August;
        break;

        case'09':
        presentmonth=September;
        break;

        case'10':
        presentmonth=October;
        break;

        case'11':
        presentmonth=November;
        break;

        case'12':
        presentmonth=December;
        break;
    }

    //Month Allocation
    February+=January;
    March+=February;
    April+=March;
    May+=April;
    June+=May;
    July+=June;
    August+=July;
    September+=August;
    October+=September;
    November+=October;
    December+=November;

    //Year Section
    printf("\n\n==================================================\n\nEnter the current year: ");
    scanf("%d", &presentyear);
    yeardifference = presentyear - YEARONE;

    //Logic
    if(presentmonth > FIRSTMONTH && presentday > FIRSTDAY)
    {
        monthdifference = presentmonth - FIRSTMONTH;
        daydifference = presentday - FIRSTDAY;
        totaldays = (yeardifference * 365) + (monthdifference * 30) + daydifference;
    }

    else if (presentmonth > FIRSTMONTH && presentday < FIRSTDAY)
    {
        monthdifference = presentmonth - FIRSTMONTH;
        daydifference = FIRSTDAY - presentday;
        totaldays = (yeardifference * 365) + (monthdifference * 30) - daydifference;
    }

    else if (presentmonth < FIRSTMONTH && presentday > FIRSTDAY)
    {
        monthdifference = FIRSTMONTH - presentmonth;
        daydifference = presentday - FIRSTDAY;
        totaldays = (yeardifference * 365) - (monthdifference * 30) + daydifference;
    }

    else if (presentmonth < FIRSTMONTH && presentday < FIRSTDAY)
    {
        monthdifference = FIRSTMONTH - presentmonth;
        daydifference = FIRSTDAY - presentday;
        totaldays = (yeardifference * 365) - (monthdifference * 30) - daydifference;
    }

    //End
    resultyears = totaldays / Year;
    resultmonths = (totaldays % Year) / 30;
    resultdays = (totaldays % Year) % 30;

    printf("\n==================================================\nTotal days = %d\n", totaldays);
    printf("\nYou Knew Loubna Since %d years, %d Months and %d days!\n\n", resultyears, resultmonths, resultdays);
    printf("================= The End =================\n");

    sleep(30);

    //The program exits right after calculation, and I need to see the result, so for now I use Sleep to defer the exiting of the program

    return 0;
}
