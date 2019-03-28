#include <stdio.h>

void inicializa (int mat[9][9]);
int main () {
int mat[9][9];
int i, j;

inicializa (mat);

for (i=0; i<9; i++){
for (j=0; j<9; j++){
printf ("%d ", mat[i][j]);
}
printf ("\n");
}
return 0;
}

void inicializa (int mat[9][9]) {
int i, j;
 mat[i][j];
for (i=0; i<9; i++){
for (j=0; j<9; j++){
	if (i==j){
	mat[i][j] = 1;
	}

	else {
	mat[i][j]= 0;
}

}
}

}
