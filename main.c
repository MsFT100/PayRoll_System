/*
Payroll System
created by Lennox Mathew
march 6, 2021
MIT licence c99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100], kra[201];
    int hours, overtime, gross, tax, net;
    printf("Gitonga\ ' s Factory Payroll\n");

    //capture input
    printf("Enter name:");
    gets(name);
    printf("Enter KRA PIN");
    gets(kra);
    printf("Hours Worked: ");
    scanf("%d", &hours);

    //Compputation
    if(hours > 40){
        overtime = (hours - 40) * 1.5 * 1000;

    }
    else{
        overtime = 0;
        gross = hours * 1000;

    }

    tax = 0.3 * gross;
    net = gross - tax;

    //output
    printf("Employee Name: %s\n", name);
    printf("Gross Income: %d\n", gross);
    printf("Tax Paid: %d\n", tax);
    printf("Net Income: %d\n", net);

    return 0;
}
