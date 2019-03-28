#include <stdio.h>
#include <math.h>
double distancia (float punto1[2], float punto2[2]);


int main(){
	float distancia2;
	float punto1[2], punto2[2];
	printf("Introduzca la coordenada x del primer punto: \n");
	scanf("%f",&punto1[0]);
	printf("Introduzca la coordenada y del primer punto: \n");
	scanf("%f",&punto1[1]);
	printf("Introduzca la coordenada x del segundo punto: \n");
	scanf("%f",&punto2[0]);
	printf("Introduzca la coordenada y del segundo punto: \n");
	scanf("%f",&punto2[1]);
	distancia2=distancia(punto1,punto2);
	printf("La distancia entre estos dos puntos es: %f\n",distancia2);
}

double distancia (float punto1[2], float punto2[2]){
	double distancia;
	distancia = sqrt(pow((punto2[0]-punto1[0]),2)+pow((punto2[1]-punto1[1]),2));
	return distancia;
}
