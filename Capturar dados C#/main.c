
/*receber nome*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_pessoa[50]; //� um vetor com 50 posi��es

    //1) vamos usar o comando gets(..)
    printf("informe seu nome: ");
    gets(nome_pessoa); //pegar um nome digitado e armazenar no vetor nome_pessoa
    printf("seu nome � : %s\n",nome_pessoa);
    //gets n�o � seguro

    //2) vamos usar o comando scanf(..)
    printf("informe seu nome: ");
    scanf("%s", nome_pessoa); //pegar um nome digitado e armazenar no vetor nome_pessoa
    printf("seu nome � : %s\n",nome_pessoa);


    //3) vamos usar o comando fgets(..)
    printf("informe seu nome: ");
    fgets(nome_pessoa, sizeof(nome_pessoa),stdin); //pegar um nome digitado e armazenar no vetor nome_pessoa
    printf("seu nome � : %s\n",nome_pessoa);

    system("pause");
    return 0;
}
