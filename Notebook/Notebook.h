#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "..\Clock\DISPLAYTIME.h"

#define MAX_NOTES 100
#define MAX_NOTE_LENGTH 1000
#define FILENAME "Notebook/notes.dat"

typedef struct
{
    char title[100];
    char content[MAX_NOTE_LENGTH];
} Note;

Note notes[MAX_NOTES];
int note_count = 0;

void display_menu();
void add_note();
void view_notes();
void search_note();
void delete_note();
void clear_input_buffer();
void save_notes();
void load_notes();
void notebook();

void notebook()
{

    load_notes(); // Load notes from file

    int choice;

    while (1)
    {
        display_menu();
        printf("\t\t# Enter your choice:                              #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice)
        {
        case 1:
            add_note();
            break;
        case 2:
            view_notes();
            break;
        case 3:
            search_note();
            break;
        case 4:
            delete_note();
            break;
        case 5:
            save_notes(); // Save notes before exiting
            Menu();
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

void display_menu()
{
    system("cls");
    displayTime();
    printf("\t\t#               Text-Based Notebook               #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# 1. Add a new note                               #\n");
    printf("\t\t# 2. View all notes                               #\n");
    printf("\t\t# 3. Search for a note                            #\n");
    printf("\t\t# 4. Delete a note                                #\n");
    printf("\t\t# 5. Exit                                         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    
    
}

void add_note()
{
    if (note_count >= MAX_NOTES)
    {   
        system("cls");
        displayTime();
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t# Notebook is full! Cannot add more notes.        #\n");
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
        Sleep(2000);
        return;
    }
    system("cls");
    displayTime();
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# Enter note title & content:                     #\n");
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
    fgets(notes[note_count].title, sizeof(notes[note_count].title), stdin);
    notes[note_count].title[strcspn(notes[note_count].title, "\n")] = '\0';
    fgets(notes[note_count].content, sizeof(notes[note_count].content), stdin);
    notes[note_count].content[strcspn(notes[note_count].content, "\n")] = '\0';
    note_count++;
    system("cls");
    displayTime();
    printf("\t\t#            Note added successfully!             #\n");
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
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
    Sleep(2000);

}

void view_notes()
{
    if (note_count == 0)
    {
        system("cls");
        displayTime();
        printf("\t\t#            No notes available                   #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);
        return;
    }
    system("cls");
    displayTime();
    
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    
    printf("\t\t#     ============= All Notes =============       #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");

    for (int i = 0; i < note_count; i++)
    {
        printf("\t# Note %d: %s\n", i + 1, notes[i].title);
        printf("\t# Content: %s\n\t#\n", notes[i].content);
    }
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
        Sleep(5000);

}

void search_note()
{
    if (note_count == 0)
    {
        system("cls");
        displayTime();
        printf("\t\t#            No notes available                   #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
    }

    char search_term[100];
    system("cls");
        displayTime();
        printf("\t\t#            Enter search term:                   #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
    
    fgets(search_term, sizeof(search_term), stdin);
    search_term[strcspn(search_term, "\n")] = '\0';
    int found = 0;
    system("cls");
        displayTime();
        printf("\t\t#                 Search Result                   #\n");
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
        printf("\t\t#                                                 #\n");
        
    for (int i = 0; i < note_count; i++)
    {
        if (strstr(notes[i].title, search_term) != NULL || strstr(notes[i].content, search_term) != NULL)
        {
            printf("Note %d: %s\n", i + 1, notes[i].title);
            printf("Content: %s\n\n", notes[i].content);
            found = 1;
        }
    }
        printf("\t\t@#################################################@\n");
    if (!found)
    {
        system("cls");
        displayTime();
        printf("\t\t# No notes found with the search term '%s'#.\n", search_term);
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

        
    }
    Sleep(2000);

}

void delete_note()
{
    if (note_count == 0)
    {
        system("cls");
        displayTime();
        printf("\t\t#            No notes available                   #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
    }

    int note_index;
    system("cls");
        displayTime();
        printf("\t\t# Enter note number to delete (1 to %d):          #\n",note_count);
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
    scanf("%d", &note_index);
    clear_input_buffer();

    if (note_index < 1 || note_index > note_count)
    {
        system("cls");
        displayTime();
        printf("\t\t#               Invalid note number               #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
    }

    for (int i = note_index - 1; i < note_count - 1; i++)
    {
        notes[i] = notes[i + 1];
    }

    note_count--;
    system("cls");
        displayTime();
        printf("\t\t# Note %d deleted successfully.                   #\n",note_index);
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
}

void clear_input_buffer()
{
    while (getchar() != '\n')
        ;
}

void save_notes()
{
    FILE *file = fopen(FILENAME, "wb");
    if (file == NULL)
    {
        system("cls");
        displayTime();
        printf("\t\t#               Error saving note!                #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
    }

    fwrite(&note_count, sizeof(note_count), 1, file);
    fwrite(notes, sizeof(Note), note_count, file);
    fclose(file);
    system("cls");
        displayTime();
        printf("\t\t#            Notes saved successfully!            #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

        return;
}

void load_notes()
{
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL)
    {
        return; // No file to load
    }

    fread(&note_count, sizeof(note_count), 1, file);
    fread(notes, sizeof(Note), note_count, file);
    fclose(file);
    system("cls");
        displayTime();
        printf("\t\t#            Notes loaded successfully!           #\n");
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
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
            Sleep(2000);

}
#endif