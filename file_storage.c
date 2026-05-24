#include <stdio.h>
#include "lost_found.h"

void saveLostItems() {
    FILE *file = fopen("lost_items.txt", "w");

    if (file == NULL) {
        printf("\nUnable to save lost item data.\n");
        return;
    }

    fprintf(file, "%d\n", lostCount);

    for (int i = 0; i < lostCount; i++) {
        fprintf(file, "%d\n", lostItems[i].id);
        fprintf(file, "%s\n", lostItems[i].userName);
        fprintf(file, "%s\n", lostItems[i].contact);
        fprintf(file, "%s\n", lostItems[i].itemName);
        fprintf(file, "%s\n", lostItems[i].category);
        fprintf(file, "%s\n", lostItems[i].location);
        fprintf(file, "%s\n", lostItems[i].description);
        fprintf(file, "%d\n", lostItems[i].matched);
    }

    fclose(file);
}

void saveFoundItems() {
    FILE *file = fopen("found_items.txt", "w");

    if (file == NULL) {
        printf("\nUnable to save found item data.\n");
        return;
    }

    fprintf(file, "%d\n", foundCount);

    for (int i = 0; i < foundCount; i++) {
        fprintf(file, "%d\n", foundItems[i].id);
        fprintf(file, "%s\n", foundItems[i].finderName);
        fprintf(file, "%s\n", foundItems[i].contact);
        fprintf(file, "%s\n", foundItems[i].itemName);
        fprintf(file, "%s\n", foundItems[i].category);
        fprintf(file, "%s\n", foundItems[i].location);
        fprintf(file, "%s\n", foundItems[i].description);
    }

    fclose(file);
}

void saveData() {
    saveLostItems();
    saveFoundItems();
}

void loadLostItems() {
    FILE *file = fopen("lost_items.txt", "r");

    if (file == NULL) {
        return;
    }

    fscanf(file, "%d\n", &lostCount);

    if (lostCount > MAX) {
        lostCount = MAX;
    }

    for (int i = 0; i < lostCount; i++) {
        fscanf(file, "%d\n", &lostItems[i].id);

        fgets(lostItems[i].userName, 50, file);
        removeNewLine(lostItems[i].userName);

        fgets(lostItems[i].contact, 50, file);
        removeNewLine(lostItems[i].contact);

        fgets(lostItems[i].itemName, 50, file);
        removeNewLine(lostItems[i].itemName);

        fgets(lostItems[i].category, 50, file);
        removeNewLine(lostItems[i].category);

        fgets(lostItems[i].location, 50, file);
        removeNewLine(lostItems[i].location);

        fgets(lostItems[i].description, 100, file);
        removeNewLine(lostItems[i].description);

        fscanf(file, "%d\n", &lostItems[i].matched);
    }

    fclose(file);
}

void loadFoundItems() {
    FILE *file = fopen("found_items.txt", "r");

    if (file == NULL) {
        return;
    }

    fscanf(file, "%d\n", &foundCount);

    if (foundCount > MAX) {
        foundCount = MAX;
    }

    for (int i = 0; i < foundCount; i++) {
        fscanf(file, "%d\n", &foundItems[i].id);

        fgets(foundItems[i].finderName, 50, file);
        removeNewLine(foundItems[i].finderName);

        fgets(foundItems[i].contact, 50, file);
        removeNewLine(foundItems[i].contact);

        fgets(foundItems[i].itemName, 50, file);
        removeNewLine(foundItems[i].itemName);

        fgets(foundItems[i].category, 50, file);
        removeNewLine(foundItems[i].category);

        fgets(foundItems[i].location, 50, file);
        removeNewLine(foundItems[i].location);

        fgets(foundItems[i].description, 100, file);
        removeNewLine(foundItems[i].description);
    }

    fclose(file);
}

void loadData() {
    loadLostItems();
    loadFoundItems();
}