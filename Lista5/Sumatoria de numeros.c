#include<stdio.h>

int main(){
    int limite_inferior, limite_superior, i=0, sumatoria;

    printf("Ingrese el limite inferior y superior: ");
    scanf("%d %d", &limite_inferior,&limite_superior);

    i= limite_inferior;

    while(i<limite_superior){
        
        limite_inferior = limite_inferior + i;
        sumatoria = limite_inferior + i;
        
        i++;
    }
    printf("La sumatoria entre es %d", sumatoria);
    
    return 0;
}
