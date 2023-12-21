#include <iostream>

class Pessoa {
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


int main(int argc, char ** argv){
    Habilidades hab;

    std::cout << "O nome dele é\n"; 
    hab.nome();
    std::cout << "A habilidade dele é:\n ";
    hab.idioma();
    return 0;  

}
