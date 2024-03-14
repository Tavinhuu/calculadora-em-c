#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float somat = 0.0, subtrac = 0.0, multiplicat = 1.0, dividirt = 1.0;
    int tamanho, i, escolhaCalculo;

    char logo[] =
        "\n\n\n"
        "          | |          | |         | |                     | |       | |            (_)      \n"
        "  ___ __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _    __| | ___   | |_ __ ___   ___ _ __  \n"
        " / __/ _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |  / _` |/ _ \\  | __/ _` \\ \\ / / | '_ \\ \n"
        "| (_| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| | | (_| | (_) | | || (_| |\\ V /| | | | |\n"
        " \\___\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|  \\__,_|\\___/   \\__\\__,_| \\_/ |_|_| |_|\n"
        "\n---------------------------------------------------------------------------------------------\n";

    printf("%s", logo);
    printf("* Escolha a opção desejada\n\n");
    printf("1 - Para realizar uma soma\n");
    printf("2 - Para realizar uma subtração\n");
    printf("3 - Para realizar uma multiplicação\n");
    printf("4 - Para realizar uma divisão\n");
    printf("0 - Para finalizar o uso da calculadora\n");
    scanf("%d", &escolhaCalculo);

    if (escolhaCalculo == 1) {
        printf("%s", logo);
        printf("* Digite quantos valores estão presentes no seu cálculo\n");
        scanf("%d", &tamanho);

        float valores_soma[tamanho];

        for (i = 0; i < tamanho; i++) {
            printf("%s", logo);
            printf("* Digite o %dº valor do cálculo\n", i + 1);
            scanf("%f", &valores_soma[i]);
            somat += valores_soma[i];
        }

        printf("%s", logo);
        printf("O resultado da soma é: %.1f\n", somat);
    }
    else if (escolhaCalculo == 2) {
        printf("%s", logo);
        printf("* Digite quantos valores estão presentes no seu cálculo\n");
        scanf("%d", &tamanho);

        float valores_subtracao[tamanho];

        for (i = 0; i < tamanho; i++) {
            printf("%s", logo);
            printf("* Digite o %dº valor do cálculo\n", i + 1);
            scanf("%f", &valores_subtracao[i]);
            if (i == 0) {
                subtrac = valores_subtracao[i];
            } else {
                subtrac -= valores_subtracao[i];
            }
        }

        printf("%s", logo);
        printf("O resultado da subtração é: %.1f\n", subtrac);
    }
    else if (escolhaCalculo == 3) {
        printf("%s", logo);
        printf("* Digite quantos valores estão presentes no seu cálculo\n");
        scanf("%d", &tamanho);

        float valores_multiplicacao[tamanho];

        for (i = 0; i < tamanho; i++) {
            printf("%s", logo);
            printf("* Digite o %dº valor do cálculo\n", i + 1);
            scanf("%f", &valores_multiplicacao[i]);
            multiplicat *= valores_multiplicacao[i];
        }

        printf("%s", logo);
        printf("O resultado da multiplicação é: %.1f\n", multiplicat);
    }
    else if (escolhaCalculo == 4) {
        printf("%s", logo);
        printf("* Digite quantos valores estão presentes no seu cálculo\n");
        scanf("%d", &tamanho);

        float valores_divisao[tamanho];

        for (i = 0; i < tamanho; i++) {
            printf("%s", logo);
            printf("* Digite o %dº valor do cálculo\n", i + 1);
            scanf("%f", &valores_divisao[i]);
            if (i == 0) {
                dividirt = valores_divisao[i];
            } else {
                if (valores_divisao[i] != 0) {
                    dividirt /= valores_divisao[i];
                } else {
                    printf("Erro: Divisão por zero\n");
                    return 1;
                }
            }
        }

        printf("%s", logo);
        printf("O resultado da divisão é: %.1f\n", dividirt);
    }else if (escolhaCalculo == 0){
        printf("%s", logo);
        printf("* Obrigado por utilizar minha calculadora :D");
    }else {
        printf("%s", logo);
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
    }

    return 0;
}
