/*Write a program in C to calculate and print the electricity bill of a given customer.
The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

*/

#include <stdio.h>
#include <string.h>  // Include the string header file.

void main()
{
    int custid, conu;  // Declare variables to store customer ID and consumed units.
    float chg, surchg = 0, gramt, netamt;  // Declare variables for charge, surcharge, gross amount, and net amount.
    char name[25];  // Declare a character array to store customer name.

    printf("Customer ID :");
    scanf("%d", &custid);
    printf("The name of the customer :");
    scanf("%s", name);
    printf("The unit consumed by the customer : ");
    scanf("%d", &amt);

    if (amt < 200)
        chg = 1.20;  // Set charge based on consumed units.
    else if (amt >= 200 && amt < 400)
        chg = 1.50;  // Set charge based on consumed units.
    else if (amt >= 400 && amt < 600)
        chg = 1.80;  // Set charge based on consumed units.
    else
        chg = 2.00;  // Set charge based on consumed units.

    gramt = amt * chg;  // Calculate gross amount.

    if (gramt > 300)
        surchg = gramt * 15 / 100.0;  // Calculate surcharge if gross amount is greater than 300.

    netamt = gramt + surchg;  // Calculate net amount.

    if (netamt < 100)
        netamt = 100;  // Set minimum net amount to 100.

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", custid);
    printf("Customer Name                       :%s\n", connm);
    printf("Unit Consumed                       :%d\n", amt);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", chg, gramt);
    printf("Surchage Amount                     :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}

