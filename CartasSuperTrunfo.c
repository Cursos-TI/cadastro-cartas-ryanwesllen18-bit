#include <stdio.h> // Incluindo a biblioteca padrão de entrada e saída, necessária pro printf e scanf funcionarem.

int main() // A função principal onde o código começa a ser lido pelo computador.
{
    // 1. criação e armazenamento das variáveis (CARTA 1 e CARTA 2)
    // Aqui reservamos espaço na memória para guardar as informações das cidades.
    char estado1, estado2; // Variável char para armazenar a letra do estado (um caractere).
    char codigo1[4], codigo2[4]; // Vetor char para o código, como "A01", precisa de 4 espaços por causa do '\0'.
    char cidade1[50], cidade2[50]; // Vetor para o nome da cidade, com espaço para até 50 letras.

    int populacao1, populacao2; // Inteiro para números inteiros, como a contagem de pessoas.
    float area1, area2; // Float para números com vírgula, para medir a área em km².
    float pib1, pib2; // Float para o PIB, pois valores financeiros costumam ter decimais.
    int pontosturisticos1, pontosturisticos2; // Inteiro para contar quantos pontos turísticos a cidade tem.

    // Variáveis responsáveis pelos cálculos do programa
    float densidade1, densidade2; // Variável float para guardar o resultado da densidade.
    float pibPerCapita1, pibPerCapita2; // Float para guardar o cálculo do PIB por habitante.

    // ================= CADASTRANDO A CARTA 1 =================
    // Desafio Super trunfo - Cadastro das cartas
    // A função principal int main é o inicial do programa e necessária para a execução do código.
    // A entrada de dados é feita para efetuar as perguntas necessárias para o cadastro das cartas.
    printf("--- CADASTRO DA CARTA 1 ---\n"); // Exibe o título no console para o usuário saber o que fazer.
    printf("Digite a letra do estado (A-H): "); // Pergunta a letra do estado.
    scanf(" %c", &estado1); // Lê o caractere digitado e guarda na variável estado1.

    printf("Digite o codigo da carta (ex A01): "); // Pergunta o código da carta.
    scanf(" %s", codigo1); // Lê a string (texto) do código e guarda no vetor codigo1.

    printf("Digite o nome da cidade: "); // Pergunta o nome da cidade.
    scanf(" %s", cidade1); // Lê o nome da cidade e guarda no vetor cidade1.

    // declaração da variaveis: população, área, pib, número de pontos turísticos
    // população utiliza int pois é um número inteiro, se refere a pessoas
    printf("Digite a populacao da cidade: "); // Pergunta a população.
    scanf(" %d", &populacao1); // Lê o número inteiro digitado.

    // área utiliza float pois locais podem ter medidas com casas decimais
    printf("Digite a area da cidade: "); // Pergunta a área.
    scanf(" %f", &area1); // Lê o número float digitado.

    // pib utiliza float pois o valor pode ter casa decimais
    printf("Digite o Pib da cidade: "); // Pergunta o PIB.
    scanf(" %f", &pib1); // Lê o PIB como float.

    // número de pontos turísticos utiliza int pois é um número inteiro
    printf("Digite os pontos turisticos da cidade: "); // Pergunta a quantidade de pontos.
    scanf(" %d", &pontosturisticos1); // Lê o inteiro da quantidade.

    // ================= CADASTRANDO A CARTA 2 =================
    // (O mesmo processo acima se repete para a segunda carta).
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o Pib da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite os pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    // 3. calculando a densidade e o pib percapita das duas cidades
    // Densidade = População / Área. O (float) é um cast para garantir precisão decimal.
    densidade1 = (float)populacao1 / area1;
    // PIB per capita = PIB / População.
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // 4. print para exibição dos dados das duas cartas
    // entrada e saída de dados são necessárias para o cadastro das cartas, sempre utilizando informações coletadas.
    printf("\n=== DADOS DA CARTA 1 (%s) ===\n", cidade1); // Mostra o nome da cidade no título.
    printf("Populacao: %d | Area: %.2f km² | Pib: %.2f\n", populacao1, area1, pib1); // Exibe os dados formatados com 2 casas decimais.

    printf("\n=== DADOS DA CARTA 2 (%s) ===\n", cidade2); // Mostra dados da segunda carta.
    printf("Populacao: %d | Area: %.2f km² | Pib: %.2f\n", populacao2, area2, pib2); // Exibe dados formatados.

    // ================= LÓGICA DE COMPARAÇÃO (IF / ELSE) =================
    printf("\n=== COMPARAÇÃO DE ATRIBUTO: POPULAÇÃO ===\n"); // Título da comparação.

    if (populacao1 > populacao2) // Verifica se a população da carta 1 é maior.
    {
        printf("Resultado: A cidade %s (Carta 1) VENCEU!\n", cidade1); // Se sim, avisa que a carta 1 venceu.
    }
    else if (populacao2 > populacao1) // Se não, verifica se a carta 2 é maior.
    {
        printf("Resultado: A cidade %s (Carta 2) VENCEU!\n", cidade2); // Se sim, avisa que a carta 2 venceu.
    }
    else // Se não for maior nem menor, só sobra a opção de serem iguais.
    {
        printf("Resultado: Empate! Ambas possuem a mesma populacao.\n"); // Avisa que deu empate.
    }

    return 0; // Finaliza o programa retornando 0 para o sistema operacional.
}