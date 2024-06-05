#include<stdio.h>


int main(){
    int Num, i=1, ContPrimo;

    printf("Ingrese el numero a evaluar: ");  
    scanf("\n%d", &Num);
    ContPrimo=0;
    while (i<= Num){

        if(Num%i==0){    
            ContPrimo++;
        }
        i++;
    }

    if(ContPrimo==2){
        printf("El numero %d es primo", Num);

    }

    else{
        printf("El numero no es primo");
    }


    return 0;
}
