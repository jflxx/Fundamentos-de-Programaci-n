#include<stdio.h>

int main(){
	double Num,Ver_Num;
	
	printf("Ingrese un numero: ");
	scanf("%lf", &Num);
	
	if(Num==0){
		
		printf("EL numero es igual a cero.");
	}
	
	else{
		printf("EL numero es diferente de cero");
	}
	
	return 0;
}
