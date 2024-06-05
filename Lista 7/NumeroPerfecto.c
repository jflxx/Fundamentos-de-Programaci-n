#include<stdio.h>
void LeerDatos(int *NumA);
int SumaDivisores(int Num);
int Validar(int NumA);

int main(){
	int NumA,Validacion;
	
	LeerDatos(&NumA);
	Validacion = Validar(NumA);
	
	if(Validacion){
		printf("El numero ingresados es perfercto");
	}
	else{
		printf("El numero ingresados no es perfecto");
	}
	return 0;
}

void LeerDatos(int *NumA){
	printf("Ingrese el numero a evaluar: ");
	scanf("%d", NumA);
}

int SumaDivisores(int Num){
	int Sumatoria=0,i=1;
		
	while(i<Num){
		if(Num%i==0){
			Sumatoria = Sumatoria + i;
		}
	i++;
	}
	return Sumatoria;
}

int Validar(int NumA){
	int SumaA;
	
	SumaA = SumaDivisores(NumA);

	return (SumaA==NumA);
}