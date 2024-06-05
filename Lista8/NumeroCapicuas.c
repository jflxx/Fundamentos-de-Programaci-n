#include<stdio.h>
#include<math.h>

int main(){
    int CantCIfras,NumEvaluar,esvalido,Capicua, dcapicua, icapicua;

    printf("Ingrese la cantidad cifras : ");
    scanf("%d", &CantCIfras);
    printf("Ingrese el numero a evaluar: ");
    scanf("%d", &NumEvaluar);

    if(4<=CantCIfras && CantCIfras <= 5){
        esvalido = EvaluarDatos(CantCIfras,NumEvaluar);
        if(esvalido){
            evaluarCapicuas(CantCIfras,NumEvaluar,&Capicua, &dcapicua,&icapicua);
            if(Capicua || dcapicua || icapicua){
                printf("El nuero es distinguido porque es: ");
                if(icapicua){
                    printf("icapicua");
                }
                if(dcapicua){
                    printf("dcapicua");
                }
                if (Capicua)
                {
                    printf("Capicua");
                }
                
            }
        }
        else{
            printf("El numero no coincide");
        }

    }
    else{
        
        printf("La cantidad de cifras ingresada no es correcta");
    }


    return 0;
}

void evaluarCapicuas(int cantcifras,int numevaluar,int *capicua ,int *dcapicua,int *icapicua){
    int copianum;
    copianum = numevaluar;
    (*capicua)=EvaluarSiEsCapicua(cantcifras,numevaluar);
    copianum = numevaluar % (int)pow(10,cantcifras-1);
    (*icapicua)=EvaluarSiEsCapicua(cantcifras,numevaluar);
    copianum = copianum/10;
    (*dcapicua)=EvaluarSiEsCapicua(cantcifras,numevaluar);

}


int EvaluarSiEsCapicua(int CantCifras, int NumEvaluar){
    int i = 1;
    int numorig, dig,nnum,escapicua;
    numorig=NumEvaluar;
    while(i<=CantCifras){
        dig = NumEvaluar %10;
        nnum = dig + nnum*10;
        NumEvaluar = NumEvaluar/10;
    }

    if(nnum==){
        escapicua =1;
    }else{
        escapicua = 0;
    }

    return escapicua;
}

int EvaluarDatos (int CantCIfras, int NumEvaluar){
    int esvalido;

    esvalido = pow(10,CantCIfras-1)<= NumEvaluar && NumEvaluar<pow(10,CantCIfras);

    return esvalido;
}
