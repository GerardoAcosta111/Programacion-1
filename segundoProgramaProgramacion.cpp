#include <iostream>
#include <string>
using namespace std;


int main (){
    
    int a;
    int b;
    
    std::cout << "Ingrese el valor de a:  " << std::endl;
    cin >> a ;
    std::cout << "Ingrese el valor de b:  " << std::endl;
    cin >> b ;

            std::cout << "la division es:  " << ((float)a / b)  << std::endl;
            std::cout << "la suma es :  " << (a + b) << std::endl;
            std::cout << "la resta es:  " << (a - b) << std::endl;
            std::cout << "la multiplicación es:  " << (a * b) << std::endl;
        
}