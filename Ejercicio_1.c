/*Ejercicio 1*/
#include <stdio.h>
#include<stdlib.h>
int main(){
    int CLA;/*variable para guardar la clave*/
    int CAT;/*variable para guardar la categoria*/
    int ANT;/*variable para guardar la antiguedad*/
    int SAL;/*variable para guardar el salario*/
    printf("Ingrese Clave");/*se pide la clave*/
    scanf("%d",CLA);/*se guarda la clave*/
    printf("Ingrese Categoria");/*se pide la categoria*/
    scanf("%d",CAT);/*se guarda la categoria*/
    printf("Ingrese Antiguedad");/*se pide la antiguedad*/
    scanf("%d",ANT);/*se guarda la antiguedad*/
    printf("Ingrese Salario");/*se pide el salario*/
    scanf("%d",SAL);/*se guarda el salario*/
    if(CAT==3 || CAT==4 && ANT>7){ /*if para evaluar el primer requisito*/
        printf("Cumple con los requisitos");/*si cumple se imprime que Si*/

    }else if(CAT==2 && ANT>7){/*else if para evaluar segundo requisito*/
        printf("Cumple con los requisitos");/*si cumple se imprime que Si*/

    }else{/*else para evaluar cuando no se cumpla ningun requisito*/
        printf("No cumple con los requisitos");/*si no cumple se imprime No*/
  
    } 

    return 0; /*para finalizar el programa*/
}



    
    

