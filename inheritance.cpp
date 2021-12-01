#include <iostream>
class veiculo
{
    private:
        int passageiros, velocidade;
    public: 
        int get_passageiros()             //encapsulation- se necessario chamar a variavel passageiro fora da classe, nao chama-la diretamente - manter a variavel private. Devemos criar uma funçao que chame a variavel.
        {
            return passageiros;
        }
        int get_velocidade()
        {
            return velocidade;
        }
        void set_velocidade(int v)
        {
            velocidade = v;
        }
        void set_passageiros(int p)
        {
            passageiros = p;
        }
};
class automovel : public veiculo        //classe derivada de veiculo
{
    private:
        std::string tipo;
    public:
        void set_tipo(std::string t)
        {
            tipo = t;
        }
        std::string get_tipo()
        {
            return tipo;
        }
        void imprimir()
        {
            std::cout<< "Passageiros: "<<get_passageiros()<< '\n';
            std::cout<< "Velocidade: "<<get_velocidade()<<'\n';
            std::cout<<"Tipo: "<<get_tipo();
        }
    
};
int main()
{
    automovel auto1;
    auto1.set_passageiros(4);
    auto1.set_velocidade(130);
    auto1.set_tipo("Ligeiro");
    auto1.imprimir();
    return 0;
}