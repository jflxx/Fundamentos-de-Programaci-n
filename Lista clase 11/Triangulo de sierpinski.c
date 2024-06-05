#include<stdio.h>
#include<math.h>

int main(){
    int etapa,num_filas,i=1,columna,combinatorio,esImpar,fila;
    
    printf("Ingrese etapa: ");
    scanf("%d", &etapa);
    num_filas = pow(2,etapa-1);
    printf("Imprimiendo %d filas\n", num_filas);
    //i es la fila ojo ojito ojete
    while (i<=num_filas)
    {	
        int k=1;
        while (k<=num_filas-i)
        {
            printf(" ");
            k++;
        }
        columna = 0;
        fila=i-1;
        while (columna<= fila)
        {
            combinatorio = calcularCombinatorio(fila,columna);
            esImpar = calcularsiesimpar(combinatorio);
            if(esImpar){
                printf("A ");
            }else{
                printf("  ");
            }
            columna++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
int calcularCombinatorio(fila,columna){
    int factorialP,factorialR,factorialPyR;
    factorialP = calcularfactorial(fila);
    factorialR = calcularfactorial(columna);
    factorialPyR = calcularfactorial(fila-columna);
    return (factorialP)/((factorialR)*(factorialPyR));
}
int calcularfactorial(k){
    int factorial=1,i=1;
    while (i<=k)
    {
        factorial = factorial*i;
        i++;
    }   
    return factorial;
}
int calcularsiesimpar(combinatorio){
    return combinatorio%2!=0;
}
