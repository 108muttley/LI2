#include "funcion.h"

void soma_elemento(int *arr, int dim, int idx){
    int i = 0 , z =arr[idx];
    for (i ; i<dim ; i++){
        arr[i]+=z;
    }
}

void roda_esq(int *arr, int dim, int shifter){
    int z  , j;
    for (j=0 ; j<shifter ; j++) {
        z=arr[0];
        for (int i = 0; i < dim - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[dim - 1] = z;
    }
}

int remove_menores(int *arr, int dim, int valor){
    int i = 0 , j=dim-1 ,s=0 ,r=0 , z, *new = malloc(dim * sizeof(int)) , *smaller = malloc(dim * sizeof(int));
    for(z=0 ; z<dim ; z++){
        if(arr[z] >= valor){
            new[s] = arr[z];
            s++;
        }
        else {
            smaller[r]=arr[z];
            r++;
        }
    }
    for(i ; i<s ; i++){
      arr[i] = new[i];
    }
    z=0;
    for(i ; i<s+r && z<r ; i++, z++){
        arr[i]= smaller[z];
    }
    return 0;
}
