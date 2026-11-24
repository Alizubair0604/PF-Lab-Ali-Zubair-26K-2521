#include <stdio.h>

// Separate inner structure for residential address
struct Address {
    char city[40];
    char zipCode[15];
    char state[40];
};

// Outer structure containing an Address member
struct Student {
    char rollNo[20];
    char name[50];
    float cgpa;
    struct Address studentAddress;
};

int main() {
    // Initialize nested structure values
    struct Student student1 = {
        "26K-2521",
        "Ali Zubair",
        3.65f,
        {"Karachi", "75300", "Sindh"}
    };

    // Display full profile using dot notation
    printf("--- Student Profile ---\n");
    printf("Roll No: %s\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %s\n", student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
