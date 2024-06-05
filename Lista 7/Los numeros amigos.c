#include<stdio.h>
void LeerDatos(int *NumA,int *NumB);
int SumaDivisores(int Num);
int Validar(int NumA,int NumB);

int main(){
	int NumA,NumB,Validacion;
	
	LeerDatos(&NumA,&NumB);
	Validacion = Validar(NumA,NumB);
	
	if(Validacion){
		printf("Los numero ingresados son amigos");
	}
	else{
		printf("Los numeros ingresados no son amigos");
	}
	return 0;
}

void LeerDatos(int *NumA,int *NumB){
	printf("Ingrese los numeros a evaluar: ");
	scanf("%d %d", NumA, NumB);
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

int Validar(int NumA,int NumB){
	int SumaA,SumaB;
	
	SumaA = SumaDivisores(NumA);
	printf("%d\n", SumaA);
	SumaB = SumaDivisores(NumB);
	printf("%d\n",SumaB);
	return (SumaA==NumB && SumaB ==NumA);
}

