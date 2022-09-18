/*Ejercicio 3*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeros(int n);/*Se declara la funcion a usar*/

int main () {
   int num_dec[256];/*arreglo de tama√±o 256, para guardar los 256 numeros*/
   
   int n = 256;
   int led;/*variable para mostras n∞decimal,n∞binario y estado del LED*/
   
  led=numeros(n);
  printf("%d",led);

    return 0;
}
/*A continuacion se define la funcion a utilizar*/
int numeros(int n){
    time_t t;
    int num_dec[256];/*tama√±o arreglo de 256 numeros*/
    int bin[8];/*tama√±o de 8 digitos para cada digito binario*/
    int decimal;/*para guardar y mostrar digito decimal*/
    srand((unsigned) time(&t)); /*funcion para generar numeros binarios 
                                diferentes en cada ejecucion*/

   for( int i = 0 ; i < n ; i++ ) {/*for para recorrer matriz*/
      num_dec[i]=(rand() % 255);/*generador de numeros aleatorios entre 0-255*/
   }
   /*A continuacion se utiliza el metodo de la division sucesiva entre 2 para
   obtener el numero binario*/
   for (int i=0;i<256;i++){/*for para recorrer el arreglo de 256 numeros*/
       decimal=num_dec[i];/*guarda el numero binario para despues mostrarlo*/
       for(int j=0;j<8;j++){/*for para hacer la division sucesiva entre 2*/
           if (num_dec[i]%2==0){ /*si el resto es 0*/ 
               bin[j]=0;/*digito binario=0*/
               num_dec[i]=(num_dec[i]/2);/*el numero es igual al numero/2*/
           }else{/*si el resto es distinto de 0*/
               bin[j]=1;/*digito binario=1*/
               num_dec[i]=(num_dec[i]/2);/*el numero es igual al numero/2*/
                         }
    
        printf("%d",bin[j]);/*muestro el digito binario*/
       }
       printf("--->Binario(LSB<--MSB) || %d---> Decimal\n",decimal);/*muestro el 
                                digito binario completo y el decimal completo*/
       
            for (int k=0;k<8;k++){/*for para recorrer digito binario*/
                if(bin[k]==1){/*si el digito binario es igua a 1*/
                    printf("%d= ON LED \n",bin[k]);/*LED ON*/
                }else if (bin[k]==0) {/*si el digito binario es igua a 0*/
                    printf("%d= OFF LED\n",bin[k]);/*LED OFF*/
                }
            }

   }
 return (0); 
}


