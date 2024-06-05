#include<stdio.h>

int main(){
	int i=1,k;
	while(i<=12){
		k=1;
		printf("\nTabla del %d\n", i);
		while(k<=12){
			printf("%d x %d = %d\n",i,k,i*k);
			k++;
		}
		i++;
 	}
	return 0;
}

