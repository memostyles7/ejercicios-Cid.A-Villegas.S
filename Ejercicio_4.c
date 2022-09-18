/*Ejercicio 4 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int temperature[24],int length, int* add_max,int*add_hora_max);
int min(int temperature[24],int length,int* add_min,int*add_hora_min);
int promedio(int temperature[24],int length);

int main () {
   int i;/*variable que servira para recorrer el arreglo*/
   time_t t;/*variable proveniente de la libreria time*/
   int temp[24];/*arreglo de tamaÃ±o 24, para guardar los datos de TÂ°*/
   
   int n = 24;
   int maxt;/*variable para guardar la max  T°*/
   int mint;/*variable para guardar la min  T°*/
   int horamin;/*variable para guardar la hora de la max  T°*/
   int horamax;/*variable para guardar la hora de  la min  T°*/
   int promt;/*variable para guardar la TÂ° promedio*/
   
   srand((unsigned) time(&t)); /*Se inicializa un generador de numeros random,
                                sin el la secuencia de numeros random
                                no cambiaria*/

 /*El ciclo for a continuacion, permite generar el array de numeros random */
   for( i = 0 ; i < n ; i++ ) {
      temp[i]=(rand() % 30);/*Guarda en el arreglo temp un valor random de T° 
      entre 0 y 30 */
      /*printf("Temperatura %d C° Hora %d:00 hrs \n",temp[i],i);descomente 
      esta linea para ver la Temperatura Random y la Hora*/
   }
    max(temp,n,&maxt,&horamax);/*llama a la funcion max,utiliza &maxt y &horamax 
    acceder a la posicion donde se guardo,dado que se utilizaron punteros
    para poder retornar dos valores(la max T° y la hora)*/
    min(temp,n,&mint,&horamin);/*llama a la funcion min,utiliza &mint y &horamax 
    acceder a la posicion donde se guardo,dado que se utilizaron punteros
    para poder retornar dos valores(la max T° y la hora)*/
    promt=promedio(temp,n);/*llama a la funcion promedio*/
    /*los printf a continuacion muestras los valores solicitados*/
    printf("La Temperatura Maxima es %d C° a las %d:00 hrs. \n",maxt,horamax);
    printf("La Temperatura Minima es %d C° a las %d:00 hrs. \n",mint,horamin);
    printf("La Temperatura Promedio es de %d C°.\n",promt);
    
    
    return(0);   
   }
  /*A continuacion se declaran las funciones*/ 
 int max(int temperature[24],int length, int* add_max,int*add_hora_max){
   int max=0;/*Se define max para guardar la T° max*/
   int posicion;/*Se define posicion para guardar la posicion del arreglo
   que hara referencia a la hora de la T° max*/
   for (int j=0;j<length;j++){/*ciclo for para recorrer arreglo de TÂ°*/
       if (temperature[j]>max){/*Si el valor de T° es mayor al valor que esta
       en la variable max*/
            max=temperature[j];/*se guarda ese valor en max*/
            *add_max=max;/*se guarda max en una direccion en memoria a traves 
            del puntero para poder retornarlo*/
            
            posicion=j;/*se guarda el valor de j en posicion, que representara
            la posicion de la max T°*/
            *add_hora_max=posicion;/*se guarda posicion en una direccion 
            a traves del puntero para poder retornarlo*/
        }
  
      }
 return(0);
 }
 
 int min(int temperature[24],int length,int* add_min,int*add_hora_min){
    int min=temperature[0];/*se le asigna para comenzar como min T° 
    la primera T° del arreglo*/
    int posicion;/*Se define posicion para guardar la posicion del arreglo
   que hara referencia a la hora de la TÂ° min*/
    for (int j=0;j<length;j++){/*ciclo for para recorerr arreglo de T°*/
       if (temperature[j]<min){/*Si el valor de TÂ° es menor al valor que esta
       en la variable min*/
            min=temperature[j];/*si es menor lo guarda en min*/
            *add_min=min;/*se guarda posicion en una direccion 
            a traves del puntero para poder retornarlo*/
            posicion=j;/*se guarda el valor de j en posicion, que representara
            la posicion de la min T°*/
            *add_hora_min=posicion;/*se guarda posicion en una direccion 
            a traves del puntero para poder retornarlo*/
        }
       }
 return(0);
 }   
 
 int promedio(int temperature[24],int length){
    int suma=0;
    for (int j=0;j<length;j++){/*ciclo for para recorrer arreglo de T°*/
        suma=temperature[j]+suma;/*permite ir sumando los valores del
        arreglo de T°*/
    }
    return((suma/24));/*retorna el valor dividido entre 24,para asi retornarlo
    el promedio*/
}

   
