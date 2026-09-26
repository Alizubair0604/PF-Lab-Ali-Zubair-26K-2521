#include <stdio.h>

int main() {
    int permission;

    printf("Enter User Permission Bitwise Value (0-15): ");
    scanf("%d", &permission);

   if (permission & 1) {
        printf("- View Model\n");
    }
   if (permission & 2) {
        printf("- Train Model\n");
    }
   if (permission & 4) {
        printf("- Test Model\n");
    }
    if (permission & 8) {
        printf("- Deploy Model\n");
    }
    if ((permission & 2) && (permission & 8)) {
        printf("\nUser has both training and deployment permissions!\n");
    } 
	else {
        printf("\nUser lacks combined Training and Deployment permissions.\n");
    }

    return 0;
}
