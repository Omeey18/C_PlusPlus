#include <iostream>  
using namespace std;  

class base1{
    protected:
    int x;
    public:
        base1(int i){
            x =i;
            cout<<"Base 1 constructor\n";
        }
        ~base1(){
            cout<<"Base 1 destructor\n";
        }
};
class base2{
    protected:
    int y;
    public:
        base2(int i){
            y =i;
            cout<<"Base 2 constructor\n";
        }
        ~base2(){
            cout<<"Base 2 destructor\n";
        }
};
class derived : public base1, public base2{
    int j;
    public:
        derived(int x, int y, int z): base1(y), base2(z){
            j = x; 
            cout<<"derived constructor\n";
        }
        
        ~derived(){
            cout<<"derived destructor\n";
        }
        void show(){
            cout<<x<<" "<<j<<" "<<y<<endl;
        }
};
int main(){
    // base1 b1(2);
    // base2 b2(3);
    derived d2(3,4,5);
    d2.show();
}