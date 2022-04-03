#include "parking.h"
/**
 * @file parking.c
 * @author Aishwarya
 * @brief Adding parking details and pakrking menu
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */


int year, month, date, number, option, total, total1=0, total2=0, total3=0, total4=0, total5=0;
float time;
char ch;


/**
 * @brief Adding Information
 * 
 */
void car()
{
    FILE *car;
    car = fopen("car image.txt", "r");
    if(car==NULL)
    {
         printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(car))
        {
            ch = fgetc(car);
            printf("%c", ch);
        }
    }

}

/**
 * @brief Addition of Parking details
 * 
 */
void park_details()
{ 
    FILE *details;
    details = fopen("ParkDetails.txt", "r");
    if(details==NULL)
    {
          printf("FILE DOES NOT EXIST!!!!");
    }
    else
    {
        while(!feof(details))
        {
           ch = fgetc(details);
           printf("%c", ch);
        }
    }


} // End of Parking Details

/**
 * @brief Addition of Parking menu
 * 
 */
void menu()
{ 
    FILE *menu;
    menu = fopen("ParkMenu.txt", "r");
    if(menu==NULL)
    { 
        printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(menu))
        {
            ch=fgetc(menu);
            printf("%c", ch);
        }
    }

} // End of Parking Menu

