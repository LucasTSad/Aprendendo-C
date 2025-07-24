#include <stdio.h>

typedef struct {

    char modelo[25];
    int ano;
    int preco;

}Carro;

void printCarros (Carro carros);

int main () {

    Carro carros[] = {{"Ferrari", 2022, 5000000}, 
                      {"Lamborghini", 2023, 6000000}, 
                      {"Bugatti", 2024, 7000000}};

    int numeroCarros = sizeof(carros) / sizeof(carros[0]);

    for(int i = 0; i < numeroCarros; i++) {
      
        printCarros(carros[i]);

    };

    return 0;

}

void printCarros (Carro carros) {

    printf("Modelo: %s\n", carros.modelo);
    printf("Ano: %d\n", carros.ano);
    printf("Preco: $%d\n", carros.preco);
    printf("----------------\n");

};