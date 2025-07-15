#include <stdio.h>
#include <stdbool.h>

int main () {

    int temp = 2;

    if(temp > 0 && temp < 30){

        printf("A temperatura esta BOA\n");
    }
    else {

        printf("A temperatura NAO esta BOA\n");

    }

    if(temp <= 0 || temp >= 30) {

        printf("A temperatura NAO esta BOA\n");

    }
    else {

        printf("A temperatura esta BOA\n");

    }

    bool estaDia = false;

    if (!estaDia) {

        printf("Esta de noite\n");

    }
    else {

        printf("Esta de dia\n");

    }

    return 0;

}