#include <iostream>
int main()
{   
    std::string cent,dez,un;
    std::string centenas[]={"cem","duzentos","trezentos","quatrocentos","quinhentos","seiscentos","setecentos","oitocentos","novecentos"};
    std::string dezenas[]={"vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
    std::string unidades[]={"um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    std::string dezes[]={"onze","doze","treze","catorze","quinze","dezasseis","dezassete","dezoito","dezanove"};
    int n;
    std::cout<<"Insira o numero: " ;
    std::cin>>n;
    for (int i=1; i < 10; i++)
    {
        if ((int)n/(i*100)==1)
        {
            cent=centenas[i-1];
            n=n-i*100;
        }
    }
    if(n==0)
    {
        std::cout<<cent;
        return(0);
    }
    for (int d=2; d<10; d++) 
        if ((int)n/(d*10)==1)
        {
           dez=dezenas[d-1]; 
           n=n-d*10;
        }
    if (n==0)
    {
        std::cout<<cent<<" "<<dez;
        return(0);
    } 
    std::cout<<cent<<" "<<dez<<" e "<<unidades[n-1];
    return(0);
    
}