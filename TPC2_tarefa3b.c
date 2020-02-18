#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int whatToPrint1( int x) {
    if (x == 0) {
        printf(" Boa, isso foi fantastico. \n");
        return 0;
    }
    if (x == 1) {
        printf("Acertaste! Boa. \n");
        return 0;
    }
    if (x == 2) {
        printf("Ótimo\n");
        return 0;
    }
    if (x == 3) {
        printf("Belo trabalho\n");
        return 0;
    }
    if (x == 4) {
        printf("Continue assim\n");
        return 0;
    }
}

int whatToPrint0(int x) {
    if (x == 0) {
        printf(" Erraste, tenta de novo. \n");
        return 0;
    }
    if (x == 1) {
        printf("Tenta outra vez! \n");
        return 0;
    }
    if (x == 2) {
        printf("Nao desistas!\n");
        return 0;
    }
    if (x == 3) {
        printf("Nao, mas tu consegues\n");
        return 0;
    }
    if (x == 4) {
        printf("Continua a tentar\n");
        return 0;
    }
}

    void multiplicacao(int t , int x , int y){
        int resposta, z;
        z = rand() % 5;
        if (t) {
            x = rand() % 10;
            y = rand() % 10;
        }
        printf("Quanto e %d vezes %d?\n", x ,y);
        scanf ("%d", &resposta);

        if (resposta == x*y ){
            whatToPrint1(z);
            multiplicacao(1 , x ,y);
        }
        else {
            whatToPrint0(z);
            multiplicacao(0 , x ,y);
        }

    }


int main() {
    multiplicacao(1 , 0, 0);
    return 0;
}
