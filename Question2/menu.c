#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Say Hello\n");
        printf("2. Skip next part\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        if (choice == 3) {
            break; // Exit loop
        }

        if (choice == 2) {
            printf("Skipping...\n");
            continue; // Skip remaining code
        }

        switch (choice) {
            case 1:
                printf("Greetings, User!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
