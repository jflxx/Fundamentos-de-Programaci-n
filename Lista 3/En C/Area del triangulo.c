#include<stdio.h>
#include<math.h>

int main(){
	double area, a,b,c;
	
	printf("Ingrese el valor de los lados: ");
	scanf("%lf %lf %lf", &a,&b,&c);
	
	if((a+b>c)&&(b+c>a)&&(c+a>b)){
		
		s = (a+b+c)/2;
		
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		printf("El area del triangulo es %lf ", area);
		
	}	
	
	else{
		printf("Datos de entrada incorrectos");		
	}
	
	return 0;
}
