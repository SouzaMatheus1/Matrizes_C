#include <stdio.h>
#include <stdlib.h>
#define lin 12
#define col 2

int pedirvetor(int vetor[lin]);
int imprimematriz(int matrizA[lin][col]);
int imprimevetor(int vetor[lin]);

int main(){
	int vetor[lin],vetorB[lin],matriz[lin][col];
	
	pedirvetor(vetor);
	pedirvetor(vetorB);
	
	for(int i=0;i<lin;i++){
		for(int j=0;j<col;j++){
			matriz[i][0] = vetor[i] * 2;
			matriz[i][1] = vetorB[i] - 5;
		}
	}
	
	imprimematriz(matriz);
}

int pedirvetor(int vetor[lin]){
	for(int i=0;i<lin;i++){
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &vetor[i]);	
	}printf("\n");
}

int imprimevetor(int vetor[lin]){
	printf("Vetor: ");
	for(int i=0;i<lin;i++){
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
