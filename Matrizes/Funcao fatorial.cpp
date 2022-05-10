#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 3
#define tam 10

int pedirvetor(int vetor[tam]);
int fatorialvetor(int vetor[tam]);
int imprimematriz(int matrizA[lin][col]);
int imprimevetor(int vetor[tam]);

int main(){
	int matrizA[tam],matrizC[lin][col];
	
	pedirvetor(matrizA);
	
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			matrizC[i][0] = matrizA[i] + 5;
			matrizC[i][1] = fatorialvetor(matrizA);
			matrizC[i][2] = matrizA[i] * matrizA[i];
		}
	}
	
	imprimevetor(matrizA);
	imprimematriz(matrizC);
}

int pedirvetor(int vetor[tam]){
	for(int i=0;i<tam;i++){
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &vetor[i]);	
	}printf("\n");
}

int fatorialvetor(int vetor[tam]){
	for (int i = 0; i < lin;i++){
		int resultado = 1;
		for (int j = vetor[i]; j > 0; j--){
			resultado = resultado * j; 
		}
		vetor[i] = resultado;
	}
}

int imprimematriz(int matriz[lin][col]){
	printf("Matriz: \n");
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("%5d", matriz[i][j]);
		}printf("\n");
	}
}

int imprimevetor(int vetor[tam]){
	printf("Vetor: \n");
	for(int i=0;i<tam;i++){
		printf("%5d", vetor[i]);
	}printf("\n");
}
