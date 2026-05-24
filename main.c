#include <stdio.h>
#include "lost_found.h"

int main() {
    int choice;

    loadData();

    do {
        printf("\n===== DSC Smart Lost and Found System =====\n");
        printf("1. Add lost item request\n");
        printf("2. Add found item report\n");
        printf("3. View lost item requests\n");
        printf("4. View found item reports\n");
        printf("5. Search lost item\n");
        printf("6. Save and exit\n");
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
                searchLostItem();
                break;
            case 6:
                saveData();
                printf("\nData saved. Thank you for using the system.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}