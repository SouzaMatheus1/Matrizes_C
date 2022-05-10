#include <stdlib.h>
#include <stdio.h>
#define lin 4
#define col 5

int pedirmatriz(int matrizA[lin][col]);
int imprimematriz(int matrizA[lin][col]);
int fahrenheit(int cel[lin][col], int saida[lin][col]);

int main(){
	int cels[lin][col],fahr[lin][col];
	pedirmatriz(cels);
	
	fahrenheit(cels,fahr);
	
	printf("Matriz Celcius: \n");
	imprimematriz(cels);
	printf("Matriz Fahrenheit: \n");
	imprimematriz(fahr);
}

int pedirmatriz(int matrizA[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("Digite o valor para a posicao da [%d][%d] matriz: ", i+1,j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}printf("\n");return(matrizA[lin][col]);
}
int imprimematriz(int matriz[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("%5d", matriz[i][j]);
		}printf("\n");
	}
}
int fahrenheit(int ent[lin][col], int saida[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			saida[i][j] = (ent[i][j] * 1.8) + 32;
		}
	}
}





