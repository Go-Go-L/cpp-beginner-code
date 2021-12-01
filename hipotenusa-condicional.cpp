#include <iostream>
#include <string>
#include<cmath>
int numero1, numero2;
int main()
{
    std::cout<<"Insira o primeiro cateto: ";
    std::cin>>numero1;
    std::cout<<"Insira o segundo cateto: ";
    std::cin>>numero2;
    int soma=pow(numero1,2)+pow(numero2,2);
    if (numero1<0 || numero2<0)
    {
        std::cout<<"ERROR- um dos comprimentos e negativo";
        return 0;
    }
    else
    {
        std::cout<<"O quadrado da hipotenusa e: "<<soma;
        return 0;
    }
}