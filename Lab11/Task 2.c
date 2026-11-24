#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};

// Prints product info and price after a 5% discount using the dot operator
void displayProductDetails(struct Product p) {
    float discountedPrice = p.price * 0.95f; // 5% off means 95% of original price

    printf("\n--- Product Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Discounted Price (5%% off): %.2f\n", discountedPrice);
    printf("Stock Available: %d\n", p.stockQuantity);
}

int main() {
    // Initialize sample products
    struct Product item1 = {101, "Wireless Mouse", "Electronics", 2400.00f, 18};
    struct Product item2 = {102, "Running Shoes", "Footwear", 6500.00f, 10};

    displayProductDetails(item1);
    displayProductDetails(item2);

    return 0;
}
