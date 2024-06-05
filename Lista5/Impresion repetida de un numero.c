#include<stdio.h>

int main(){
    int Num, Cant, i=1;

    printf("Ingrese el Numero y la cantidad de veces a repetir: ");
    scanf("\n%d %d", &Num, &Cant);

    while (i <= Cant){

        printf("%d\n", Num);
        i++;
    }

    return 0;
}
