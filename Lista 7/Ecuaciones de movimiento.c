#include<stdio.h>
#define G 9,8

int main(){
    int cant, i=1, pos,vel,tiempo,altura,acel;
    char Tipo;
    double posfinal;
    printf("Ingrese la cantidad de evaluaciones a realizar: ");
    scanf("%d",&cant);

    while (i<=cant)
    {
        printf("Ingrese la opcion de la ecuacion de a realizar: ");
        scanf("\n%c",&Tipo);
        if(Tipo == 'A'){
            printf("Ingrese lqa posicion inicial:\n ");
            scanf("%d",&pos);
            printf("Ingrese la velocidad: \n");
            scanf("%d",&vel);
            printf("Ingrese el tiempo:\n");
            scanf("%d",&tiempo);

            posfinal = pos+vel*tiempo;

            printf("La posicion fialcon MRU es %lf\n", posfinal);
        }
        else{
            if(Tipo == 'C'){
                printf("Ingrese la altura: \n");
                scanf("\n%d",&altura);
                printf("Ingrese el tiempo\n");
                scanf("\n%d",&tiempo);

                posfinal = altura-(double)(1/2)*G*tiempo*tiempo;
                printf("La posicion final en caida libre es %lf\n", posfinal);

            }
            else{
                if(Tipo == 'B'){
                    printf("Ingrese lqa posicion inicial: \n");
                    scanf("\n%d",&pos);
                    printf("Ingrese la velocidad\n");
                    scanf("\n%d",&vel);
                    printf("Ingrese el tiempo:\n");
                    scanf("\n%d",&tiempo);
                    printf("Ingrese la aceleracion:\n");
                    scanf("\n%d",&acel);

                    posfinal = pos+vel*tiempo+(double)(1/2)*acel*tiempo*tiempo;
                    printf("La posicion final con MRUV es %lf", posfinal);
                }

            }
        }
    
    i++;
    }
    return 0;
}
/*
4
A
10
10
15


*/
