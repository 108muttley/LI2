#include <stdio.h>
#include "funcion.h"
int main() {
    int a , *arr , e , t , ind , i , shifter , valor;
    printf("Introduza  a dimensao do array \n");
    scanf("%d" , &a);
    arr = malloc(a* sizeof(int));
    printf("Introduza os %d elementos do array\n" , a);
    for (int i = 0; i<a ; i++){
       scanf("%d" , &e );
       arr[i] = e;
    }

    printf("Insira o numero da tarefa que quer realizar\n");
    scanf("%d" , &t);

    if (t==1){
        printf("Introduza o indice.\n");
        scanf("%d" , &ind);
        soma_elemento(arr, a , ind);
        printf("O array e \n");
        for ( i= 0 ; i<a ; i++){
            printf("%d " , arr[i]);
        }
    } else if (t==2){
        printf("Introduza o shifter.\n");
        scanf("%d" , &shifter);
        roda_esq(arr , a , shifter);
        printf("O array final e\n");
        for(i =0 ; i<a ;i++){
            printf("%d ", arr[i]);
        }
    } else if (t==3){
        printf("Introduza o valor.\n");
        scanf("%d" , &valor);
        remove_menores(arr , a , valor);
        printf("O array final e\n");
        for(i =0 ; i<a ;i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
