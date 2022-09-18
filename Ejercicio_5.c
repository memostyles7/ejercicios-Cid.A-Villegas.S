/*Ejercicio 5*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float promedio(int notas[],int length);
float varianza(int notas[],int length);
float desvestandar(float varianza);
int main(){
    
    int notas [8]={7,6,2,7,4,7,5,4}; /*arreglo de notas de largo cualquiera*/
    int length=(sizeof(notas)/sizeof(notas[0]));/*se calcula el largo 
                                                del arreglo*/
    float prom;/*variable para guardar el promedio*/
    float var;/*variable para guardar la varianza*/
    float desv;/*variable para guardar la desviacion estandar*/

    prom=promedio(notas,length);/*uso de funcion promedio*/
    var=varianza(notas,length);/*uso de funcion varianza*/
    desv=desvestandar(var);/*uso de funcion desviacion estandar*/
    
    printf("Promedio: %f Varianza:%f Desviacion Estandar: %f",prom,var,desv);
    return 0;
}
/*A continuacion se definen las funciones*/
float promedio(int notas[],int length){
    float suma=0;
    for (int i=0;i<length;i++){/*ciclo for para recorrer matriz*/
        suma=notas[i]+suma;/*suma dato por dato*/
    }
    return(suma/length);/*la suma total dividido entre el numero de datos*/
}

float varianza(int notas[],int length){
    float resta=0;/*variable para guardarla resta*/
    float suma=0;/*variable para guardar la suma*/
    float pot=0;/*variable para guardar el elevado al cuadrado*/
    float prom;/*variable para llamar a la funcion promedio*/ 
    prom= promedio(notas,length);
    for (int i=0;i<length;i++){/*ciclo for para recorrer matriz*/
        resta=resta-prom;/*x-promedio*/
        pot=resta*resta;/*(x-promedio) al cuadrado*/
        suma=suma+pot;/*sumatoria de((x-promedio) al cuadrado) */
    }
    return (suma/length);/*la sumatoria divida entre el total de datos*/
}

float desvestandar(float var){
    float desv;
    desv=sqrt(var);/*la raiz cuadrada de la varianza*/
    return(desv);
}


