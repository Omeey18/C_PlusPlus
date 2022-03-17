#include <iostream>  
using namespace std;  

class person{
    int age;
    public:
        person(int x){
            age=x;
        }
        void display(){
            cout<<"Age="<<age;
        }
        person olderperson(person p){
            if(age>p.age)
                return *this;
            else
                return p;
        }
};

// class Test{
//     int mark;
//     float spi;
//     public:
//         void setData(int mark, float spi){
//             this->mark = mark;
//             this->spi = spi;
//         }
//         void dis(){
//             cout<<"Marks ="<<mark<<endl;
//             cout<<"SPI ="<<spi<<endl;
//         }
// };

int main(){
    // Test t1;
    // t1.setData(600,9.5);
    // t1.dis();
    person r(35), h(30);
    person o=r.olderperson(h);
    o.display();
    return 0;

}