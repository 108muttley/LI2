#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int multiplicacao () {
		int x , y , resposta;
		x = rand() % 10;
		y = rand() % 10;

		printf("Quanto e %d vezes %d?",x, y);
		scanf ("%d" , &resposta);
		if (resposta == x*y) {
			printf ("Muito bem!!");
			multiplicacao();
		}
		else {
			printf("Nao! Tenta outra vez.");
			multiplicacao2(x,y);
		}
	}

int multiplicacao2 (int x, int y) {
		int resposta;

		printf("Quanto e %d vezes %d?",x, y);
		scanf ("%d" , &resposta);
		if (resposta == x*y) {
			printf ("Muito bem!!");
			multiplicacao();
		}
		else {
			printf("Nao! Tenta outra vez.");
			multiplicacao2(x,y);
		}
	}

int main(){
	multiplicacao();
	return 0;
}
