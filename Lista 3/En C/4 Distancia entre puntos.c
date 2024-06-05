#include<stdio.h>
#include<math.h>

int main(){
	double Punto_Ax,Punto_Ay,Punto_Bx,Punto_By,Distancia;
	
	printf("Ingrese el punto A: ");
	scanf("%lf %lf", &Punto_Ax, &Punto_Ay);
	
	printf("Ingrese el punto B: ");
	scanf("%lf %lf", &Punto_Bx, &Punto_By);
	
	if((Punto_Ax>0)&&(Punto_Ay>0)&&(Punto_Bx>0)&&(Punto_By>0)){
			
		Distancia = sqrt(pow(Punto_Ax-Punto_Bx,2)+pow(Punto_Ay-Punto_By,2));
		
		printf("EL valor de la distancia entre los puntos es: %lf", Distancia);
		
				
	}
	
	else{
		printf("Los puntos no pertenecen al primer cuadrante.");
	}	
	
	return 0;
}
