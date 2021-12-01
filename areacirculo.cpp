#include<iostream>
#include<cmath>
int main()
{
    double raio,area;
    const double pi = 3.1415;
    std::cout<<"Raio do circulo: ";
    std::cin>>raio;
    area=pi*pow(raio,2);
    std::cout<<"Area do Circulo: "<<area;
    return 0;
}