#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LADOCUADRADO 4

double metodo_montecarlo(int cantidad);

int main(){
    int cantidad;
    double Real;

    printf("Ingrese la cantidad de puntos a generar:");
    scanf("%d", &cantidad);

    if(cantidad>0){

        Real = metodo_montecarlo(cantidad);
        if (Real>0){
            printf("El area aproximada es: %lf", Real);
        }


    }
    else{;
        printf("La cantidad de puntos a generar debe ser mayor que cero");
    }
    return 0;
}


double metodo_montecarlo(int cantidad){
    double resultado,AleatX,AleatY;
    int i=1,cont = 0,Estadentro;
    while (i<=cantidad)
    {
        AleatX = 2*((double)rand()/RAND_MAX);
        AleatY = 2*((double)rand()/RAND_MAX);
        Estadentro  = pow(AleatX,2)+pow(AleatY,2)<=1;
        if(Estadentro){
            cont++;
        }

        i++;
    }

    resultado = ((double)cont/cantidad)*(pow(LADOCUADRADO,2));

    return resultado;
}