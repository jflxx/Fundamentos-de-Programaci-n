#include<stdio.h>

int main(){
    int num,i,cantnum,digCent,digDec,digUnid,digmayor,dig1,dig2;
    printf("Ingrese la cantidad de numeros a evaluar: ");
    scanf("%d", &cantnum);
    i=1;

    while(i<=cantnum){
        printf("Ingreswe un numero de 3 cifras");
        scanf("%d",&num);
        digCent = num/100;
        digDec =(num/10)%10;
        digUnid = (num %10);

        if(digCent>digDec && digCent>digUnid){
            digmayor = digCent;
            dig1 = digDec;
            dig2 = digUnid;
        }
        else{
            if (digDec>digCent && digCent>digUnid)
            {
                digmayor = digCent;
                dig1 = digCent;
                dig2=digDec;
            }
            else{
                digmayor = digDec;
                dig1 = digCent;
                dig2 = digUnid;
            }
            
        }
        printf("%d%d%d",digmayor,dig1,dig2);
    }
    return 0;
}