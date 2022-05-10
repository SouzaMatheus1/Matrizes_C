#include <stdlib.h>
#include <stdio.h>
#define lin 5
#define col 5

int pedirmatriz(int matrizA[lin][col]);
int imprimematriz(int matrizA[lin][col]);
int funcao(int entrada[lin][col], int saida[lin][col]);

int main(){
	int matrizA[lin][col],matrizB[lin][col];
	
	pedirmatriz(matrizA);
	system("cls");
	
	funcao(matrizA,matrizB);
	
	printf("Matriz A: \n");
	imprimematriz(matrizA);
	printf("Matriz B: \n");
	imprimematriz(matrizB);
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
int funcao(int matrizA[lin][col], int matrizB[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			if(i == j){
				matrizB[i][j] = matrizA[i][j] * 3;
			}else matrizB[i][j] = matrizA[i][j] * 2;
		}
	}
}
