#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int valorquadrado(){
	
	int a = 8, *p = &a;
	
	return (*p)*(*p);
	
}

int main(){
	int x;
	
	 x = valorquadrado();
	
	printf("%d\n",x);
	
	system("pause");
}
