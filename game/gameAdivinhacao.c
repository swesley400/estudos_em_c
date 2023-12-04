#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroMaximoQuePodeChutar = 20; 
    int numero = 1+(rand()%numeroMaximoQuePodeChutar);
    int chute;
    int tentativas = 0;

    while (1)
    {

        printf("**************************** Bem vindo ***************************\n");
        printf("Digite um numero entre 0 e %d para comecar: ", numeroMaximoQuePodeChutar);

        scanf("%d", &chute);

        if(chute > numeroMaximoQuePodeChutar ){
            printf("Chute nao pode ser maior que %d\n", numeroMaximoQuePodeChutar);
            continue;
        }

        if (chute < 0)
        {
            printf("Chute nao pode ser negativo\n");
        }
        else if (chute == numero)
        {
            printf("Parabens voce acertou\n");
            break;
        }
        else
        {
            if (chute < numero)
            {
                printf("Seu chute foi menor\n");
            }
            else if (chute > numero)
            {
                printf("Seu numero foi maior\n");
            }
        }
    }
}
