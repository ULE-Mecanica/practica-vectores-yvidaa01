#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz (int mat[5][5]);
int main () {
int mat[5][5];
int i, j;

srand(time(NULL));

matriz (mat);

for (i=0; i<5; i++){
for (j=0; j<5; j++){
printf ("%d ", mat[i][j]);
}
printf ("\n");
}
return 0;
}

int matriz (int mat[5][5]){
int i, j;
mat [i][j];
	for (i=0; i<5; i++){
	for (j=0; j<5; j++){
			mat[i][j] = (rand()%13)+3;
			
}
}
}
