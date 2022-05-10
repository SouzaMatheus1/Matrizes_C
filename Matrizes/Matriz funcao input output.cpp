#include <stdlib.h>
#include <stdio.h>
#define lin 3
#define col 3

int pedirmatriz(int matrizA[lin][col]);
int imprimematriz(int matrizA[lin][col]);

int main(){
	int matrizA[lin][col],matriB[lin][col];
	for(int)
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
