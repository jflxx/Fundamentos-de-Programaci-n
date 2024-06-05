#include<stdio.h>
#include<math.h>

#define Pi 3.14159

int main(){
	int LadoA, LadoB;
	double AnguloAB, LadoC,AnguloBC,AnguloAC;
	char Criterio, ClasTri;
	
	printf("Ingrese los lados A, B y el angulo que forman: ");
	scanf("%d %d %lf", &LadoA, &LadoB, &AnguloAB);
		
	printf("Ingrese el criterio de evauluacion: ");
	scanf("\n%c", &Criterio);
	
	AnguloAB = AnguloAB*(Pi/180);
	
	if (LadoA>0&&LadoB&&(AnguloAB>0)&&(AnguloAB<180)&&((Criterio == 'L')||(Criterio == 'A'))){
		
		LadoC = sqrt(pow(LadoA,2)+pow(LadoB,2)-2*(double)LadoA*(double)LadoB*cos(AnguloAB));
		AnguloBC = asin((LadoA*sin(AnguloAB))/LadoC);
		AnguloAC = asin((LadoB*sin(AnguloAB))/LadoC);
		
		if(Criterio=='A'){
		
			if(AnguloAB<Pi/2&&AnguloAC<Pi/2&&AnguloBC>Pi/2){
				
				printf("Triangulo acutangulo\n");
			}			
			else{
				if(AnguloAB==Pi/2 || AnguloAC==Pi/2 || AnguloBC == Pi/2){
					
					printf("Triangulo Rectangulo\n");
				}
				else{
					printf("Triangulo obtusangulo\n");
				}
				
			}				
		}
		
		else{
			
			if(LadoA == LadoB && LadoB == LadoC){
				printf("Triangulo equilatero\n");
			}
			
			else{
				if(LadoA != LadoB && LadoA != LadoC &&LadoB != LadoC){
					printf("Triangulo escaleno\n");
				}
				else{
					printf("Triangulo isósceles");
				}
			}
			
			
		}
		
		printf("Lado C: %.2lf", LadoC);
		printf("\nAngulo AC: %.2lf", AnguloAC*((double)180/Pi));
		printf("\nAngulo BC: %.2lf", AnguloBC*((double)180/Pi));
			
			
	}
	
	else{
		
		if(LadoA<=0 || LadoB<=0){
			printf("Los lados del triangulo no pueden ser menores o iguales a cero");
		}
		else{
			if(AnguloAB>180 || AnguloAB<0){
				printf("El angulo de un triangulo debe ser mayor que cero y menor que 180 grados sexagesimales");
			}
		
			else{
				printf("Los unicos criterios permitidos son A y L");
			}			
		}
	}	
		
	return 0;
}
