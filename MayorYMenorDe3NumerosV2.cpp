/**
 * @version 1.0
 * @date 09/02/2023
 * @author Jennifer
 * @title Mayor y menor de 3 números
 * @brief Calcula el número mayor y el número menor de 3  números
 */
 
#include <iostream>

using namespace std;

int num1, num2, num3;
/**
 * @brief Pide 3 números al usuario
 * @param num1
 * @param num2
 * @param num3
 * @return void
 * @code 
    cout<<"Ingrese el numero 1: ";
    cin>>num1;
    cout<<"Ingrese el numero 2: ";
    cin>>num2;
    cout<<"Ingrese el numero 3: ";
    cin>>num3;
   @endcode
 */
void pedirNumeros();

/**
 * @brief Determina cúal es el número mayor
 * @param num1
 * @param num2
 * @param num3
 * @return void
 * @code 
    if(num1>num2 && num1>num3){
        cout<<"Mayor="<<num1<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<"Mayor="<<num2<<endl;
    }else if(num3>num1 && num3>num2){
        cout<<"Mayor="<<num3<<endl;
    }
   @endcode
 */
void mayor();

/**
 * @brief Determina cúal es el número menor
 * @param num1
 * @param num2
 * @param num3
 * @return void
 * @code 
    if(num1<num2 && num1<num3){
        cout<<"Menor="<<num1;
    }else if(num2<num1 && num2<num3){
        cout<<"Menor="<<num2;
    }else if(num3<num1 && num3<num2){
        cout<<"Menor="<<num3;
    }
   @endcode
 */
void menor();

int main()
{
    pedirNumeros();
    mayor();
    menor();
}

void pedirNumeros(){
    cout<<"Ingrese el numero 1: ";
    cin>>num1;
    cout<<"Ingrese el numero 2: ";
    cin>>num2;
    cout<<"Ingrese el numero 3: ";
    cin>>num3;
}

void mayor(){
    if(num1>num2 && num1>num3){
        cout<<"Mayor="<<num1<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<"Mayor="<<num2<<endl;
    }else if(num3>num1 && num3>num2){
        cout<<"Mayor="<<num3<<endl;
    }
}

void menor(){
    if(num1<num2 && num1<num3){
        cout<<"Menor="<<num1;
    }else if(num2<num1 && num2<num3){
        cout<<"Menor="<<num2;
    }else if(num3<num1 && num3<num2){
        cout<<"Menor="<<num3;
    }
}