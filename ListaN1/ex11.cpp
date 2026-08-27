PROFESSORAAAA, eu tive que pesquisar sobre a biblioteca de matematica (#include <math.h>) pq eu nao sabia outro jeito
de fazer raiz quadrada nem cubica, e vi q nessa biblioteca tem as funçoes certinhas pra fazer. Não sei se a senhora já passou em sala,
mas só avisando pq eu tive q pesquisar sobre isso pra conseguir fazer a lista!! Usei mais vezes nos outros exercicios da frente


A) #include <stdio.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = (n1*n1);
	
	printf("O numero ao quadrado e:%.2f\n", valor);	
	
	return 0;
}
--------------------------
B) #include <stdio.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = (n1*n1*n1);
	
	printf("O numero ao cubo e:%.2f\n", valor);	
	
	return 0;
}
------------------------
C) #include <stdio.h>
#include <math.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = sqrt(n1);
	
	printf("A raiz do numero digitado e:%.2f\n", valor);	
	
	return 0;
}
----------------------
D) #include <stdio.h>
#include <math.h>

int main() { 
	float n1, valor;
	
	printf("Digite um numero:\n");
	scanf("%f",  &n1);
	
	valor = cbrt(n1);
	
	printf("A raiz cubica do numero digitado e:%.2f\n", valor);	
	
	return 0;
}
