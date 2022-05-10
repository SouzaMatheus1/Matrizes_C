#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 5

int pedirmatriz(int matrizA[lin][col]);
int imprimematriz(int matrizA[lin][col]);

int main(){
	int matrizA[lin][col];
	
	pedirmatriz(matrizA);
	imprimematriz(matrizA);
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
	printf("Matriz: \n");
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("%5d", matriz[i][j]);
		}printf("\n");
	}
}
