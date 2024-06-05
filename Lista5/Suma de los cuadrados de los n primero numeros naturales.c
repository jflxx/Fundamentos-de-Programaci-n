#include<stdio.h>

int main(){
    int SumaIter,SumaForm, i=1, N,Sumatoria;

    printf("Ingrese n: ");
    scanf("%d", &N);
	
	SumaIter=0;
	
    while ( i<=N){

        Sumatoria = i*i;
        SumaIter = SumaIter+Sumatoria;

        i++;
    }
    
    printf("%d\n", SumaIter);

    SumaForm = (N*(N+1)*(2*N+1))/(6);
    
    prinft("%d\n", SumaForm);

    if (SumaForm == SumaIter){
        printf("La formula es correcta");
    }

    else{
        printf("La formula es incorrecta");
    }


    return 0;
}
