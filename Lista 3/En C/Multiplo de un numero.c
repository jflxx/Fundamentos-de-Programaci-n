#include <stdio.h>

int main(){
	
	int Num_A,Num_B,Mult;
	
	printf("Ingrese el numero a y b: ");
	scanf("%d %d", &Num_A,&Num_B);
	
	Mult = (Num_A%Num_B==0);
	
	if(Mult){
		printf("%d es multiplo de %d", Num_A,Num_B);
	}

	else{
		printf("%d no es multiplo de %d", Num_A, Num_B);
	}
	return 0;

}
