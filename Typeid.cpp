#include <iostream>
#include <string>
using namespace std;
int main(){
    int i = 65;
    string c = "70";
    float f = 3.1416;
    cout << "tipo de nombre de int = " << typeid(int).name() << endl;
    cout << "tipo de nombre de i = " << typeid(i).name() << endl;
    cout << "tipo de nombre de char = " << typeid(char).name() << 
    endl;
    cout << "tipo de nombre de c = " << typeid(c).name() << endl;
    cout << "tipo de nombre de float = " << typeid(float).name() << 
    endl;
    cout << "tipo de nombre de f = " << typeid(f).name() << endl;
    cout << "tipo de nombre de string = " << typeid(string).name() 
    << endl;
    if(typeid(string) == typeid(c)){
        cout << "Es igual" << endl;
    } else {
        cout << "No es igual" << endl;
    } // Fin If
    return 0;
}