#include <stdio.h>
#include <conio.h>
void main ()
{
	float BMI,height, weight;
	printf("Enter your weight(kg) and height(m): ");
	scanf("%f%f",&weight,&height);
	BMI=weight/(height*height);
	if (BMI<16)
	printf("Severe Thinness");
	else if (BMI<17 && BMI>=16)
		printf("Moderate Thinness");
	else if (BMI<18.5 && BMI>=17)
		printf("Mild Thinness");
	else if (BMI>=18.5 && BMI<25) 
		printf("Normal");
	else if (BMI>=25 && BMI<30)
		printf("Overweight");
	else if (BMI>=30 && BMI<35)
		printf("Obese Class I");
	else if (BMI>=35 && BMI<40)
		printf("Obese Class II");
	else 
		printf("Obese Class III");
	getch();
}


	