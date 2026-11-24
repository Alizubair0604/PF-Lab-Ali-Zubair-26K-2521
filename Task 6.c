#include <stdio.h>

// Fixed toll fee in PKR that should not change during execution
const int TOLL_RATE_PKR = 50;

// Tracks and prints running totals across multiple vehicle arrivals
void processVehicle(char vehicleType[]) {
    // static keeps these values alive across function calls
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE_PKR;

    printf("Processed %-10s | Fee: %d PKR | Vehicles So Far: %d | Revenue So Far: %d PKR\n",
           vehicleType, TOLL_RATE_PKR, totalVehicles, totalRevenue);
}

int main() {
    printf("--- Toll Plaza Processing Log ---\n");
    processVehicle("Car");
    processVehicle("Motorcycle");
    processVehicle("SUV");
    processVehicle("Car");

    // Final summary call or display
    printf("\nFinal Toll Plaza Collection Report:\n");
    printf("Toll Rate per Vehicle: %d PKR\n", TOLL_RATE_PKR);
    printf("Total Vehicles Processed: 4\n");
    printf("Total Daily Revenue Collected: %d PKR\n", 4 * TOLL_RATE_PKR);

    return 0;
}
