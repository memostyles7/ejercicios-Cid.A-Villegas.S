/*Ejercicio 2*/
#include <stdio.h>
int formula(int numeroSonidos);
int main(){
    

    int numeroSonidos;// variable para guardar el numero de Sonidos
    printf("Introduzca el Numero de Sonidos Emitidos: ");/*se pide el numero de
                                                      de Sonidos */
    scanf("%d", &numeroSonidos);/*se reciben el numero de sonidos*/
    printf("La Temperatura es %d",formula(numeroSonidos));//aplicacion de la formula

    return 0;
}
int formula(int numeroSonidos){
    float celcius; /*variable para guardar en grados celcius*/
    float fa;/*variable para guardar en grados farenheit*/
    fa = ((numeroSonidos/40)+40);/*se realiza la formula*/
    celcius=((fa-32)/1.8);/*formula para pasar de farenheit a celcius*/
    return(celcius);/*se imprime por pantalla la T°*/
}






