#include <stdio.h>
#include <stdlib.h>
//esse � loop avan�ado
int main()
{
     int contador = 1;
     int limite = 10;


     while(contador <= limite){
       printf("estamos no primeiro loop\n");

       if(contador == 2)
       {
            int contador_2 = 5;
            while(contador_2 > 0){

               printf("Estamos no segundo loop\n");
               contador_2--;

            }
       }


        contador++;
     }
    return 0;
}
