#include <stdio.h>          //biblioteca principal para colocar o printf e o scanf
#include <math.h>           //biblioteca das operações matematicas
#include <stdlib.h>         //biblioteca de controle para limpar a tela, etc...
#define M_PI 3.14159265358979323846
/*a calculadora vai seguir a mesma base do flowgorithm usando do, switch e cases */

int main() {
    int opcao;
    int num3, num4;
    char continuar;
    double num1, num2, resultado;
    double maior, menor, meio;

    do { /*Função do é a de prioridade "Faça isso primeiro, essa é a prioridade".*/
        // Menu de opções
        printf("=========================================================================\n");
        printf("| OPCOES DISPONIVEIS:\n");
        printf("-------------------------------------------------------------------------\n");
        printf("| 1- Adicao (+)        | 2- Subtracao (-)     | 3- Multiplicacao (*)   |\n");
        printf("| 4- Divisao (/)       | 5- Potencia (^)      | 6- Raiz (sqrt)         |\n");
        printf("| 7- Porcentagem (%%)  | 8- Seno (sin)        | 9- Cosseno (cos)       |\n");
        printf("| 10- Tangente (tan)   | 11- Pi (PI)          | 12- Fatorial (!)       |\n");
        printf("| 13- Logaritmo (log)  | 14- MMC (lcm)        | 15- MDC (gcd)          |\n");
        printf("| 16- Moda (Mo)        | 17- Media (x)        | 18- Mediana (Me)       |\n");
        printf("| 19- Graus -> rad     | 20- Rad -> graus     | 0- Sair                |\n");
        printf("=========================================================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {  /*O switch ele é como se fosse um interrupitor que muda as opções(a variavel que está dentro do parenteses) */
                        /*E os "cases" são as opções, então seria tipo: "caso 1, isso acontece. Caso 2 tal coisa acontece...".*/
            case 1: //Adição
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 + num2;

                printf("Resultado: %.2f + %.2f = %.2f\n",
                       num1, num2, resultado);
                break;

            case 2: //Subtração
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 - num2;

                printf("Resultado: %.2f - %.2f = %.2f\n",
                       num1, num2, resultado);
                break;

            case 3: //Multiplicação
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 * num2;

                printf("Resultado: %.2f * %.2f = %.2f\n",
                       num1, num2, resultado);
                break;

            case 4:
                printf("Digite o numerador (dividendo): ");
                scanf("%lf", &num1);

                printf("Digite o denominador (divisor): ");
                scanf("%lf", &num2);

                // Mensagem de erro para divisao por zero
                if (num2 != 0) {
                    resultado = num1 / num2;

                    printf("Resultado: %.2f / %.2f = %.2f\n",
                           num1, num2, resultado);
                } else {
                    printf("Erro: Divisao por zero nao e permitida!\n");
                }

                break;

            case 5:
                printf("Digite o primeiro número (Base): \n");
                scanf("%d", &num3);
                printf("Digite o segundo número (Expoente): \n");
                scanf("%d", &num4);
                
                resultado = pow(num3, num4);
                printf("Resultado: %d ^ %d = %.1f\n", num3, num4, resultado);
                break;

            case 6:
                printf("Digite o número: \n");
                scanf("%d", &num3);                
                
                resultado = sqrt(num3);
                printf("Resultado: √%d = %.2f\n", num3, resultado);
                break;
                
            case 7:
                printf("Digite o valor: \n");
                scanf("%d", &num3);
                printf("Digite o percentual (%): \n");
                scanf("%d", &num4);
                resultado = (num3 * num4) / 100;
                printf("Resultado: %.d de %.d = %.f\n", num4, num3, resultado);
                break;

            case 8: // Seno
                printf("Digite o angulo em graus: \n");
                scanf("%lf", &num1);

                // Converte graus para radianos
                resultado = sin(num1 * M_PI / 180.0);

                printf("Seno de %.2f graus = %.2f\n",
                       num1, resultado);
                break;

            case 9: // Cosseno
                printf("Digite o angulo em graus: \n");
                scanf("%lf", &num1);

                // Converte graus para radianos
                resultado = cos(num1 * M_PI / 180.0);

                printf("Cosseno de %.2f graus = %.2f\n",
                       num1, resultado);
                break;

            case 10: // Tangente
                printf("Digite o angulo em graus: \n");
                scanf("%lf", &num1);

                // Converte graus para radianos
                resultado = tan(num1 * M_PI / 180.0);

                printf("Tangente de %.2f graus = %.2f\n",
                       num1, resultado);
                break;

            case 11: // Pi
                resultado = M_PI;

                printf("Valor de Pi = %.10f\n", resultado);
                break;

                case 12: // Fatorial
                printf("Digite um numero inteiro: \n");
                scanf("%d", &num3);

                if (num3 >= 0) {
                    resultado = 1;

                    for (int i = 1; i <= num3; i++) {
                        resultado = resultado * i;
                    }

                    printf("Resultado: %d! = %.0f\n",
                           num3, resultado);
                } else {
                    printf("Erro: Fatorial nao existe para numeros negativos!\n");
                }

                break;

            case 13: // Logaritmo
                printf("Digite um numero: \n");
                scanf("%lf", &num1);

                if (num1 > 0) {
                    resultado = log(num1);

                    printf("Logaritmo natural de %.2f = %.2f\n",
                           num1, resultado);
                } else {
                    printf("Erro: O logaritmo deve ser calculado com um numero maior que zero!\n");
                }

                break;

            case 14: // MMC
                printf("Digite o primeiro numero inteiro: \n");
                scanf("%d", &num3);

                printf("Digite o segundo numero inteiro: \n");
                scanf("%d", &num4);

                if (num3 != 0 && num4 != 0) {
                    int a = num3;
                    int b = num4;

                    while (b != 0) {
                        int resto = a % b;
                        a = b;
                        b = resto;
                    }

                    resultado = fabs((double)(num3 * num4)) / a;

                    printf("MMC de %d e %d = %.0f\n",
                           num3, num4, resultado);
                } else {
                    printf("Erro: O MMC nao pode ser calculado com zero!\n");
                }

                break;

            case 15: // MDC
                printf("Digite o primeiro numero inteiro: \n");
                scanf("%d", &num3);

                printf("Digite o segundo numero inteiro: \n");
                scanf("%d", &num4);

                if (num3 != 0 || num4 != 0) {
                    int a = abs(num3);
                    int b = abs(num4);

                    while (b != 0) {
                        int resto = a % b;
                        a = b;
                        b = resto;
                    }

                    printf("MDC de %d e %d = %d\n",
                           num3, num4, a);
                } else {
                    printf("Erro: O MDC de zero e zero nao existe!\n");
                }

                break;

            case 16: // Moda
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num3);

                printf("Digite o segundo numero: \n");
                scanf("%d", &num4);

                printf("Digite o terceiro numero: \n");
                scanf("%lf", &num1);

                if (num3 == num4 || num3 == (int)num1) {
                    resultado = num3;
                    printf("Moda = %.0f\n", resultado);
                } else if (num4 == (int)num1) {
                    resultado = num4;
                    printf("Moda = %.0f\n", resultado);
                } else {
                    printf("Nao existe moda.\n");
                }

                break;

            case 17: // Media
                printf("Digite o primeiro numero: \n");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: \n");
                scanf("%lf", &num2);

                printf("Digite o terceiro numero: \n");
                double num5;
                scanf("%lf", &num5);

                resultado = (num1 + num2 + num5) / 3;

                printf("Media = %.2f\n", resultado);
                break;

            case 18: // Mediana
                printf("Digite o primeiro numero: \n");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: \n");
                scanf("%lf", &num2);

                printf("Digite o terceiro numero: \n");
                double num6;
                scanf("%lf", &num6);

                // Organiza os numeros para encontrar o valor do meio
                if (num1 > num2) {
                    maior = num1;
                    num1 = num2;
                    num2 = maior;
                }

                if (num2 > num6) {
                    maior = num2;
                    num2 = num6;
                    num6 = maior;
                }

                if (num1 > num2) {
                    maior = num1;
                    num1 = num2;
                    num2 = maior;
                }

                resultado = num2;

                printf("Mediana = %.2f\n", resultado);
                break;

            case 19: // Graus para radianos
                printf("Digite o valor em graus: \n");
                scanf("%lf", &num1);

                resultado = num1 * M_PI / 180.0;

                printf("%.2f graus = %.4f radianos\n",
                       num1, resultado);
                break;

            case 20: // Radianos para graus
                printf("Digite o valor em radianos: \n");
                scanf("%lf", &num1);

                resultado = num1 * 180.0 / M_PI;

                printf("%.4f radianos = %.2f graus\n",
                       num1, resultado);
                break;
            
            case 0: //caso de encerramento do programa
                continuar = 'N';
                break;

            default:
                // Mensagem de erro caso o usuário não coloque uma opção valida
                printf("\nErro: Opcao invalida! Digite um numero de 0 a 20.\n");
                break;
        }

        if (opcao != 0) {
            printf("\nDeseja fazer um novo calculo? (Y/N): ");
            scanf(" %c", &continuar);
        }

    } while (continuar == 'Y' || continuar == 'y'); /*caso while padrão. Enquanto tal coisa for verdadeira, continue executando*/

    printf("\nEncerrando a calculadora... Ate logo!\n");

    return 0;
}
