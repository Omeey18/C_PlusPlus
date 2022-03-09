#include <iostream>  
using namespace std;  

class base1{
    public:
        base1(){
            cout<<"Base 1 constructor\n";
        }
        ~base1(){
            cout<<"Base 1 destructor\n";
        }
        void dis1(){
            cout<<"Base 1 Dis1\n";
        }
};
class base2{
    public:
        base2(){
            cout<<"Base 2 constructor\n";
        }
        ~base2(){
            cout<<"Base 2 destructor\n";
        }
        void dis2(){
            cout<<"Base 2 Dis2\n";
        }
};
class derived : public base1, public base2{
    int j;
    public:
        derived(){
            cout<<"derived constructor\n";
        }
        
        ~derived(){
            cout<<"derived destructor\n";
        }
        void dis3(){
            cout<<"Derived Dis3\n";
        }
       
};
int main(){

    base1 *ptr;
    base2 b2;
    derived *ptr_D;
    ptr->dis1();
    ptr_D->dis1();
}