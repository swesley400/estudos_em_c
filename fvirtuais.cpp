# include <iostream>

class Mae {
    public: 
        virtual void message(){
            std::cout << "eu sou a mae" << '\n';
        }
};

class Filha:  public Mae {
    public: 
        void message(){
            std::cout << "eu sou a filha" << '\n';
        }
};

class Neta: public Filha {
    public: 
        void message(){
            std::cout << "eu sou a neta" << '\n';
        }
};


void responde (Mae * m){
    m ->message();
}

int main(int argc, char **argv){
    
    Mae m; 
    Filha f;
    Neta n;
    

    m.message();
    f.message();
    n.message();


    responde(&m);
    responde(&f);
    responde(&n);


    return 0;
}