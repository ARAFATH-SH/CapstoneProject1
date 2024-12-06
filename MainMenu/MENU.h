#ifndef MENU_H

#define MENU_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "D:\Capstone\Back_To_90s\Clock\DIsplayTime.h"
#include "D:\Capstone\Back_To_90s\Clock\CLOCKMENU.h"
#include "D:\Capstone\Back_To_90s\Calender\CALENDER.h"
#include "D:\Capstone\Back_To_90s\Calculator\Calculation.h"
#include "D:\Capstone\Back_To_90s\Health\Health_Feature.h"
#include "D:\Capstone\Back_To_90s\Settings\setting.h"
#include "D:\Capstone\Back_To_90s\Game\Game.h"

void Menu(){
        displayTime();
        printf("\t\t# 1.Notebook                                      #\n");
        printf("\t\t# 2.Calculator                                    #\n");
        printf("\t\t# 3.Clock                                         #\n");
        printf("\t\t# 4.Calender                                      #\n");
        printf("\t\t# 5.Health                                        #\n");
        printf("\t\t# 6.Games                                         #\n");
        printf("\t\t# 7.Settings                                      #\n");
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

        switch (n)
        {
        case 1:
            //notebook();
            break;
        case 2:
            calculator();
            break;
        case 3:
            Clock();
            break;
        case 4:
            calender();
            break;
        case 5:
            startHealthFeature();
            break;
        case 6:
            games();
            break;
        case 7:
            displaySettingsMenu();
            break;
        default:
            break;
        }
    }
    #endif