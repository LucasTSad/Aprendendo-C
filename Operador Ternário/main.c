#include <stdio.h>
#include <stdbool.h>

int main () {

    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;

    printf("%d\n", max);

    bool Online = true;

    printf("%s\n", (Online) ? "Online" : "Offline");

    int num = 8;

    printf("%d eh %s\n", num, (num % 2 == 0) ? "par" : "impar");

    int horas = 12;
    int minutos = 7;
    char *am_pm = (horas < 12) ? "AM" : "PM";

    printf("%02d:%02d %s\n", horas, minutos, am_pm);

    return 0;

}