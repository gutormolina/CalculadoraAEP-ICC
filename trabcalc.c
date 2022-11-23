#include <stdio.h>

int main(){
	
	float N, M, R;
	int op;
	
	do{
		do{
			printf("Escolha uma operacao\n\n1.Soma\n2.Subtracao\n3.Multiplicao\n4.Divisao\n5.Somatorio\n6.Sair\n");
			scanf("%d", &op);
			if(op < 1 || op > 6)
				printf("O numero inserido precisa ser de 1 a 6.\n");
		}while(op < 1 || op > 6);
		if(op <= 4){
			printf("\nDigite um valor N: ");
			scanf("%f", &N);
			printf("Digite um valor M: ");
			scanf("%f", &M);
		}
		else if(op == 5){
			printf("\nDigite um valor N: ");
			scanf("%f", &N);
		}
		switch(op){
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
				R = N / M;
				break;
			case 5:
				for(int i=0; i<= N; i++)
					R = R + i;
				break;
		}			
		if(op <= 5 )
			printf("\nResultado: %.3f\n\n", R);
		
		R = 0;
		
	}while(op != 6);
}
