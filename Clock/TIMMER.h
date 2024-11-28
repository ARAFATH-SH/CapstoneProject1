#ifndef TIMMER_H

#define TIMMER_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "ALARM.h"
#include "DISPLAYTIME.h"
#include "CLOCKMENU.h"
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#define TIME_PER_CYCLE 60

void Timmer(){      
    displayTime();                        // This is a timmer funtion. It's sub funtionality of clock 
    int hour, minute, seconds,press;

    printf("# 1.Press Start                                                              #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("@############################################################################@\n");
    scanf("%d",&press);
    system("cls");

    displayTime();
    printf("# Set Time:                                                                  #\n");
    printf("# Format --> Hour : Minute : Second                                          #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("#                                                                            #\n");
    printf("@############################################################################@\n");
    scanf("%d %d %d",&hour, &minute, &seconds);

    system("cls");

    if(press){
        int hr=0,min=0,sec=0;
        while (1){   
        displayTime();
        printf("#                    ..........! TIMMER START !..........                    #\n");
        printf("#                               %.2d : %.2d : %.2d                                 #\n",hr,min,sec);
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("#                                                                            #\n");
        printf("@############################################################################@\n");

        if(hour==hr && minute==min && seconds==sec){
                system("cls");
                displayTime();
                printf("#                      ..........! TIME UP !..........                       #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("# 1. If you wanna start timmer again.                                        #\n");
                printf("# 2.Back to clock                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("#                                                                            #\n");
                printf("@############################################################################@\n");

                int n;
                scanf("%d",&n);
                system("cls");
                switch (n)
                {
                case 1:
                    Timmer();
                
                case 2:
                    Clock();
                }

        }
        sec++;
        
        if(sec==TIME_PER_CYCLE){
            min++;
            sec = 0;
        }

        if(min == TIME_PER_CYCLE){
            hour++;
            min = 0;
        }

        Sleep(1000);
        system("cls");

        }
    }
}
#endif