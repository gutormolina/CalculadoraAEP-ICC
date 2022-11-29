#include <stdio.h>

int main(){
	
	float N, M;
	float R = 0;
	int op;
	
	do {
		do {
			printf("Escolha uma operacao: \n");
			printf("1. Soma\n");
			printf("2. Subtracao\n");
			printf("3. Multiplicao\n");
			printf("4. Divisao\n");
			printf("5. Somatorio\n");
			printf("6. Sair\n");

			scanf("%d", &op);

			if (op < 1 || op > 6) {
				printf("\nO numero inserido precisa ser de 1 a 6.\n\n");
			}

		} while(op < 1 || op > 6);

		if (op == 6) {
			continue;
		}

		printf("\nDigite um valor N: ");
		scanf("%f", &N);

		if (op != 5) {
			printf("\nDigite um valor M: ");
			scanf("%f", &M);
		}

		switch (op) {
			case 1:
				R = N + M;
				break;
			case 2:
				R = N - M;
				break;
			case 3:
				R = N * M;
				break;
			case 4:
				if (M == 0) {
					printf("\nImpossivel fazer divisao por zero\n\n");
					R = 0;
					continue;
				}

				R = N / M;
				break;
			case 5:
				for(int i = 0; i <=  N; i++) {
					R += i;
				}
				break;
		}

		printf("\nResultado: %.3f\n\n", R);
		R = 0;
		
	} while (op != 6);
}
