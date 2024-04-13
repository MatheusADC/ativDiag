#include <stdio.h>
#include <locale.h>

int calcularArea(int altura){
    int base = altura + 1;
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
    int altura, area;
    printf("Digite a altura do tri�ngulo: ", setlocale(LC_ALL, ""));
    scanf("%d", &altura);
    area = calcularArea(altura);
    imprimirTriangulo(altura);
    printf("\nA altura do tri�ngulo �: %d \n", area, setlocale(LC_ALL, ""));
    return 0;
}
