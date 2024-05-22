#include <stdio.h>

int item_code, quantity;
float unit_price;

int main() {
    obtenerDatosArticulo(); 
    calcularYMostrarFactura(); 
    return 0;
}

void obtenerDatosArticulo() {
    printf("Código del artículo ");
    scanf("%d", &item_code);
    printf("Cantidad comprada");
    scanf("%d", &quantity);
    printf("Precio unitario");
    scanf("%f", &unit_price);
}

void calcularYMostrarFactura() {
    printf("\n\n%10s %10s %10s %10s %10s\n\n", "Artículo", "Cantidad", "P. U.", "Dto.", "Total");
    printf("%10d %10d %10.2f", item_code, quantity, unit_price);

    if (quantity > 100) {
        printf(" %9d%% %10.2f\n", 40, quantity * unit_price * 0.6);
    } else if (quantity >= 25) {
        printf(" %9d%% %10.2f\n", 20, quantity * unit_price * 0.8);
    } else if (quantity >= 10) {
        printf(" %9d%% %10.2f\n", 10, quantity * unit_price * 0.9);
    } else {
        printf(" %10s %10.2f\n", "--", quantity * unit_price);
    }
}