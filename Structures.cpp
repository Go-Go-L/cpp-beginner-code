#include <iostream>
#include <string>
struct infoaluno
{
    std::string nome;
    double nota1, nota2, media;

};

int main()
{   
    infoaluno infoaluno1;
    std::cout<<"Nome do aluno: ";
    std::getline(std::cin,infoaluno1.nome);
    std::cout<<"Nota do primeiro teste: ";
    std::cin>>infoaluno1.nota1;
    std::cout<<"Nota do segundo teste: ";
    std::cin>>infoaluno1.nota2;
    infoaluno1.media=(infoaluno1.nota1+infoaluno1.nota2)/2;
    std::cout<<"A nota final de "<<infoaluno1.nome<<" e: "<<infoaluno1.media;

    return 0;
}