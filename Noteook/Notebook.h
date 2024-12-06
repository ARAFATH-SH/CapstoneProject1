#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <..\MainMenu\MENU.h>

#define MAX_NOTES 100
#define MAX_NOTE_LENGTH 1000
#define FILENAME "notes.dat"

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
        printf("Enter your choice: ");
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
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

void display_menu()
{
    printf("\t#=============================== Text-Based Notebook =================================#\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t# 1. Add a new note\t\t                                                      #\n");
    printf("\t# 2. View all notes\t\t                                                      #\n");
    printf("\t# 3. Search for a note\t\t                                                      #\n");
    printf("\t# 4. Delete a note\t\t                                                      #\n");
    printf("\t# 5. Exit\t\t                                                              #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t@#####################################################################################@\n");
}

void add_note()
{
    if (note_count >= MAX_NOTES)
    {
        printf("Notebook is full! Cannot add more notes.\n");
        return;
    }

    printf("Enter note title: ");
    fgets(notes[note_count].title, sizeof(notes[note_count].title), stdin);
    notes[note_count].title[strcspn(notes[note_count].title, "\n")] = '\0';
    printf("Enter note content:\n");
    fgets(notes[note_count].content, sizeof(notes[note_count].content), stdin);
    notes[note_count].content[strcspn(notes[note_count].content, "\n")] = '\0';
    note_count++;
    printf("Note added successfully!\n");
}

void view_notes()
{
    if (note_count == 0)
    {
        printf("No notes available.\n");
        return;
    }

    printf("\n\t#================================= All Notes =========================================#\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");

    for (int i = 0; i < note_count; i++)
    {
        printf("\t# Note %d: %s\n", i + 1, notes[i].title);
        printf("\t# Content: %s\n\t#\n", notes[i].content);
    }
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t#\t\t                                                                      #\n");
    printf("\t@#####################################################################################@\n\n\n");
}

void search_note()
{
    if (note_count == 0)
    {
        printf("No notes available.\n");
        return;
    }

    char search_term[100];
    printf("Enter search term: ");
    fgets(search_term, sizeof(search_term), stdin);
    search_term[strcspn(search_term, "\n")] = '\0';
    int found = 0;
    printf("\n--- Search Results ---\n");
    for (int i = 0; i < note_count; i++)
    {
        if (strstr(notes[i].title, search_term) != NULL || strstr(notes[i].content, search_term) != NULL)
        {
            printf("Note %d: %s\n", i + 1, notes[i].title);
            printf("Content: %s\n\n", notes[i].content);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No notes found with the search term '%s'.\n", search_term);
    }
}

void delete_note()
{
    if (note_count == 0)
    {
        printf("No notes available.\n");
        return;
    }

    int note_index;
    printf("Enter note number to delete (1 to %d): ", note_count);
    scanf("%d", &note_index);
    clear_input_buffer();

    if (note_index < 1 || note_index > note_count)
    {
        printf("Invalid note number.\n");
        return;
    }

    for (int i = note_index - 1; i < note_count - 1; i++)
    {
        notes[i] = notes[i + 1];
    }

    note_count--;
    printf("Note %d deleted successfully.\n", note_index);
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
        perror("Error saving notes");
        return;
    }

    fwrite(&note_count, sizeof(note_count), 1, file);
    fwrite(notes, sizeof(Note), note_count, file);
    fclose(file);
    printf("Notes saved successfully!\n");
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
    printf("Notes loaded successfully!\n");
}
#endif