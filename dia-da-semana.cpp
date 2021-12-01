#include <iostream>
#include <string>
int main()
{
    int dia,mes,ano,diftotal,anodif,mesdif,diadif;
    std::string diasemana;
    std::string semana[] = {"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira","Quinta-Feira","Sexta-Feira","Sábado"};
    std::cout<<"Dia de nascimento: ";
    std::cin>>dia;
    std::cout<<"Mes de nascimento: ";
    std::cin>>mes;
    std::cout<<"Ano de nascimento: " ;
    std::cin>>ano;
    anodif=ano-1900;                                              //Sabemos que 01/01/1900 foi domingo
    mesdif=mes-1;
    diadif=dia-1;
    diftotal=diadif+anodif*365+mesdif*30;                         //diferença de dias entre o nascimento e 1 de janeiro 1900
    diftotal+=(int)anodif / 4      ;                              //acrescentar anos bissextos
    diasemana=semana[diftotal % 7];
    std::cout<<"O dia da semana a que nasceu foi uma "<<diasemana;
    return 0;
}