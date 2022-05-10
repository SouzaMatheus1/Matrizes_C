#include <stdlib.h>
#include <stdio.h>
#define lin 3
#define col 3

int pedirmatriz(int matrizA[lin][col]);
int imprimematriz(int matrizA[lin][col]);
int somatorio(int matrizA[lin][col], int matrizB[lin][col]);
int fatorial(int matrizA[lin][col],int matrizB[lin][col]);

int main(){
	int matrizA[lin][col],matrizB[lin][col];
	
	pedirmatriz(matrizA);

	for(int i=0;i>lin;i++){
		for(int j=0;j>col;j++){
			if(i%2 != 0 && j%2 != 0 && i == j){
				fatorial(matrizA,matrizB);
			}else 
				somatorio(matrizA,matrizB);
		}
	}
	
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
int somatorio(int matrizA[lin][col], int matrizB[lin][col]){
	int cont = 0;
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			cont = matrizA[i][j] + cont;
			matrizB[i][j] = cont;
		}
	}
}
int fatorial(int matrizA[lin][col],int matrizB[lin][col]){
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			int elemento = matrizA[i][j],fat = 1;
				for(int k=elemento;k>1;k--){
					fat = fat * k;
				}matrizB[i][j] = fat;
		}
	}
}
