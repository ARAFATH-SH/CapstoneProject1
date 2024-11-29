#ifndef MENU_H

#define MENU_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "D:\Capstone\Back_To_90s\Clock\DIsplayTime.h"
#include "D:\Capstone\Back_To_90s\Clock\CLOCKMENU.h"
#include "D:\Capstone\Back_To_90s\Calender\CALENDER.h"

void Menu(){
        displayTime();
        printf("\t\t# 1. Notebook                                     #\n");
        printf("\t\t# 2. Calculator                                   #\n");
        printf("\t\t# 3. Clock                                        #\n");
        printf("\t\t# 4. Calender                                     #\n");
        printf("\t\t# 5. Health                                       #\n");
        printf("\t\t# 6. Games                                        #\n");
        printf("\t\t# 7. Settings                                     #\n");
        printf("\t\t# 8. Screen Off                                   #\n");
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

        case 2:

        case 3:
            Clock();
        case 4:
            calender();
       case 8:
            system("cls");
            break;
        }
    }
    #endif