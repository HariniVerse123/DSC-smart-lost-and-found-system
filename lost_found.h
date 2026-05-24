#ifndef LOST_FOUND_H
#define LOST_FOUND_H

#define MAX 50

typedef struct {
    int id;
    char itemName[50];
    char category[50];
    char location[50];
    char description[100];
    char userName[50];
    char contact[50];
    int matched;
} LostItem;

typedef struct {
    int id;
    char itemName[50];
    char category[50];
    char location[50];
    char description[100];
    char finderName[50];
    char contact[50];
} FoundItem;

extern LostItem lostItems[MAX];
extern FoundItem foundItems[MAX];
extern int lostCount;
extern int foundCount;

void removeNewLine(char text[]);
void readText(char message[], char text[], int size);

void addLostItem();
void addFoundItem();
void displayLostItems();
void displayFoundItems();
void searchLostItem();
void checkMatchForFoundItem(FoundItem found);

void saveData();
void loadData();

#endif