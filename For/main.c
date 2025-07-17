#include <stdio.h>
#include <windows.h>

int main() {

    for(int i = 100; i >= 0; i-=2) {

        Sleep(1000);

        printf("%d\n", i);

    }

    printf("Acabou!\n");

    return 0;

}