#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "Clock/DisplayTime.h"
#include "Clock/ALARM.h"
#include "Clock/TIMMER.h" 
#include "Clock/CLOCKMENU.h"
#include "Calender/CALENDER.h"
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#include "Settings/setting.h"

#define TIME_PER_CYCLE 60

int main(){
    displayTime();
    Menu();
    return 0;
}