#include <iostream>
#include <vector>
class mainengine
{
private:
    double thrust;
    double volume;
    double maxload;
    bool ready;
public:
    void engineon();
};

class secondengine
{
private:
    double volume;
    double thrust;
    bool ready;
public:
    void engineon();
};

class crew
{
    private:
        std::string captain;
        std::vector <std::string> crewmembers;
        bool ready;
    public:
        void crewready();
};  

class facade
{
private:
    crew crew;
    mainengine mainengine;
    secondengine secondengine;
public:
    void launch();

};
void facade::launch()
{
    crew.crewready();
    mainengine.engineon();
    secondengine.engineon();
}
void crew::crewready()
{
    ready = 1;
    std::cout<<"-- \n Crew is ready";
}

void mainengine::engineon()
{
    ready = 1;
    std::cout<<"-- \n Main engine ready";
}
void secondengine::engineon()
{
    ready = 1;
    std::cout<<"-- \n Second engine ready";
}


int main()
{   std::string option;
    std::cout<<"Type:'LAUNCH' to launch;"<<std::endl<<"Type:'EDIT' to change rocket information"<<std::endl;
    std::cin>>option;
    facade rocket;
    if (option == "LAUNCH"){rocket.launch();}

}
