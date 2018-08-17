/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 16 de agosto de 2018, 10:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b,c,r1,r2,r3,valor;
    printf("A continuación el numero que nos proporciones se te regresara en orden contrario\n");
    printf("Favor de insertar un número de 3 cifras");
    scanf("%d",&valor);
    a=valor/100;
    r1=valor%100;
    b=r1/10;
    r2=r1%10;
    c=r2/1;
    r3=r2%1;
    printf("Tú nuevo numero es=%d%d%d",c,b,a);
       

    return 0;
}

