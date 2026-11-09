#include <stdio.h>


float calculateDiscount(char membershipType, float cartAmount);
float calculateFinalBill(float discountedAmount);

int main() {
    char membershipType;
    float cartAmount;

    
    printf("Enter membership type (P for Platinum, G for Gold, S for Standard): ");
    scanf(" %c", &membershipType);

    printf("Enter total shopping cart amount in PKR: ");
    scanf("%f", &cartAmount);

    
    float discountAmount = calculateDiscount(membershipType, cartAmount);
    float discountedAmount = cartAmount - discountAmount;


    float finalPayable = calculateFinalBill(discountedAmount);

   
    printf("\n--- BILL SUMMARY ---\n");
    printf("Original Amount: PKR %.2f\n", cartAmount);
    printf("Discount Applied: PKR %.2f\n", discountAmount);
    printf("Discounted Amount: PKR %.2f\n", discountedAmount);
    printf("Final Payable Amount (incl. Tax & Shipping): PKR %.2f\n", finalPayable);

    return 0;
}

// Function to calculate the discount amount in PKR
float calculateDiscount(char membershipType, float cartAmount) {
    float discountRate = 0.0;

    // Determine base discount rate based on membership type
    if (membershipType == 'P' || membershipType == 'p') {
        discountRate = 0.20; // 20%
    } else if (membershipType == 'G' || membershipType == 'g') {
        discountRate = 0.10; // 10%
    } else if (membershipType == 'S' || membershipType == 's') {
        discountRate = 0.05; // 5%
    }

    // If shopping amount exceeds PKR 10,000, add an additional 2% discount
    if (cartAmount > 10000.0) {
        discountRate += 0.02;
    }

    return cartAmount * discountRate;
}

// Function to calculate final bill (15% sales tax & conditional shipping)
float calculateFinalBill(float discountedAmount) {
    float salesTax = discountedAmount * 0.15; // 15% sales tax
    float shippingFee = 0.0;

    // Flat shipping charge of PKR 300 if discounted amount is PKR 5,000 or less
    if (discountedAmount <= 5000.0) {
        shippingFee = 300.0;
    } else {
        shippingFee = 0.0; 
    }

    return discountedAmount + salesTax + shippingFee;
}
