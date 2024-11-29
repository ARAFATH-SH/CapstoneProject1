#ifndef DISPLAYTIME_H

#define DISPLAYTIME_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#define TIME_PER_CYCLE 60

char timeString[20];

void displayTime(){                         //Showing current time in every functionality
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    system("cls");
    char dateString[20];
    strftime(dateString,200,"%A %e/%m",&date);
    strftime(timeString,200,"%I:%M %p",&date);
    printf("\n\n");
    printf("\t\t@#################################################@\n");
    printf("\t\t# %s                         %s #\n",dateString,timeString);
    printf("\t\t#                                                 #\n");
}
#endif