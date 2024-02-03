#include <iostream>

int main() {
    const int empresas = 5;
    float cotizacion[empresas];

    // Ingreso de las cotizaciones
    std::cout << "Ingrese el monto de la cotizacion:\n";
    for (int i = 0; i < empresas; ++i) {
        std::cout << "Cotizacion empresa " << i + 1 << ": ";
        std::cin >> cotizacion[i];
    }

    // Esta parte inicia la diferenciación de la cotización más alta vs la más baja
    int cotizacionmin = 0;
    int cotizacionmax = 0;

    for (int i = 1; i < empresas; ++i) {
                    if (cotizacion[i] > cotizacion[cotizacionmax]) {
            cotizacionmax = i;
        }

        if (cotizacion[i] < cotizacion[cotizacionmin]) {
            cotizacionmin = i;
        }
    }

    // Mostrar cotizaciones eliminadas
    std::cout << "\nCotizaciones eliminadas:\n";
    std::cout << "La cotización mas alta es: " << cotizacion[cotizacionmax] << std::endl;
    std::cout << "La cotización mas baja es: " << cotizacion[cotizacionmin] << std::endl;

    // Para las cotizaciones restantes
    float sumacot = 0;
    int contador = 0;

    for (int i = 0; i < empresas; ++i) {
        if (i != cotizacionmin && i != cotizacionmax) {
            sumacot += cotizacion[i];
            contador++;
        }
    }

    float promediocot = sumacot / contador;

    std::cout << "\nEl promedio de las cotizaciones restantes es: " << promediocot << std::endl;

    return 0;
}
