#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
                /* Variáveis */
            
            char letra;
            char codigo [3];
            char cidade [50];
            int populacao;
            float area;
            float PIB;
            int turismo;

/* Professor, precisei incluir uma solução para limpeza do \n, tendo em vista que, ao preencher o dado da variavel "populacao", o software não estava permitindo preencher os dados das variáveis "area" e "PIB". */

                /* Solicitações de Dados ao Usuário - Carta 01: */

                printf("Cadastre uma letra, de A a H, para localização do Estado no jogo: \n");
                    scanf(" %c", &letra);

                printf("Crie um código alfanumérico para identificar sua carta (Exemplo: A03, A07): \n");
                    scanf("%s", codigo);

                printf("Digite o nome da cidade: \n");
                    scanf("%s", cidade);

                printf("Insira a População da cidade: \n");
                    scanf("%d", &populacao);

                        while (getchar() != '\n');

                printf("Insira a área da cidade, em km²: \n");
                    scanf(" %f", &area);
                
                        while (getchar() != '\n');
                        
                printf("Insira o PIB da cidade, correspondente ao último ano:\n");
                    scanf(" %f", &PIB);
                    
                printf("Insira a quantidade de pontos turísticos contidos na cidade:\n");
                    scanf("%d", &turismo);
                
                /* Devolutiva do Sistema - Carta 01: */

                printf("\n --- Carta 01 ---\n");
                printf("Estado: %c\n", letra);
                printf("Código: %s\n", codigo);
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("Área: %.2f km²\n", area);
                printf("PIB: R$ %.2f\n", PIB);
                printf("Pontos Turísticos: %d\n", turismo);
                
                /* Solicitações de Dados ao Usuário - Carta 02: */

                printf("Cadastre uma letra, de A a H, para localização do Estado no jogo: \n");
                    scanf(" %c", &letra);

                printf("Crie um código alfanumérico para identificar sua carta (Exemplo: A03, A07): \n");
                    scanf("%s", codigo);

                printf("Digite o nome da cidade: \n");
                    scanf("%s", cidade);

                printf("Insira a População da cidade: \n");
                    scanf("%d", &populacao);

                        while (getchar() != '\n');

                printf("Insira a área da cidade, em km²: \n");
                    scanf(" %f", &area);
                
                        while (getchar() != '\n');
                        
                printf("Insira o PIB da cidade, correspondente ao último ano:\n");
                    scanf(" %f", &PIB);
                    
                printf("Insira a quantidade de pontos turísticos contidos na cidade:\n");
                    scanf("%d", &turismo);
                
                /* Devolutiva do Sistema - Carta 02: */

                printf("\n --- Carta 02 ---\n");
                printf("Estado: %c\n", letra);
                printf("Código: %s\n", codigo);
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("Área: %.2f km²\n", area);
                printf("PIB: R$ %.2f\n", PIB);
                printf("Pontos Turísticos: %d\n", turismo);

                            return 0;

}
