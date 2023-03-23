#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strcmp(strg1, strg2)==0
    //pedra, papel ou tesoura

    char player1[256];
    char player2[256];
    char nomeplayer1[256];
    char nomeplayer2[256];

    printf("\nPlayer 1, insira o seu nome:");
    scanf("%s",&nomeplayer1);


    printf("\nPlayer 2, insira o seu nome:");
    scanf("%s",&nomeplayer2);


    printf("\nPlayer 1, sua vez...");
    scanf("%s",&player1);

    printf("\nPlayer 2, sua vez...");
    scanf("%s",&player2);

    printf("\naguarde, estamos calculando o resultado...\n");
    if(strcmp(player1,"papel")==0){

                            if(strcmp(player2,"papel")==0){
                                printf("Empate!!");
                            }else if(strcmp(player2,"tesoura")==0){
                              printf("%s Wins!!!",&nomeplayer2 );
                            }else if(strcmp(player2,"pedra")==0){
                              printf("Player 1 WINS!!!");
                            }else {
                              printf("você jogou uma informacao nada a ver");
                            }

        }else if(strcmp(player1,"tesoura")==0){
             if(strcmp(player2,"papel")==0){
                            printf("Player 1, WINSSS!!");
                            }else if(strcmp(player2,"tesoura")==0){
                              printf("Empate!!!");
                            }else if(strcmp(player2,"pedra")==0){
                              printf("Player 2, WINNNS!!!");
                            }else {
                              printf("você jogou uma informacao nada a ver");
                            }
        }else if(strcmp(player1,"pedra")==0){
             if(strcmp(player2,"papel")==0){
                            printf("Player 2, WINNNS!!");
                            }else if(strcmp(player2,"tesoura")==0){
                              printf("Player 1 WINS!!!");
                            }else if(strcmp(player2,"pedra")==0){
                              printf("Empate!!");
                            }else {
                              printf("você jogou uma informacao nada a ver");
                            }

        }else {
          printf("você jogou uma informacao nada a ver");
        }

}
