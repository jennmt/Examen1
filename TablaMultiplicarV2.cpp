/**
 * @version 1.0
 * @date 09/02/2023
 * @author Jennifer
 * @title Tabla de Multiplcar
 * @brief Genera la tabla de multiplocar del número ingresado por el usuario
 */
#include <iostream>

using namespace std;

int num;

/**
 * @brief Pide un número al usuario
 * @param num
 * @return void
 * @code 
    cout<<"Ingresa el número: ";
    cin>>num;
   @endcode
 */
void pedirNumero();

/**
 * @brief Genera la tabla de multiplicar
 * @param num
 * @return void
 * @code 
    for(int i=1; i<=10; i++){
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }
   @endcode
 */
void tablaMultiplicar();

int main()
{
    pedirNumero();
    tablaMultiplicar();

    return 0;
}

void pedirNumero(){
    cout<<"Ingresa el número: ";
    cin>>num;
}
void tablaMultiplicar(){
    for(int i=1; i<=10; i++){
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }
}