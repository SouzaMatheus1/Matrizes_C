#include <stdio.h>
#include <stdlib.h>
#define lin 7
#define col 2
#define tam 7

int pedirvetor(int vetor[tam]);
int imprimematriz(int matrizA[lin][col]);
int imprimevetor(int vetor[tam]);

int main(){
	int vA[tam],vB[tam],matrizC[lin][col];
	pedirvetor(vA);
	pedirvetor(vB);
	
	imprimevetor(vA);
	imprimevetor(vB);
	
	for(int i=0;i<lin;i++){
		for(int j=0;j<tam;j++){
			matrizC[i][0] = vA[i];
			matrizC[i][1] = vB[i];
		}
	}
	imprimematriz(matrizC);
}

int pedirvetor(int vetor[tam]){
	for(int i=0;i<tam;i++){
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &vetor[i]);	
	}printf("\n");
}

int imprimevetor(int vetor[tam]){
	printf("Vetor: ");
	for(int i=0;i<tam;i++){
		printf("%5d ", vetor[i]);	
	}printf("\n");
}

int imprimematriz(int matriz[lin][col]){
	printf("Matriz: \n");
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			printf("%5d", matriz[i][j]);
		}printf("\n");
	}
}
