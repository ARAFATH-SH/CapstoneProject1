#ifndef SETTING_H
#define SETTING_H
#include <stdio.h>
#include <stdlib.h>
#include "../Clock/DISPLAYTIME.h"

void changeRingtoneVolume();
void adjustBrightness();
void displaySettingsMenu();
void changeLanguage();

void displaySettingsMenu() {
    int n;

    while (1) {
        system("cls");
        displayTime();
        
        printf("\t\t#      =========== Settings Menu ==========       #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# 1. Change Ringtone Volume                       #\n");
        printf("\t\t# 2. Adjust Brightness                            #\n");
        printf("\t\t# 3. Change Language                              #\n");
        printf("\t\t# 4. Back to the menu                             #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
        
        scanf("%d", &n);


        switch (n) {
            case 1:
                changeRingtoneVolume();
                break;
            case 2:
                adjustBrightness();
                break;
            case 3:
                changeLanguage();
                break;
            case 4:
                Menu();
                break;
            // default:
            //     displaySettingsMenu();
            //     break;
        }
    }
}

void changeRingtoneVolume() {
    
    system("cls");
    int volume;
    displayTime();

    printf("\t\t#     ======== Change Ringtone Volume ========    #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# Volume level (0-10):                            #\n");
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

    scanf("%d", &volume);

    if (volume >= 0 && volume <= 10) {
        system("cls");
        displayTime();

        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# Ringtone volume set to %d.                      #\n", volume);
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
    } else {
        system("cls");
        displayTime();
        
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# Invalid level! Enter a value between 0 and 10.  #\n");
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
}

void adjustBrightness() {
    int brightness;

    system("cls");
    displayTime();
        
    printf("\t\t#       ======== Adjust Brightness ========       #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# Brightness level (0-10):                        #\n");
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
        
    scanf("%d", &brightness);


    if (brightness >= 0 && brightness <= 10) {
        system("cls");
        displayTime();

        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# Brightness set to %d.                           #\n", brightness);
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
        
    } else {
        system("cls");
        displayTime();
        
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# Invalid level! Enter a value between 0 and 10.  #\n");
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
}

void changeLanguage() {
    int language;

    system("cls");
    displayTime();
    
    printf("\t\t#        ======== Change Language ========        #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# 1. English                                      #\n");
    printf("\t\t# 2. Spanish                                      #\n");
    printf("\t\t# 3. French                                       #\n");
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

    scanf("%d", &language);


    switch (language) {
        case 1:
            system("cls");
            displayTime();
            
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t# Language set to English.                        #\n");
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
            
            break;
        case 2:
            system("cls");
            displayTime();
            
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t# Language set to Spanish.                        #\n");
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

            break;
        case 3:
            system("cls");
            displayTime();
            
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t# Language set to French.                         #\n");
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

            break;
    }
}
#endif 