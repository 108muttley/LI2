#include "desenhos.h"
#include "stdio.h"



void imprime_triangulo(int num_linhas) {
    int j, k = 2 * num_linhas - 1, e;
    int aux;
    for (int i = 0; i < num_linhas; i++) {
        aux = 'A';
        for (j = 0; j < k; j++) {
            putchar(' ');
        }
        k = k - 2;
        for (e = 0; e < i + 1; e++, aux++) printf("%c ", aux);
        aux -= 2;
        for (aux; aux >= 'A'; aux--) printf("%c ", aux);
        putchar('\n');
    }
}

    void imprime_losango(int num_linhas){
        int j, k = 2 * num_linhas - 1, e , i;
        int aux;
        for ( i = 0; i < num_linhas; i++) {
            aux = 'A';
            for (j = 0; j < k; j++) {
                putchar(' ');
            }
            k = k - 2;
            for (e = 0; e < i + 1; e++, aux++) printf("%c ", aux);
            aux -= 2;
            for (aux; aux >= 'A'; aux--) printf("%c ", aux);
            putchar('\n');
        }
            k=3;
            for(i=num_linhas-2 ; i>=0 ; i--){
                aux = 'A';
                for(j=0 ; j<k ; j++){
                    putchar(' ');
                }
                k=k+2;
                for(e=0 ; e<i+1 ; e++,aux++ ) printf("%c ", aux);
                aux -= 2;
                for (aux; aux >= 'A'; aux--) printf("%c ", aux);
                putchar('\n');

            }
    }

    void imprime_hexagono(int num){
    int i , j , k=num , z=num , e;

    for(i=0; i<num ; i++){
        if (i==0 ) {
            for(j= 0 ; j<k ; j++) {
                putchar(' ');
            }
            for( j= 0 ; j<k ; j++) putchar('#');
            putchar('\n');
        }
        else {
            for (j=i ; j<k ; j++) putchar(' ');
            putchar('#');
            for(j=0 ; j<z ; j++ ) putchar(' ');
            z+=2;
            putchar('#');
            putchar('\n');
        }
    }
    z=z-4;
    k=num;
    e=2;
    for(i=0; i<num-1 ; i++){
        if(i==num-2){
            for(j=0 ; j<k ; j++) putchar(' ');
            for( j= 0 ; j<k ; j++) putchar('#');
           putchar('\n');
        }
        else {
            for (j=e ; j>0 ; j--) putchar(' ');
            putchar('#');
            for(j=0 ; j<z ; j++ ) putchar(' ');
            z-=2;
            putchar('#');
            putchar('\n');
        }
        e=e+1;
    }

}
