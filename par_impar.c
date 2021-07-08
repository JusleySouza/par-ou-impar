#include<stdio.h>
#include<string.h>

int validacao(char jogador_1[10]){
    
    int escolha;

    printf("%s, faca sua escolha:\n[1]=Impar, [2]=Par:  ", jogador_1);
    scanf("%d", &escolha);
    while(escolha > 2 || escolha < 1)
    {
        printf("!!!ERRO!!!\nDigite um numero valido \n\n");
        printf("%s, faca sua escolha:\n[1]=Impar, [2]=Par:  ", jogador_1);
        scanf("%d", &escolha);
    }

    return escolha;

}
int main ()
{
    char jog1[10], jog2[10];
    int val1, val2, soma, escolha;
    
    printf("Jogador1= ");
    scanf("%s",jog1);

    printf("Jogador2= ");
    scanf("%s",jog2);

    printf("%s, faca sua escolha:\n[1]=Impar, [2]=Par:  ", jog1);
    scanf("%d", &escolha);
    while(escolha > 2 || escolha < 1)
    {
        printf("!!!ERRO!!!\nDigite um numero valido \n\n");
        printf("%s, faca sua escolha:\n[1]=Impar, [2]=Par:  ", jog1);
        scanf("%d", &escolha);
    }
    

    printf("\n%s diga seu numero: ", jog1);
    scanf("%d",&val1);

    printf("%s diga seu numero: ", jog2);
    scanf("%d", &val2);
    
    soma= val1+val2;

    switch(escolha){
        case 1:
            if(soma % 2 == 1){
                printf("VENCEDOR!!!\n %s", jog1);
            }
            else{
                printf("VENCEDOR!!!\n %s", jog2);
            }
        break;       
        case 2:
            if(soma % 2 == 0){
                printf("VENCEDOR!!!\n %s", jog1);
            }
            else{
                printf("VENCEDOR!!!\n %s", jog2);
            }
        break; 
        default:
            printf("!!!ERRO!!!");     
    }


    

    return(0);
}