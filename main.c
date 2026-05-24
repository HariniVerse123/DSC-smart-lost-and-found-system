#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

// Contributor: chataketejaswini-commits
// Feature: Lost and Found System

#define MAX 50
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

LostItem lostItems[MAX];
FoundItem foundItems[MAX];
int lostCount = 0;
int foundCount = 0;

void removeNewLine(char text[]) {
    text[strcspn(text, "\n")] = '\0';
}

void readText(char message[], char text[], int size) {
    printf("%s", message);
    fgets(text, size, stdin);
    removeNewLine(text);
}

void addLostItem() {
    if (lostCount >= MAX) {
        printf("\nLost item list is full.\n");
        return;
    }

    lostItems[lostCount].id = lostCount + 1;
    lostItems[lostCount].matched = 0;

    printf("\n--- New Lost Item Request ---\n");
    readText("Enter your name: ", lostItems[lostCount].userName, 50);
    readText("Enter your contact: ", lostItems[lostCount].contact, 50);
    readText("Enter lost item name: ", lostItems[lostCount].itemName, 50);
    readText("Enter category: ", lostItems[lostCount].category, 50);
    readText("Enter last seen location: ", lostItems[lostCount].location, 50);
    readText("Enter description: ", lostItems[lostCount].description, 100);

    printf("\nLost item request added successfully. Request ID: %d\n", lostItems[lostCount].id);
    lostCount++;
}

int isMatch(LostItem lost, FoundItem found) {
    char name1[50], name2[50];
    char cat1[50], cat2[50];

    // copy original data
    strcpy(name1, lost.itemName);
    strcpy(name2, found.itemName);
    strcpy(cat1, lost.category);
    strcpy(cat2, found.category);

    // convert all to lowercase
    toLowerCase(name1);
    toLowerCase(name2);
    toLowerCase(cat1);
    toLowerCase(cat2);

    // compare
    if (strcmp(name1, name2) == 0 && strcmp(cat1, cat2) == 0) {
        return 1;
    }

    return 0;
}

void checkMatchForFoundItem(FoundItem found) {
    int matchFound = 0;

    printf("\nChecking lost item requests for a match...\n");

    for (int i = 0; i < lostCount; i++) {
        if (lostItems[i].matched == 0 && isMatch(lostItems[i], found)) {
            printf("\nPossible Match Found!\n");
            printf("Lost Request ID: %d\n", lostItems[i].id);
            printf("Lost User Name: %s\n", lostItems[i].userName);
            printf("Lost User Contact: %s\n", lostItems[i].contact);
            printf("Item Name: %s\n", lostItems[i].itemName);
            printf("Category: %s\n", lostItems[i].category);
            printf("\nNotification: Please contact the lost item owner using the contact above.\n");

            lostItems[i].matched = 1;
            matchFound = 1;
        }
    }

    if (matchFound == 0) {
        printf("\nNo matching lost item request found right now.\n");
    }
}

void addFoundItem() {
    if (foundCount >= MAX) {
        printf("\nFound item list is full.\n");
        return;
    }

    foundItems[foundCount].id = foundCount + 1;

    printf("\n--- New Found Item Report ---\n");
    readText("Enter finder name: ", foundItems[foundCount].finderName, 50);
    readText("Enter finder contact: ", foundItems[foundCount].contact, 50);
    readText("Enter found item name: ", foundItems[foundCount].itemName, 50);
    readText("Enter category: ", foundItems[foundCount].category, 50);
    readText("Enter found location: ", foundItems[foundCount].location, 50);
    readText("Enter description: ", foundItems[foundCount].description, 100);

    printf("\nFound item report added successfully. Report ID: %d\n", foundItems[foundCount].id);
    checkMatchForFoundItem(foundItems[foundCount]);
    foundCount++;
}

void displayLostItems() {
    printf("\n--- Lost Item Requests ---\n");

    if (lostCount == 0) {
        printf("No lost item requests available.\n");
        return;
    }

    for (int i = 0; i < lostCount; i++) {
        printf("\nRequest ID: %d\n", lostItems[i].id);
        printf("User Name: %s\n", lostItems[i].userName);
        printf("Contact: %s\n", lostItems[i].contact);
        printf("Item Name: %s\n", lostItems[i].itemName);
        printf("Category: %s\n", lostItems[i].category);
        printf("Location: %s\n", lostItems[i].location);
        printf("Description: %s\n", lostItems[i].description);
        printf("Status: %s\n", lostItems[i].matched ? "Matched" : "Not Matched");
    }
}

void displayFoundItems() {
    printf("\n--- Found Item Reports ---\n");

    if (foundCount == 0) {
        printf("No found item reports available.\n");
        return;
    }

    for (int i = 0; i < foundCount; i++) {
        printf("\nReport ID: %d\n", foundItems[i].id);
        printf("Finder Name: %s\n", foundItems[i].finderName);
        printf("Finder Contact: %s\n", foundItems[i].contact);
        printf("Item Name: %s\n", foundItems[i].itemName);
        printf("Category: %s\n", foundItems[i].category);
        printf("Location: %s\n", foundItems[i].location);
        printf("Description: %s\n", foundItems[i].description);
    }
}

int main() {
    int choice;

    do {
        printf("\n===== DSC Smart Lost and Found System =====\n");
        printf("1. Add lost item request\n");
        printf("2. Add found item report\n");
        printf("3. View lost item requests\n");
        printf("4. View found item reports\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addLostItem();
                break;
            case 2:
                addFoundItem();
                break;
            case 3:
                displayLostItems();
                break;
            case 4:
                displayFoundItems();
                break;
            case 5:
                printf("\nThank you for using the system.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
