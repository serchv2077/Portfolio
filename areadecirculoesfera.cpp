#include <iostream>
using namespace std;

int main(){
int radio;
float pi=3.1415; //
float area, area1;

    cout<<"Cual es el radio de tu circulo y esferea"<<endl; //cout pregunta
    cin>>radio;  //Cin lee lo preguntado
    area=pi*radio*radio;
    area1=4*pi*(radio*radio);
    cout<<"El area de tu circulo es "<<area<<endl;

    cout<<"El area de tu esfera es "<<area1<<endl;
}
