#include<stdio.h>

int validaRango(int lim_inferior, int lim_superior);
void ValidarSiEsOdiosOMalv(int num,int *esOdioso,int *esMalvado);
void CalcularPorcentajes(int contOdioso,int contMalv,double *porcOdioso,double *porcMalv);

int main(){
	int lim_inferior,lim_superior,esValido;
	printf("Ingrese el rango de numeros a evaluar: ");
	scanf("%d %d",&lim_inferior,&lim_superior);
	esValido = validaRango(lim_inferior,lim_superior);
	
	if(esValido){
		
	}
	else{
		printf("Los valores ingresados para el rango no se ");
	}
	return 0;
}
int validaRango(int lim_inferior, int lim_superior){
	int resp;
	if(lim_inferior>0 && lim_inferior<lim_superior){
		resp=1;	
	}else{
		resp=0;
	}
	return resp;
}
void MostraryCalcNums(int lim_inferior,int lim_superior){
	int i=lim_inferior,esOdioso,esMalvado,contOdioso=0,contMalv=0;
	double porcOdioso,porcMalv;
	while(1){
		printf("El n´umero %d es un n´umero\n", i);
		
		ValidarSiEsOdiosOMalv(i,&esOdioso,&esMalvado);
		if(esOdioso){
			printf(" odioso\n", i);
			contOdioso++;
		}else{
			printf(" malvado\n", i);
			contMalv++;
		}
		if(i==lim_superior){
			break;
		}
		i++;
	}
	
	CalcularPorcentajes(contOdioso,contMalv,&porcOdioso,&porcMalv);
	printf("---------Reporte------------------\n");
	printf("El porcentaje de n´umeros malvados es: %lf\n ", porcMalv);
	printf("El porcentaje de n´umeros odiosos es: %lf\n ", porcOdioso);
	
	
}
void ValidarSiEsOdiosOMalv(int num,int *esOdioso,int *esMalvado){
	int contUNO=0,dig;
	while(num>0){
		dig=num%2;
		num=num/2;
		if(dig==1){
			contUNO++;
		}
	}
	if(contUNO%2==0){
		(*esMalvado)=1;
		(*esOdioso)=0;
	}
	else{
		(*esMalvado)=0;
		(*esOdioso)=1;
	}
	
}
void CalcularPorcentajes(int contOdioso,int contMalv,double *porcOdioso,double *porcMalv){
	int total=contOdioso+contMalv;
	(*porcOdioso)=((double)contOdioso/total)*100;
	(*porcMalv)=100-(*porcOdioso);
	
}
