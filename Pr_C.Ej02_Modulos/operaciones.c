//
// Created by Mentxaka on 18/02/2021.
//

#include "operaciones.h"

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int multiplica(int a, int b){
    int i = 0;
    for(int j = 0; j<b;j++){
        i = i+a;
    }
    return i;
}

int divide(int a, int b){
    int i = 0;
    for(int j = 0; j<b;j++){
        a = a-b;
        i++;
    }
    return i;
}