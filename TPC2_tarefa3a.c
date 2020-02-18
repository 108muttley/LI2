#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void multiplicacao(int t , int x , int y){
    int resposta;
    if (t) {
        x = rand() % 10;
        y = rand() % 10;
    }
    printf("Quanto e %d vezes %d?\n", x ,y);
    scanf ("%d", &resposta);

    if (resposta == x*y ){
        printf ("Muito bem!!\n");
        multiplicacao(1 , x ,y);
    }
    else {
        printf("Nao! Tenta outra vez.\n");
        multiplicacao(0 , x ,y);
    }

}

int main(){
    multiplicacao(1 , 0 ,0);
    return 0;
}
