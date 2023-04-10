#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int in;
	char cad[100];
	char cadR[100];
	char oracion[100];
	int longitud;
	int c=0;
	int acum=0;
	printf("Cadena:\t");
	scanf("%[^\n]", &cad);
	longitud=strlen(cad);
	for(in=0;in<longitud;in++){
		if(cad[in]!=' '){
			cadR[c]=cad[in];
			c++;
		}	
    }
    for(in=0;in<c;in++){
		oracion[in]=cadR[c-1-in];
	}	
	for(in=0;in<c;in++){
		if(cadR[in]==oracion[in]){
			acum++;
		}
	}
	if(acum==c){
		printf("\nEs una palabra palindroma");
	}
	else{
		printf("\nNo es una palabra palindroma");
	}
	return 0;
}
