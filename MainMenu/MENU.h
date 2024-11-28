#ifndef MENU_H

#define MENU_H
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "D:\Capstone\Back_To_90s\Clock\DIsplayTime.h"
#include "D:\Capstone\Back_To_90s\Clock\CLOCKMENU.h"

void Menu(){
        displayTime();
        printf("# 1. Notebook                                                                #\n");
        printf("# 2. Calculator                                                              #\n");
        printf("# 3. Clock                                                                   #\n");
        printf("# 4. Calender                                                                #\n");
        printf("# 5. Health                                                                  #\n");
        printf("# 6. Games                                                                   #\n");
        printf("# 7. Settings                                                                #\n");
        printf("# 8. Screen Off                                                              #\n");
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

        switch (n)
        {
        case 3:
            Clock();
        }

    }
    #endif