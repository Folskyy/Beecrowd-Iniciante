#include<stdio.h>

// ÍMPAR -> i + 1
// PAR   -> i - 1

int main(){
	int estrela, count = 0;

	// Definindo o número de estrelas e a quant. de carneiros
	scanf("%d", &estrela);

	int carneiros[estrela], estrelas_atacadas[estrela];
	
	// inicializando o vetor aux. das estrelas atacadas e lendo a quant. de carneiros em cada estrela
	for(int i = 0; i < estrela; i++){
		estrelas_atacadas[i] = 0;
		scanf("%d", &carneiros[i]);
	}

	while(count >= 0 && count < estrela){ // enquanto o alvo estiver no intervalo do numero das estrelas
		if((carneiros[count]) % 2 == 1){ // se for impar vai pra proxima estrela
			if(carneiros[count] > 0)// se tiver carmeiros, rouba 1
				carneiros[count]--;
			estrelas_atacadas[count] = 1; // marca estrela como atacada
			count++; // vai para a próxima estrela
		}
		else{ // se for par retorna uma estrela
			if(carneiros[count] > 0) // se tiver carneiros, rouba 1
				carneiros[count]--;
			estrelas_atacadas[count] = 1; // marca estrela como atacada
			count--;// vai para a estrela anterior
		}
	}
	int total_carneiros = 0, num_estrelas_atacadas = 0;

	for(int i = 0; i < estrela; i++){
		total_carneiros += carneiros[i]; // somatório dos carneiros restantes
		if(estrelas_atacadas[i] == 1)
			num_estrelas_atacadas++; // somatório das estrelas visitadas/atacadas
	}
	printf("%d %d\n", num_estrelas_atacadas, total_carneiros);

	return 0;
}
