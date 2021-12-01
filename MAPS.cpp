#include <map>
#include <iostream>
int main()
{
    std::map <int,std::string> mapa ;
    mapa.insert(std::pair <int , std::string > (1 , "um"));
    mapa.insert(std::pair <int , std::string > (2 , "dois"));
    mapa.insert(std::pair <int , std::string > (3 , "tres"));
    typename std::map <int , std::string > :: iterator iterador;
    for (iterador = mapa.begin() ; iterador != mapa.end() ; iterador++)
    {
        std::cout << "Chave: " << iterador-> first << '\n';
        std::cout << "Valor: " << iterador-> second << '\n';
        auto teste = mapa.find( 3 );

    }
    if (false)
    {      
        std::cout <<" Teste";
    }
    else
    {

    }
    return 0;
}