#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hora_cinema= 20;
   int hora_atual=20;

   if(hora_atual > hora_cinema + 30) {
      printf("passou do tempo!");
    }else if(hora_atual < hora_cinema - 15){
      printf("nem abriu a porta ainda");
    }else{
      printf("O horario esta certo, liberado");
    }
       return 0;
}



