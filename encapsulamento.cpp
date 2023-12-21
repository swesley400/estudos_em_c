#include <iostream>

class Pessoa {
    private:
        int  idade = 27;
    public: 
        void nome(){
            std::cout << "Wesley Santos" << "\n";
        }
};

class Habilidades : public Pessoa {
    public: 
        void idioma(){
            std::cout << "Portugues Brasileiro\n";
        }
};

class Dados : public Habilidades {};


int main(int argc, char ** argv){
    Dados dado;

    std::cout << "O nome dele é\n"; 
    dado.nome();
    std::cout << "A habilidade dele é:\n ";
    dado.idioma();

    return 0;  

}
