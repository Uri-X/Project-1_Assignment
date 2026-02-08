#include <stdio.h>

int main() {
    int choice;
    while (1) {
        printf("\n1. Hello\n2. Skip next part\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 3) break; 
        if (choice == 2) {
            printf("Skipping...\n");
            continue; 
        }

        switch(choice) {
            case 1: printf("Greetings, User!\n"); break;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}