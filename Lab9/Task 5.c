#include <stdio.h>

void printSensorData(void *ptr, char dataType) {
    if (dataType == 'f' || dataType == 'F') {
        float temp = *(float *)ptr;
        printf("Sensor Type [Temperature]: %.2f °C\n", temp);
    } 
    else if (dataType == 'i' || dataType == 'I') {
        int motion = *(int *)ptr;
        if (motion == 1) {
            printf("Sensor Type [Motion]: Motion Detected\n");
        } else {
            printf("Sensor Type [Motion]: No Motion\n");
        }
    } 
    else if (dataType == 'c' || dataType == 'C') {
        char doorStatus = *(char *)ptr;
        if (doorStatus == 'O' || doorStatus == 'o') {
            printf("Sensor Type [Door Lock]: Door Open\n");
        } else if (doorStatus == 'C' || doorStatus == 'c') {
            printf("Sensor Type [Door Lock]: Door Closed\n");
        } else {
            printf("Sensor Type [Door Lock]: Unknown Status\n");
        }
    } 
    else {
        printf("Invalid data type specifier provided.\n");
    }
}

int main() {
    
    float temperature = 28.5; 
    int motionStatus = 1;     
    char doorLockStatus = 'O';

    printf("--- Smart Home IoT Sensor Readings ---\n");

    
    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorLockStatus, 'c');

    return 0;
}
