#include<iostream>
using namespace std;
int main()                          /* conversion from m to feet */
{   
    const double factor = 3.2808;  // conversion constant meter->feet
    double m,ft;
    cout<<"Insira o valor em m: ";
    cin>>m;
    ft=m*factor;
    cout<<"Valor em pes: "<<ft<<"pes";

    return 0;
}