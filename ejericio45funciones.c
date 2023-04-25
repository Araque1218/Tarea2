#include <stdio.h>

int primer_digito(int num) {
while (num >= 10) {
num /= 10;
}
return num;
}

int main() {
int num, digito;

printf("Ingrese un número entero: ");
scanf("%d", &num);

digito = primer_digito(num);

printf("El primer digito del número es: %d", digito);

return 0;
}

