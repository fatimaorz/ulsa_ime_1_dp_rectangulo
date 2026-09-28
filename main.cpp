// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    //    TODO: ¿qué variables necesitas? ¿De qué tipo? ¿Con qué valor empiezan?

    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    //    TODO: lee el ancho con leerDecimal("...")
    //    TODO: ¿qué haces si es 0 o negativo? ¿Cuántas veces lo vuelves a pedir?
    do {
        ancho =leerDecimal ("Ancho en cm (mayor de 0): ");
    } while (ancho <= 0)
    .
    //    TODO: lee el ancho con leerDecimal("...")
    //    TODO: ¿qué haces si es 0 o negativo? ¿Cuántas veces lo vuelves a pedir?
     do {
        alto = leerDecimal ("Alto en cm (mayor que 0): ")
     } while (alto <= 0)
    // 3. Entrada: el alto
    //    TODO: mismo criterio que el ancho

    // 4. Proceso
    //    TODO: calcula el área y el perímetro
    //    ¿Estás seguro(a) del orden en que C++ hace las operaciones?
    area = ancho * alto;
    perimetro = 2 * (ancho + alto);
    // 5. Salida
    //    TODO: muestra el área y el perímetro, con sus unidades
std :: cout << "Area: " << area << "cm2\n";
std :: cout << "Perimetro: " << perimetro << "cm\n";

 // ¿Qué significa return 0;?
    return 0;
}