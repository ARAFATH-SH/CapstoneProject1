#ifndef CALENDER_H

#define CALENDER_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#include "D:\Capstone\Back_To_90s\Clock\DisplayTime.h"
#include "D:\Capstone\Back_To_90s\Clock\CLOCKMENU.h"

void calender(){
    system("cls");
    displayTime();
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int year = tm.tm_year + 1900;
    int month = tm.tm_mon + 1;
    int daysInMonth,startingDay,dayOfWeek;
    system("cls");
    while (1){
    displayTime();
    if (month == 2) {                                              
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    startingDay = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    for (int i = 1; i < month; ++i) {
        if (i == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                startingDay += 29;
            else
                startingDay += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            startingDay += 30;
        } else {
            startingDay += 31;
        }
    }
    dayOfWeek = (startingDay + 1) % 7;

    printf("\t\t#=================================================#\n");
    printf("\t\t#                    %d-%02d                      #\n", year, month);
    printf("\t\t#=================================================#\n");
    printf("\t\t#  Sun Mon Tue Wed Thu Fri Sat                    #\n");
    printf("\t\t#");
    // Print spaces for the days before the starting day of the month
    for (int i = 0; i < dayOfWeek; ++i) {
        printf("    ");
    }
    int last_day=0;
    // Print the days of the month
    for (int day= 1; day <= daysInMonth; ++day) {
        printf("%4d", day);
        if ((day + dayOfWeek) % 7 == 0) {
            // printf("%d %d",dayOfWeek,day);
            printf("                     #\n\t\t#");
        }
        last_day=(day + dayOfWeek) % 7;
    }
    // printf("%d",last_day);
    if(last_day==6){
        printf("                         #\n\t\t#");
    }
    if(last_day==5){
        printf("                             #\n\t\t#");
    }
    if(last_day==4){
        printf("                                 #\n\t\t#");
    }
    if(last_day==3){
        printf("                                     #\n\t\t#");
    }
    if(last_day==2){
        printf("                                         #\n\t\t#");
    }
    if(last_day==1){
        printf("                                             #\n\t\t#");
    }
    printf("                                                 #\n");
    printf("\t\t# 1. Check Specific Months Calender               #\n");
    printf("\t\t# 2. Back to Main Menu                            #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");

    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1){
        displayTime();

        printf("\t\t# Enter the year and month:                       #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
        scanf("%d %d",&year,&month);
        system("cls");
    }
    else if(n==2){
        system("cls");
        Menu();
    }
    
    }
}
#endif