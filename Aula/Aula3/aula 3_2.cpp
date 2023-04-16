#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int age = 1;
	float price=0;

		
	while(age != 0)
	{
        printf("\nDigite a idade do visitante:");
		scanf("%d",&age);
		
		if(age <= 2){
			price += 0.0;
		}
		
		else if(age >= 3 && age < 12){
            price += 14.0;
		}
		
		else if(age >= 65){
            price += 18.0;
		}
		
		else{
			price += 23.0;
		}
		
        printf("O Valor do grupo é %.2f\n",price);

}
	printf("O Valor do grupo é %.2f\n",price);
	system("pause");
}
