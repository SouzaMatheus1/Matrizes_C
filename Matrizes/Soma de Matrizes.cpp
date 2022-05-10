#include <stdlib.h>
#include <stdio.h>
#define lin 5
#define col 3

int pedirvalor(int matrizA[lin][col]);
int imprime(int matrizA[lin][col]);

int main(){
	int matrizA[lin][col], matrizB[lin][col], matrizC[lin][col];
	
	pedirvalor(matrizA);
	pedirvalor(matrizB);
	
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	imprime(matrizA);
	imprime(matrizB);
	imprime(matrizC);
}

int pedirvalor(int matrizA[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("Digite o valor para a posicao da [%d][%d] matriz: ", i+1,j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}printf("\n");return(matrizA[lin][col]);
}

int imprime(int matriz[lin][col]){
	printf("Matriz: \n");
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("%5d", matriz[i][j]);
		}printf("\n");
	}
}
