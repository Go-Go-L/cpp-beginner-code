#include <iostream>
int main()
{   
    std::string cent;
    std::string dez;
    std::string un;
    std::string centenas[]={"cento","duzentos","trezentos","quatrocentos","quinhentos","seiscentos","setecentos","oitocentos","novecentos"};
    std::string dezenas[]={"vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
    std::string unidades[]={"um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    std::string dezes[]={"onze","doze","treze","catorze","quinze","dezasseis","dezassete","dezoito","dezanove"};
    int n;
    std::cout<<"Insira o numero: " ;
    std::cin>>n;
    for (int i=1; i < 10; i++)
    {
        if ((int)n/(i*100)==1 && n%(i*100)<100) 
        {
            cent=centenas[i-1];
            n=n-i*100;
            break;
        }
    }
    if(n==0)
    {
        std::cout<<cent;
        return(0);
    }
    for (int d=2; d<10; d++) 
        if ((int)n/(d*10)==1 && n%(d*10)<10)
        {
           dez=dezenas[d-2]; 
           n=n-d*10;
           break;
        }
    if (n==0)
    {
        std::cout<<cent<<" e "<<dez;
        return(0);
    } 
    std::cout<<cent<<" "<<dez<<" e "<<unidades[n-1];
    return(0);
    
}