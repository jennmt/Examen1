/**
 * @version 1.0
 * @date 09/02/2023
 * @author Jennifer
 * @title Calcular Edad
 * @brief Calcula la edad del usuario a partir de su fecha de nacimiento
 */
 
#include <iostream>

using namespace std;

int dia, mes, anio, edad;
int diaActual=9;
int mesActual=2;
int anioActual=2023;

/**
 * @brief Pide la fecha de nacimiento al usuario
 * @param dia
 * @param mes
 * @param anio
 * @return void
 * @code 
    cout<<"Ingresa tu fecha de nacimiento"<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>anio;
   @endcode
 */
void pedirFechaNacimiento();

/**
 * @brief Calcula la edad del usuario
 * @param dia
 * @param mes
 * @param anio
 * @param diaActual
 * @param mesActual
 * @param anioActual
 * @return void
 * @code 
    edad=anioActual-anio;
    if(mes>mesActual){
        edad--;
    }else if(dia>diaActual){
        edad--;
    }
    cout<<"Edad: "<<edad;
   @endcode
 */
void calcularEdad();

int main()
{
    pedirFechaNacimiento();
    calcularEdad();
    return 0;
}

void pedirFechaNacimiento(){
    cout<<"Ingresa tu fecha de nacimiento"<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>anio;
}

void calcularEdad(){
    edad=anioActual-anio;
    if(mes>mesActual){
        edad--;
    }else if(dia>diaActual){
        edad--;
    }
    cout<<"Edad: "<<edad;
}