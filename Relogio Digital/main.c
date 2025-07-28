#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main() {

    time_t tempoBruto = 0; // Jan 1 1970 (Epoch)
    struct tm *pTempo = NULL;
    bool estaRodando = true;

    printf("***RELOGIO DIGITAL***\n\n");

    while (estaRodando) {

        time(&tempoBruto);

        pTempo = localtime(&tempoBruto);

        printf("\r%02d:%02d:%02d", pTempo->tm_hour, pTempo->tm_min, pTempo->tm_sec);

        Sleep(1000);
        
    }

    return 0;

}