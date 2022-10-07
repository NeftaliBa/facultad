#include <stdio.h>

int insertion_sort(int a[], int n){
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (key < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
	}
}

void bubble_sort(int a[], int n){
	for (int i=1; i < n; i++){
		for (int j=0; j<n-1; j++){
		   if (a[j] > a[j+1]){
			   int temp = a[j];
			   a[j] = a[j+1];
			   a[j+1] = temp;
					
		   }
		}
	}
}


void pantalla(int a[], int n){
	for (int j = 0; j < n - 1; j++){
		printf("%d, ", a[j]);
	}
	printf("%d\n", a[n - 1]);
}

int main(){
	int cdn, x, a[x];
	printf("ingrese la cantidad de numeros a ingresar: ");
	scanf("%d", &cdn);
	for (x = 0; x < cdn; x++){
		printf("ingrese numero %d: ", x + 1);
		scanf("%d", &a[x]);
	}
	printf("Numero ingresado: ");
	pantalla(a, x);
	bubble_sort(a,x);
	printf("numero ordenado con bubble: ");
	pantalla(a,x);
	insertion_sort(a, x);
	printf("numero ordenado con insertion: ");
	pantalla(a, x);
}
