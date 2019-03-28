#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa (char letras[26]);
int main () {
char letras[26];
char password[9];
int i;
srand(time(NULL));

inicializa (letras);

for (i=0; i<8; i++){
password[i]= letras [rand()%26];	
}

password[8]= '\0';
printf ("%s\n", password);
return 0;
}


void inicializa (char letras[26]) {
int i;
for (i=0; i<26; i++){
	letras[i]= 'a'+ i;
}
}
