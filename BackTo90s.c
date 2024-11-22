#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define TIME_PER_CYCLE 60

char timeString[20];

void displayTime(){
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    system("cls");
    char dateString[20];
    strftime(dateString,200,"%A %e/%m",&date);
    strftime(timeString,200,"%I:%M %p",&date);
    printf("%s\t\t\t\t%s\n\n\n",dateString,timeString);
}

// This is timmer funtion. It's sub funtionality of clock 

void Timmer(){
    int hour, minute, seconds,press;
    
    printf("1.Press Start\n0.Back\n");
    scanf("%d",&press);
    system("cls");

    displayTime();
    printf("Set Time:");
    printf("Hour : Minute : Second --> ");
    scanf("%d %d %d",&hour, &minute, &seconds);

    system("cls");

    if(press){
        int hr=0,min=0,sec=0;
        while (1){   
        displayTime();

        printf("##############! TIMMER START !###############\n\n\t\t%.2d : %.2d : %.2d\n\n#############################################\n",hr,min,sec);
        if(hour==hr && minute==min && seconds==sec){
            break;
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

void Alarm(){
    displayTime();
    int alarmHour,alarmMinute;
    char AMorPM[3];

    printf("Set alarm time:\n");
    printf("Format : Hour:Minute AM/PM -->");
    scanf("%d %d",&alarmHour,&alarmMinute);
    scanf("%s",AMorPM);

    for(int i=0; AMorPM[i]; i++){
        AMorPM[i] = toupper(AMorPM[i]);
    }
    printf("Alarm set for %02d:%02d %s\n",alarmHour,alarmMinute,AMorPM);
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

        if(current_hour >= 12){
            current_am_pm[0] = 'P';
            if(current_hour>12){
                current_hour-=12;
            }
        }

        if(current_hour==0){
            current_hour=12;
        }
        
        printf("#################! Alarm !#################\n\n\t\t%02d:%02d:%02d %s\n",current_hour,current_minute,current_second,current_am_pm);
        Sleep(1000);
        system("cls");
        if(current_hour==alarmHour && current_minute==alarmMinute &&
        current_am_pm[0]==AMorPM[0] && current_am_pm[1]==AMorPM[1]){
                displayTime();
                printf("#############! WAKEUP BROO !##############\a\n\n");
                break;
            }
        }
    }


// void Clock(){

// }

int main(){

    displayTime();
    Timmer();
    Alarm();
    return 0;
}