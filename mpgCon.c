/* Litres / 100km to mpg and reverse */
#include <stdio.h>
#include <ctype.h>

float k2m(void);
float m2k(void);

int main(void)
{
	char choice;
	float answer;
	printf("\nMENU");
	printf("\nA\tMiles per Gallon to Litres per 100km");
	printf("\nB\tLitres per 100km to Miles per gallon");
	printf("\nChoose A or B--> ");
	choice = getchar();
	choice = toupper(choice);
	switch(choice)
	{/*make choice*/
		case 'A':
			printf("\nYou picked ");
			putchar(choice);
			printf(": Miles per gallon to Litres per 100km.\n");
			answer = m2k();
			printf("The answer is %.2f Litres per 100km\n", answer);
			break;
		case 'B':
			printf("\nYou picked ");
			putchar(choice);
			printf(": Litres per 100km to Miles per gallon.\n");
			answer = k2m();
			printf("The answer is %.2f Miles per gallon.\n", answer);
			break;
		default:
			printf("\nYou did not choose A or B, dum dum!\nWhy did you choose ");
			putchar(choice);/* A wee insult*/
			printf("?\n");     
	}
}
/*do all the math in these two functions*/
float m2k(void)
{
	float in;
	float out;
      
	printf("Enter your miles per gallon: ");
	scanf("%f", &in);
	out = 235.214 / in;
	return out;
}
float k2m(void)
{
	float in;
	float out;
      
	printf("Enter your litres per 100km: ");
	scanf("%f", &in); 
	out = 378.5411784 / (in * 1.609344);
	return out;
}
     
