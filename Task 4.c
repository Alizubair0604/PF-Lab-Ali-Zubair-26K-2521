#include <stdio.h>

int main() {
    int category, option;

    printf("Select one category\n1)Greeting\n2)Study\n3)Weather\n4)Help\n");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("Select one\n1)Hello\n2)How are you\n3)Goodbye\n");
            scanf("%d", &option);
            switch (option) {
                case 1:
				 printf("Hi there! How can I help you today?\n");
				 break;
                case 2:
				 printf("I'm doing great!\n");
				 break;
                case 3:
				 printf("Goodbye! Have a great day \n");
				 break;
                default:
				 printf("Option not recognized\n");
            }
            break;

        case 2:
            printf("Select one\n1)Programming\n2)Mathematics\n3)AI\n ");
            scanf("%d", &option);
            switch (option) {
                case 1:
				 printf("Practice coding every single day!\n");
				 break;
                case 2:
				 printf("Math builds problem-solving logic\n");
				 break;
                case 3:
				 printf("AI is driven by data and machine learning\n");
				 break;
                default:
				 printf("Option not recognized\n");
            }
            break;

        case 3:
            printf("Select one\n1)Today\n2)Tommorow\n3)Forecast\n ");
            scanf("%d", &option);
            switch (option) {
                case 1:
				 printf("It's sunny and clear today\n");
				 break;
                case 2:
				 printf("Light rain expected tomorrow\n");
				 break;
                case 3:
				 printf("Pleasant weather for the rest of the week\n");
				 break;
                default:
				 printf("Option not recognized\n");
            }
            break;

        case 4:
            printf("Select one\n1)About Chatbot\n2)Commands\n3)Exit\n");
            scanf("%d", &option);
            switch (option) {
                case 1:
				 printf("Bot: Simple C Rule-Based Chatbot v1.0.\n");
				 break;
                case 2:
				 printf("Bot: Select menu numbers 1 to 4.\n");
				 break;
                case 3:
				 printf("Exiting ...\n");
				 break;
                default: printf("Option not recognized\n");
            }
            break;

        default:
            printf("Invalid Category\n");
    }
    return 0;
}
