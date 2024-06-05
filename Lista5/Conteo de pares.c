#include<stdio.h>

int main(){

    int i=1, limite_superior, limite_inferior; 
    int ContPares=0;

    printf("Ingrese el limite inferior y superior para el conteo de pares: ");
    scanf("%d %d", &limite_inferior, &limite_superior);

    i = limite_inferior;
    while(i <= limite_superior){

        if( i%2==0){
            ContPares++;
        }
        
        i++;
    }

    printf("Hay %d pares en el rango [%d,%d]", ContPares, limite_inferior, limite_superior);


    return 0;
}