#include <stdio.h>
int num1,num2,res,x,z;
int validar(int a){               // Creamos una funsion para hacer validaciones y solo mandarlas a llamar en el int main.

do{
   printf("Dame un numero entero: ");
   scanf("%d", &a);
   if(a==0){
    printf("Tu numero no es valido: ");
    fflush(stdin);                          // eliminar el buffer
    scanf("%d", &a);
   }

} while(a==1);
return a;
}

int main(){

 x = validar(num1);
 z = validar(num2);
 res =x+z;

    printf("%d", res);
return 0;

}
