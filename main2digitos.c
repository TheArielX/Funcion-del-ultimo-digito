#include <stdio.h>
#include <stdlib.h>

int ud(int x)  {
    if(x>=0 && x<=9 || x<=0 && x>=-9) {
        x=x%10;
        printf("El %cltimo dig%cto del n%cmero introducido es: %d", 163, 161, 163, x);
    }
    if(x>=10 && x<=99 || x<=-10 && x>=-99) {
        x=x%100;
        printf("Los ultimos dos dig%ctos del n%cmero introducido es: %d", 161, 163, x);
    }
    if (x>=100 && x<=999 || x<=-100 && x>=-999) {
        x=x%100;
        printf("Los ultimos dos dig%ctos del n%cmero introducido es: %d", 161, 163, x);
    }
    if (x>=1000 && x<=9999 || x<=-1000 && x>=-9999){
        x=x%100;
        printf("Los ultimos dos dig%ctos del n%cmero introducido es: %d", 161, 163, x);
    }
    if (x>=10000 && x<=32767 || x<=-10000 && x>=-32767){
        x=x%100;
        printf("Los ultimos dos dig%ctos del n%cmero introducido es: %d", 163, 161, 163, x);
    }
    while (x>32767 || x<-32767) {
        printf("Este n%mero %d supera la capacidad del tipo de dato int.\nPor favor, intente digitar un n%cmero entre el rango de 32767 a -32767.\n", 163, x, 163);
            printf("Introduzca el n%cmero al cual le desea conocer los ultimos 2 dig%ctos.\nOjo: el n%cmero solo puede ser de 5 dig%ctos\nEn caso de que haya un 0 de primer d%cgito, el programa no lo imprimir%c\n", 163, 161, 163, 161, 161, 160);
                scanf("%d", &x);
                ud(x);
        }
}
int x;
int main()
{
    printf("Introduzca el n%cmero al cual le desea conocer los ultimos dos dig%ctos.\nOjo: el n%cmero solo puede ser de 5 dig%ctos.\nEn caso de que haya un 0 de primer d%cgito, el programa no lo imprimir%c\n", 163, 161, 163, 161, 161, 160);
    scanf("%d", &x);
    ud(x);
}
