#include <iostream>

class aluno
    {
        public:
            std::string nome, morada;
            int nota1,nota2,nota3;
        public:
            aluno(std::string x, std::string y, int a, int b, int c)
            {
                nota1 = a;
                nota2 = b;
                nota3 = c;
                nome = x;
                morada = y;
            }
            double media();     //prototipo, a funçao e descrita abaixo
            
        }  ; 
double aluno::media()
{
    return (nota1+nota2+nota3)/3;
}

int main()
{
    aluno aluno1("Joao Fernandes", "Rua das ameijoas 300", 10, 13, 11);
    std::cout<<"A media de "<<aluno1.nome<<" residente em  "<<aluno1.morada<<" e "<<aluno1.media();
    return 0;
}
