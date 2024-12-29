#include <stdio.h>
#include <locale.h>

int calcularArea(int altura, int base){
    int area = (base * altura)/2;
    return area;
}
void imprimirTriangulo(int altura) {
    for(int linha = 0; linha <= altura; linha++) {
        for(int i = 0; i < linha; i++) {
            printf("#");
        }
        printf("\n");
    }
}
int main(){
    int altura, base, area;
    printf("Digite a altura do triângulo: ", setlocale(LC_ALL, ""));
    scanf("%d", &altura);
    printf("Digite a base do triângulo: ", setlocale(LC_ALL, ""));
    scanf("%d", &base);
    area = calcularArea(altura, base);
    imprimirTriangulo(altura);
    printf("\nA área do triângulo: %d \n", area, setlocale(LC_ALL, ""));
    return 0;
}
