#include <iostream>
int main()
{   
    int nr,total;
    int i=1;
    std::cout<<"Insira o numero: ";
    std::cin>>nr;                        //input
    total=nr;
    while(i<nr)
    {                                      
        total*=nr-i;                       //multiplica por o inteiro abaixo
        i++;                              //adiciona 1 à iteraçao
    }
    std::cout<<"O fatorial de "<<nr<<" e: "<<total;
}