#include<stdio.h>
#include<math.h>
int main(){
	int lado,area;
	
	printf("Ingrese el lado del cuadrado: ");
	scanf("%d", &lado);
	
	if(lado>0){
		
		area = pow(lado,2);
		printf("El area del cuadrado con lado %d es %d", lado, area);
		
	}
	else{
		printf("El lado no pertenece a un cuadrado");
	}
	
	return 0;
}
