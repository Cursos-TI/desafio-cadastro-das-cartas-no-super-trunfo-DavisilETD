#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Começando aqui o meu codigo, eu Davi Silva de Jesus, para construir o jogo de Trunfo:

    char Estado1[20];
    char Codigo1[5];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float Pib1;
    int Turisticos1;
    //Variáveis que gardam as informações da carta 1, por isso o numero 1 no final delas

    printf("Digite o Estado da cidade: ");
    scanf("%s", Estado1);

    printf("Digite o código da carta: ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade1);

    printf("Digite quantas pessoas há na cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a área em Km^2 da cidade: ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turísticos que a cidade tem: ");
    scanf("%d", &Turisticos1);

    /*Cada printf e scanf acima exibe uma pergunta da cidade 1 e captura sua resposta e adiciona as variaveis
    final 1 para ser suas configurações*/

    printf("O Estado da sua cidade é %s, o codigo de sua carta é %s, o nome da cidade é %s, a população da cidade é %d,",
    Estado1, Codigo1, Cidade1, Populacao1);
    printf("a área da cidade é %f, o PIB da cidade é %f e a cidade tem %d pontos turísticos.", Area1, Pib1, Turisticos1);




    return 0;
}
