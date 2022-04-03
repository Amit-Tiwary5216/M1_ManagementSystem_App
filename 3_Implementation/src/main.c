/**
 * @file main.c
 * @author Aishwarya (aishwaryasood11@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "parking.h";



// Main Function

int main()
{ // Start of Main
    system("CLS");
    system("color 0A");

    FILE *details;
    details = fopen("park details.txt", "a");

    printf("\n ENTER TODAYS DATE FOR CONTINUE ");
    printf("\n\tENTER DAY: " );
    scanf("%d", &date);
    printf("\n\tENTER MONTH: ");
    scanf("%d", &month);
    printf("\n\tENTER YEAR: ");
    scanf("%d", &year);

    fprintf(details, "\n\nDATE: %d-%d-%d", date, month, year);
    fprintf(details, "\n---------------");
    system("CLS");

    while(1)
    { // Start of While Loop
        car();
        menu();
        printf("ENTER AN OPTION: ");
        scanf("%d", &option);
        FILE *details;
        details = fopen("park details.txt", "a");

// Using switch case to choose the option
        switch(option)
        { // Start of Switch Statement


            //Detail of Bus
        case 1:

        printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total1 +=100; // 100Rs Ticket for Bus

            fprintf(details, "\t\tBUS\t\t%.2f\t\t%d\t\t100\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
            

            // Detail of Truck
        case 2:

            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total2+=80; // 80Rs Ticket for Truck
            fprintf(details, "\t\tTRUCK      \t\t%.2f\t\t%d\t\t80\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
            

            // Detail of Private Car
        case 3:

            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total3+=70; // 70Rs Ticket  for Private Car
            fprintf(details, "\t\tPRIVATE CAR\t\t%.2f\t\t%d\t\t70\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;


            // Detail of Motor Cycle
        case 4:
        
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total4+=60; // 60Rs Ticket for Motor Cycle
            fprintf(details, "\t\tMOTOR CYCLE\t\t%.2f\t\t%d\t\t60\n", time, number);
                printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        

            // Detail of By Cycle
        case 5:

            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total5+=40; // 40Rs Tickek for By Cycle
            fprintf(details, "\t\tBY CYCLE\t\t%.2f\t\t%d\t\t40\n", time, number);
             printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        

            // Back to Menu
        case 6:

            system("CLS");
            park_details();
                 printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");

             getch();
            system("CLS");
            break;


            // Calculating total amount
        case 7:

            total=total1+total2+total3+total4+total5;
            fprintf(details,"\t\t\t\t\t\t\t\t\t\t\t Total = %d",total);
             fprintf(details,"\n.....................................................................................................\n");


            // Exit
            exit(0);
            break;


// Invalid Input
        default:
             printf("INVALID INPUT!!!");
            getch();
             printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");
            system("CLS");
            break;

        } // End of Switch Statement


    } // End of While Loop


    return 0;
} // End of Main
