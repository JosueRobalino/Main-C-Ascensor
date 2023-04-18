#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese la operación (+, -, /): ");
    scanf(" %c", &op);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    printf("Menú de operaciones matemáticas\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);
    
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("El resultado de la multiplicación es: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("No se puede dividir por cero\n");
            } else {
                resultado = num1 / num2;
                printf("El resultado de la división es: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opción no válida\n");
            break;
    