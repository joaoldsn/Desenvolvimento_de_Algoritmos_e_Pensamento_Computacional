#include <stdio.h>

int main() {
    int opcao;
    int continuar;
    float temperatura, resultado;

    do {
        printf("\n--- Escolha uma opção de conversão ---\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Celsius para Kelvin\n");
        printf("4 - Fahrenheit para Kelvin\n");
        printf("5 - Kelvin para Celsius\n");
        printf("6 - Kelvin para Fahrenheit\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 6) {
            printf("Opção inválida! Escolha uma opção de 1 a 6.\n");
        } 
        else {
            printf("Digite a Temperatura: ");
            scanf("%f", &temperatura);

            switch (opcao) {

                case 1:
                    resultado = (temperatura * 9 / 5) + 32;
                    printf("%.2f °C = %.2f °F\n", temperatura, resultado);
                    break;

                case 2:
                    resultado = (temperatura - 32) * 5 / 9;
                    printf("%.2f °F = %.2f °C\n", temperatura, resultado);
                    break;

                case 3:
                    resultado = temperatura + 273.15;
                    printf("%.2f °C = %.2f K\n", temperatura, resultado);
                    break;

                case 4:
                    resultado = (temperatura - 32) * 5 / 9 + 273.15;
                    printf("%.2f °F = %.2f K\n", temperatura, resultado);
                    break;

                case 5:
                    resultado = temperatura - 273.15;
                    printf("%.2f K = %.2f °C\n", temperatura, resultado);
                    break;

                case 6:
                    resultado = (temperatura - 273.15) * 9 / 5 + 32;
                    printf("%.2f K = %.2f °F\n", temperatura, resultado);
                    break;
            }
        }

        printf("\nDeseja fazer outra conversão?\n");
        printf("1 - Sim\n");
        printf("2 - Não\n");
        printf("Escolha: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nPrograma encerrado. Obrigado!\n");

    return 0;
}
