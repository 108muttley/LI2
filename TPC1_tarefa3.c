#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float   a =0, b=0 ,c=0 , area=0 , p=0;
    printf ("Introduza um dos lados do triangulo \n");
    scanf ("%f" , &a);
    printf ("Introduza outro lado do triangulo \n");
    scanf ("%f" , &b);
    printf ("Introduza o ultimo lado do triangulo \n");
    scanf ("%f" , &c);

    p = (a+b+c)/2;
    area = sqrt(p * (p-a) * (p-b) * (p-c));
    if (fabsf(b-c) < a && a < b+c) {
        if (a==b && b==c) printf ("O triangulo introduzido e um triangulo equilatero e a area dele e %f" , area);
        else if (a==b && a!=c) printf ("O triangulo introduzido e um triangulo isosceles e a area dele e %f" , area);
        else if (b==c && a!=b) printf ("O triangulo introduzido e um triangulo isosceles e a area dele e %f" , area);
        else if (a==c && a!=b) printf ("O triangulo introduzido e um triangulo isosceles e a area dele e %f" , area);
        else if (b!=a && c!=a &&  b!=c) printf ("O triangulo introduzido e um triangulo escaleno e a area dele e %f" , area);
    }
    else printf ("Os valores de lados introduzidos nao estao corretos");
    return 0;
}
