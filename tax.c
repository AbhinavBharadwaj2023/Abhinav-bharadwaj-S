#include <stdio.h>
int main(){

	
	int income;
	printf("enter your income ");
	scanf("%d",&income);
	 

     if (income <250000)
     {
        printf("you have to pay no tax");
     }
     
     else if (income >= 250000 && income<=500000)
     {
        float tax_1 = income *0.05;
        printf("you have to pay %f tax", tax_1);
     }
     
     else if (income >= 500000 && income>=1000000)
     {
        float tax_2 = income *0.2;
        printf("you have to pay %f tax", tax_2);
     }
	
	else if (income <100000)
     {
        float tax_3 = income *0.3;
        printf("you have to pay %f tax", tax_3);
     }
	return 0;
}