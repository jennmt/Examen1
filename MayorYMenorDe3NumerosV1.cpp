#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Numero 1: ";
    cin>>num1;
    cout<<"Numero 2: ";
    cin>>num2;
    cout<<"Numero 3: ";
    cin>>num3;
    
    if(num1>num2 && num1>num3){
        cout<<"Mayor="<<num1<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<"Mayor="<<num2<<endl;
    }else if(num3>num1 && num3>num2){
        cout<<"Mayor="<<num3<<endl;
    }
    
    if(num1<num2 && num1<num3){
        cout<<"Menor="<<num1;
    }else if(num2<num1 && num2<num3){
        cout<<"Menor="<<num2;
    }else if(num3<num1 && num3<num2){
        cout<<"Menor="<<num3;
    }
}