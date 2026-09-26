#include <stdio.h>
int main() {
	int age, credit, loan ;
	float income;
	printf("Enter age\n");
    scanf("%d", &age);
    printf("Enter monthly income\n");
    scanf("%f", &income);
    printf("Enter credit score\n");
    scanf("%d", &credit);
    printf("You have existing loan? (1 for Yes, 0 for No)\n");
    scanf("%d", &loan);
    
    if(age >= 21 && income >= 100000 && credit >= 750 && loan == 0) {
        printf("High approval chance\n");
    }
    else if(age >= 21 && income >= 75000 && credit >= 650 && loan == 1) {
    	printf("Manual review\n");	
	}
	else if(age >= 21 && income >= 50000 && credit >= 600) {
		printf("Possibly elegible");	
	}
	else {
		printf("Rejected");
	}
	return 0;
}
	
        

