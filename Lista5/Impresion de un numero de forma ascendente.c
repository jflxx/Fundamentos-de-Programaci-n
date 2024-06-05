#include <stdio.h>

int main(){
    int limite_inferior, limite_superior;

    printf("Ingrese el limite inferior y superior: ");
    scanf("%d %d", &limite_inferior, &limite_superior );

    while (limite_inferior<=limite_superior){

        printf("%d\n", limite_inferior);
        
        limite_inferior++;
    }


    return 0;
}
