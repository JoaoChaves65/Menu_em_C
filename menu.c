#include <stdio.h>

void calcularAreaTriangulo(){
    int base, altura, area;
    printf("(OP 1) Calcular área do triângulo \n");
    printf("Informe a base do triângulo: ");
    scanf("%d", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%d", &altura);
    area = base * altura;
    printf("Área = %d \n\n", area);
};

void calcularAreaRetangulo(int base, int altura){
    int areaRet = base * altura;
    printf("(OP 2) Calcular área do retângulo \n");
    printf("Base = %d | ", base);
    printf("Altura = %d \n", altura);
    printf("Área = %d \n\n", areaRet);
};

void identificarRetangulo(){
    int base, altura;
    printf("(OP 3) Identificar tipo de retângulo \n");
    printf("Informe a base do retângulo: ");
    scanf("%d", &base);
    printf("Informe a altura do retângulo: ");
    scanf("%d", &altura);
    
    if(base == altura){
        printf("\nLados iguais, é um quadrado");
    } else {
        printf("\nLados diferentes, é um retângulo");
    }
    
    printf("\n\n");
};

void imprimirVetor(int *vetNum, int tam) {
    printf("(OP 4) Imprimir os números do vetor \n");
    for(int i = 0;  i < tam; i++){
        printf("%d \n", vetNum[i]);
    };
    printf("\n");
};

void main() {
    int op = -1;
    
    while(op != 0){
        printf("--- Menu Principal ---\n\n");
        printf("1. Calcular área do triângulo\n");
        printf("2. Calcular área do retângulo\n");
        printf("3. Identificar tipo de retângulo\n");
        printf("4. Imprimir números do vetor\n");
        printf("0. Sair\n\n");
        printf("Informe a opção desejada: ");
        scanf("%d", &op);
        
        if(op == 1) {
            calcularAreaTriangulo();
        } else if(op == 2) {
            calcularAreaRetangulo(10, 20);
        } else if(op == 3) {
            identificarRetangulo();
        } else if(op == 4) {
            int vetNum[7] = {12, 77, 23, 89, 102, 7, 1};
            imprimirVetor(vetNum, 7);
        } else if(op == 0) {
            printf("Programa finalizado. Até mais!");
        }
    };
    
};