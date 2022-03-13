#include <iostream>

using namespace std;

class a{
    public:
        void displayA(){
                cout<<"A\n";
        }
};

class b{
    public:
        void displayB(){
                cout<<"B\n";
        }
};
class c: public a{
    public:
        void displayC(){
                cout<<"C\n";
        }
};
class d:public b{
    public:
        void displayD(){
                cout<<"D\n";
        }
};
class e: public c,public d{
    public:
        void displayE(){
                cout<<"E\n";
        }
};
class f: public e{
    public:
        void displayF(){
                cout<<"F\n";
        }
};



int main()
{
    a a1;
    b b1;
    c c1;
    d d1;
    e e1;
    f f1;

    a1.displayA();
    // b1.displayA();//error
    // b1.displayC();//error
    // b1.displayD();//error

    f1.displayA();
    f1.displayC();
    f1.displayB();
    f1.displayE();
    

    e1.displayA();
    e1.displayB();
    e1.displayC();
        
    return 0;
}