#include <stdio.h>

int main() {
    float limite;
    float temperatura;
    float soma = 0;
    float media;
    float maior = 0;
    float menor = 0;
    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    // solicita e valida o limite de temperatura
    do {
        printf("Digite o limite de temperatura da maquina: ");
        scanf("%f", &limite);

        if (limite < -273.15) {
            printf("Valor invalido! A temperatura nao pode ser menor que -273.15 C.\n");
        }

    } while (limite < -273.15);

    printf("\nMonitoramento iniciado!\n");
    printf("Digite as temperaturas registradas pelo sensor.\n");

    // enquanto nao forem identificadas 3 temperaturas consecutivas acima do limite
    while (consecutivas < 3) {

        printf("Digite a temperatura: ");

        // valida se a entrada e realmente um numero
        if (scanf("%f", &temperatura) != 1) {
            printf("Entrada invalida! Digite uma temperatura numerica.\n");

            // limpa o buffer de entrada
            while (getchar() != '\n');

            continue;
        }

        // valida temperatura abaixo do zero absoluto
        if (temperatura < -273.15) {
            printf("Temperatura invalida! Digite um valor maior ou igual a -273.15 C.\n");
            continue;
        }

        // primeira temperatura define os valores inicial de maior e menor
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        // atualiza a soma e a quantidade de temperaturas
        soma += temperatura;
        quantidade++;

        // verifica se a temperatura ultrapassou o limite
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf("ALERTA: Temperatura acima do limite!\n");
            printf("Temperaturas consecutivas acima do limite: %d\n", consecutivas);
        } else {
            // zera a contagem quando uma temperatura nao ultrapassa o limite
            consecutivas = 0;
        }

        printf("\n");
    }

    // calcula a media das temperaturas registradas
    media = soma / quantidade;

    // relatorio final
    printf("\n========================================\n");
    printf("          RELATORIO FINAL\n");
    printf("========================================\n");
    printf("Limite de temperatura: %.2f C\n", limite);
    printf("Quantidade de leituras: %d\n", quantidade);
    printf("Temperatura media: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);
    printf("========================================\n");

    if (consecutivas == 3) {
        printf("STATUS: MONITORAMENTO ENCERRADO POR SEGURANCA!\n");
        printf("Foram identificadas 3 temperaturas consecutivas acima do limite.\n");
    }

    return 0;
}
