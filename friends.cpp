#include <iostream>

class Casa {
    public: 
        std::string comp = "123";
    
    protected:
        char essid[5] = {'H', 'o', 'm', 'e', '\0'};

    private: 
        std::string passwd = "abc" + comp;

    friend class Vizinho;

    
};

class Vizinho {
    public: 
        void controller(){
            Casa c;
            std::cout << "Isso aqui está funcionando " <<  c.passwd << '\n';
        }
        void teste() {
            std::cout << "Hello Nano" << "\n";
        }
};

int main (int argc, char **argv) {
    Vizinho v;

    v.controller();
	v.teste();	   
 return 0;
}
