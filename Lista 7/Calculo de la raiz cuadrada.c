#include<stdio.h>

int main(){
    int i=1,Num,Iteraciones;
    double Promedio,a=1,Div;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &Num);
    printf("Ingrese la cantidad de iteraciones: ");
    scanf("%d", &Iteraciones);

    printf("i\tN\t    a\t\tN/a\t\tPromedio\n");
    Div=Num;
    while(i<=Iteraciones){
        Div = Num/a;
        Promedio = (a+Div)/2;
        printf("%d\t%d\t%lf\t%lf\t%lf\n",i,Num,a,Div,Promedio);

        a=Promedio;
        i++;
    }
    
    printf("\n\nLa raiz cuadrada de %d obtenida es %lf", Num, Promedio);

    return 0;
}