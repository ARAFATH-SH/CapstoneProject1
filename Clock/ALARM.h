#ifndef ALARM_H

#define ALARM_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "CLOCKMENU.h"
#include "DISPLAYTIME.h"
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#define TIME_PER_CYCLE 60

void Alarm(){                               //Set alarm based on current time
    displayTime();
    int alarmHour,alarmMinute;
    char AMorPM[3];
    
    printf("\t\t# Set alarm time:                                 #\n");
    printf("\t\t# Format : Hour:Minute AM/PM -->                  #\n");
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

    scanf("%d %d",&alarmHour,&alarmMinute);
    scanf("%s",AMorPM);

    for(int i=0; AMorPM[i]; i++){
        AMorPM[i] = toupper(AMorPM[i]);
    }
    // printf("Alarm set for %02d:%02d %s\n",alarmHour,alarmMinute,AMorPM);
    system("cls");
    while (1)
    {   
        displayTime();
        time_t now;
        struct tm *local;
        time(&now);
        local = localtime(&now);

        int current_hour = local->tm_hour;
        int current_minute = local->tm_min;
        int current_second = local->tm_sec;
        char current_am_pm[3] = "AM";

        if(current_hour >= 12){               //12 hour format
            current_am_pm[0] = 'P';
            if(current_hour>12){
                current_hour-=12;
            }
        }

        if(current_hour==0){
            current_hour=12;
        }

        printf("\t\t#         ..........! Alarm!..........            #\n");
        printf("\t\t#                 %02d:%02d:%02d %s                     #\n",current_hour,current_minute,current_second,current_am_pm);
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
        Sleep(1000);
        system("cls");
        if(current_hour==alarmHour && current_minute==alarmMinute &&
        current_am_pm[0]==AMorPM[0] && current_am_pm[1]==AMorPM[1]){
                
                for(int i=1; i<=30; i++){
                    Beep(750, 500);
                    Sleep(1000);
                    displayTime();
                    printf("\t\t#                                                 #\n");
                    printf("\t\t#                                                 #\n");
                    printf("\t\t#       ..........! WAKEUP BROO !..........       #\n");
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
                }
                system("cls");
                displayTime();
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t# 1. If you again set the alarm                   #\n");
                printf("\t\t# 2. Back to clock                                #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t#                                                 #\n");
                printf("\t\t@#################################################@\n");
                
                int n;
                scanf("%d",&n);
                system("cls");
                switch(n){
                    case 1:
                        Alarm();
                        break;
                    
                    case 2:
                        Clock();
                        break;
                }
                
            }
        }

    }
#endif