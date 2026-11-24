#include <stdio.h>

#define MAX_ITEMS 5

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item warehouse[MAX_ITEMS];
    float totalInventoryValue = 0.0f;

    // Collect details for 5 items
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("Item ID: ");
        scanf("%d", &warehouse[i].id);

        printf("Item Name (no spaces): ");
        scanf("%49s", warehouse[i].name);

        printf("Quantity: ");
        scanf("%d", &warehouse[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        // Add this item's total value to overall inventory value
        totalInventoryValue += warehouse[i].quantity * warehouse[i].unitPrice;
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalInventoryValue);

    // Search for an item by ID
    int searchID;
    int found = 0;
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < MAX_ITEMS; i++) {
        if (warehouse[i].id == searchID) {
            printf("\nItem Found:\n");
            printf("ID: %d\n", warehouse[i].id);
            printf("Name: %s\n", warehouse[i].name);
            printf("Quantity: %d\n", warehouse[i].quantity);
            printf("Unit Price: %.2f\n", warehouse[i].unitPrice);
            printf("Item Subtotal: %.2f\n", warehouse[i].quantity * warehouse[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No item found with ID %d.\n", searchID);
    }

    return 0;
}
