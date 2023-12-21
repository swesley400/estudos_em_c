#include <iostream>

class Qualquer {
    public: 
        Qualquer(){
            std::cout << "Sou chamado no inicio" << '\n';
        };

        ~Qualquer(){
            std::cout << "Sou chamado no fim";
        }
};

int main(int argc, char **args){
    Qualquer q;
    return 0;
}