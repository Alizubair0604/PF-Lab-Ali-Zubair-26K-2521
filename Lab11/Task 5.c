#include <stdio.h>
#include <string.h>

struct HospitalRecord {
    int recordID;
    char ward[30];
    float billAmount;

    // Embedded inner structure for patient details
    struct PatientInfo {
        int patientID;
        char fullName[50];
        int age;
        char diagnosis[60];
    } patient;
};

int main() {
    struct HospitalRecord admission = {
        9001,
        "Emergency",
        18500.00f,
        {402, "Hamza Tariq", 28, "Acute Dehydration"}
    };

    // Pointer to the outer structure
    struct HospitalRecord *ptr = &admission;

    // Access outer members via -> and inner members via -> followed by .
    printf("--- Emergency Admission Record ---\n");
    printf("Record ID: %d\n", ptr->recordID);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Patient Name: %s\n", ptr->patient.fullName);
    printf("Age: %d\n", ptr->patient.age);
    printf("Diagnosis: %s\n", ptr->patient.diagnosis);
    printf("Current Bill: %.2f\n", ptr->billAmount);

    return 0;
}
