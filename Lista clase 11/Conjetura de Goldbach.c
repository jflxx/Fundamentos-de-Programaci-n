#include <stdio.h>

int main(){
	int i=0,k=1,lim_inf,lim_sup,num_primo1,num_primo2,numkesprimo,num2esprimo;
	printf("Ingrese el rango inicial a: ");
	scanf("%d", &lim_inf);
	printf("Ingrese el rango superior b: ");
	scanf("%d", &lim_sup);
	
	while (i<=lim_sup){
		if(i%2==0 && i>2){
			k=1;
			while(k<=lim_sup){
				numkesprimo = verificarsiesprimo(k);
				if (numkesprimo){
					num_primo1=k;
					num_primo2=i-num_primo1;
					num2esprimo=verificarsiesprimo(num_primo2);
					if(num2esprimo){
						printf("%d = %d + %d\n", i,num_primo1,num_primo2);
					}
				}	
				k++;
			}
		}
		i+=2;
	}
	
	return 0;
}

int verificarsiesprimo(int num){
	int esprimo=0,i=1,cont_primo=0;
	while(i<=num){
		if (num%i==0){
			cont_primo++;
		}
		i++;
	}
	return esprimo=cont_primo==2;
}
