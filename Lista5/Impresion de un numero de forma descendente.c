#include <stdio.h>

int main(){
    int limite_inferior, limite_superior;

    printf("Ingrese el limite superior y superior respectivamente: ");
    scanf("%d %d", &limite_superior, &limite_inferior );

    while (limite_superior>=limite_inferior){

        printf("%d\n", limite_superior);
        limite_superior--;        
    }
    return 0;
}