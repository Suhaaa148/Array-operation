#include <stdio.h>

int main() {
    int arr[50];
    int n = 0; // current size of the array
    int choice;

    while (1) {
        printf("\n1. Insert Values\n");
        printf("2. Update Value\n");
        printf("3. Delete Value\n");
        printf("4. Display Values\n");
        printf("5. Search Value\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: {
                int howMany;
                printf("How many values to insert: ");
                scanf("%d", &howMany);
                for (int i = n; i < n + howMany; i++) {
                    printf("Enter value %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                n += howMany;
                break;
            }

            case 2: {
                int index, newValue;
                printf("Enter index (0 to %d) to update: ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    printf("Enter new value: ");
                    scanf("%d", &newValue);
                    arr[index] = newValue;
                } else {
                    printf("Invalid index.\n");
                }
                break;
            }

            case 3: {
                int index;
                printf("Enter index (0 to %d) to delete: ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Value deleted.\n");
                } else {
                    printf("Invalid index.\n");
                }
                break;
            }

            case 4: {
                printf("Array Values:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 5: {
                int val, found = 0;
                printf("Enter value to search: ");
                scanf("%d", &val);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == val) {
                        printf("Value found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Value not found.\n");
                }
                break;
            }

            case 6:
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}1
