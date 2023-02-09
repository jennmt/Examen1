#include <iostream>

using namespace std;

int main()
{
    int dia, mes, anio, edad;
    int diaActual=9;
    int mesActual=2;
    int anioActual=2023;
    
    cout<<"Ingresa tu fecha de nacimiento"<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>anio;
    
    edad=anioActual-anio;
    if(mes>mesActual){
        edad--;
    }else if(dia>diaActual){
        edad--;
    }
    
    cout<<"Edad: "<<edad;
    return 0;
}