#ifndef CLOCKMENU_H

#define CLOCKMENU_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "DISPLAYTIME.h"
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#include "TIMMER.h"
#include "ALARM.h"
#define TIME_PER_CYCLE 60

void Clock(){
        displayTime();
        
        printf("\t\t# 1.Alarm                                         #\n");
        printf("\t\t# 2.Timmer                                        #\n");
        printf("\t\t# 3.Back                                          #\n");
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

        int n;
        scanf("%d",&n);
        system("cls");
        switch (n)
        {
        case 1:
            Alarm();
        
        case 2:
            Timmer();

        case 3:
            Menu();
        }

    }
#endif