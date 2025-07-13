#include <stdio.h>

int main(){

    int x = 10;
    int y = 2;
    //float y2 = 3;
    int z = 0;
    //float z2 = 0;

    //z = x + y; 
    //z = x - y;
    //z = x * y;
    //z2 = x / y2;
    //z = x % y;

    printf("O valor de Z é %d\n", z);

    x++;
    y--;

    printf("O valor de X é %d\n", x);
    printf("O valor de Y é %d\n", y);

    x -= 2;
    y += 3;

    printf("O valor de X é %d\n", x);
    printf("O valor de Y é %d\n", y);

    x *= 5;
    y /= 6;

    printf("O valor de X é %d\n", x);
    printf("O valor de Y é %d\n", y);
    

    return 0;

}