#include <stdio.h>
#include <stdlib.h>

int main(){
	float a , b ,c , area ;
	float areaTriangulo( float a , float b ,float c){
		int area = 0 , p= 0;

		p = (a+b+c)/2;
		area = sqrt(p * (p-a) * (p-b) * (p-c));
		return area;
	}

	printf ("Introduza um dos lados do triângulo \n");
	scanf ("%f" , a);
	printf ("Introduza outro lado do triângulo \n");
	scanf ("%f" , b);
	printf ("Introduza o ultimo lado do triângulo \n");
	scanf ("%f" , c);
	area = areaTriangulo(a,b,c); 
	if (abs(b-c) < a < b+c) {
		if (a==b && b==c) printf ("O triângulo introduzido é um triângulo equilátero e a area dele é %f" , area); 
		else if (a==b && a!=c) printf ("O triângulo introduzido é um triângulo isósceles e a area dele é %f" , area);
		else if (b==c && a!=b) printf ("O triângulo introduzido é um triângulo isósceles e a area dele é %f" , area);
		else if (a==c && a!=b) printf ("O triângulo introduzido é um triângulo isósceles e a area dele é %f" , area);
		else if (b!=a && c!=a &&  b!=c) printf ("O triângulo introduzido é um triângulo escaleno e a area dele é %f" , area);
	}
	printf ("Os valores de lados introduzidos não estão corretos");
	return 0;
}
