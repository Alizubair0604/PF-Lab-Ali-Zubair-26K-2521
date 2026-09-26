#include <stdio.h>
int main() {
	int mainchoice, subchoice;
	printf("Enter category\n 1)Animal\n 2)Vehicle\n 3)Food\n 4)Human\n ");
	scanf("%d", &mainchoice);
	
	switch (mainchoice) {
        case 1:
            printf("Choose subcategories\n 1)Cat\n 2)Dog\n 3)Bird\n");
            scanf("%d", &subchoice);
            switch (subchoice) {
                case 1: printf("Selected animal -> Cat\n");
                 break; 
                case 2: printf("Selected animal -> Dog\n"); 
				 break;
                case 3: printf("Selected animal -> Bird\n"); 
				 break;
                default: printf("Invalid subcategory\n");
            }
            break;

        case 2:
        	printf("Choose subcategories\n 1)Car\n 2)Bus\n 3)Bike\n");
            scanf("%d", &subchoice);
            switch (subchoice) {
                case 1: printf("Selected vehicle -> Car\n"); 
				 break;
                case 2: printf("Selected vehicle -> Bus\n"); 
				 break;
                case 3: printf("Selected vehicle -> Bike\n");
				 break;
                default: printf("Invalid subcategory\n");
            }
            break;
            
        case 3:
        	printf("Choose subcategories\n 1)Pizza\n 2)Burger\n 3)Biryani\n");
            scanf("%d", &subchoice);
            switch (subchoice) {
                case 1: printf("Selected food -> Pizza\n");
				 break;
                case 2: printf("Selected food -> Burger\n");
				 break;
                case 3: printf("Selected food -> Biryani\n");
				 break;
                default: printf("Invalid subcategory\n");
            }
            break;

        case 4:
            printf("Choose subcategories\n 1)Male\n 2)Female\n 3)Child\n ");
            scanf("%d", &subchoice);
            switch (subchoice) {
                case 1: printf("Selected human -> Male\n");
				 break;
                case 2: printf("Selected human -> Female\n");
				 break;
                case 3: printf("Selected human -> Child\n");
				 break;
                default: printf("Invalid subcategory\n");
            }
            break;

        default:
            printf("Invalid category selection\n");
            
    } 
    return 0;
            
}
