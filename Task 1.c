#include <stdio.h>
int main() {
	float Pmarks, AImarks, Mmarks, Attpercentage, avg;
	printf("Enter your Programming Marks\n");
	scanf("%f", &Pmarks);
	printf("Enter your AI Marks\n");
	scanf("%f", &AImarks);
	printf("Enter your maths marks\n");
	scanf("%f", &Mmarks);
	printf("Enter your attendance percentage\n ");
	scanf ("%f", &Attpercentage);
	
	if(Pmarks>=50 && AImarks>=50 && Mmarks>= 50 && Attpercentage>=75) {
		avg = (Mmarks + AImarks + Pmarks)/3;
		printf("Student is eligible\n");
		printf("Average marks is, %.2f\n", avg);
		if (avg >= 80){
			printf("Excellent\n");
		}
		if(avg>= 70) {
			printf("Very good\n");
		}
		if (avg>= 60) {
			printf("Good\n");
		}
		if (avg>= 50) {
			printf("Satisfactory\n");
		}
		else {
			printf("Poor\n");
		}
		 
	}else {
		printf ("Student is not eligible");
	}
	return 0;
}
