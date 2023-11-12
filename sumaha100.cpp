# include <stdio.h>  // libreria

int main(){   // inicio del algortimo
     int y,suma;  // variables locales


do  //ciclo do while , hecer hasta
{
    printf("Ingresa el numero que quieres suma: "); // preguntar la suma
    scanf("%d", &y);
    suma = y+suma;
}
while(suma < 100);  // condicion para que pare el do.

    printf("Tu suma es o pasa de 100");  // resultado en pantalla
    return 0;


}
