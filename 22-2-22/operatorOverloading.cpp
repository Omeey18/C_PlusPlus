#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int x, int y){
        real = x;
        img = y;
    }
    void display(){
        cout<< "real num = "<<real<<endl<<"imaginary num = "<<img<<endl<<endl;
    }
    //overloading
    complex operator +(complex ob){
        complex temp;
        temp.real = real +ob.real;
        temp.img = img +ob.img;
        return temp;
    }
    complex operator -(complex ob){
        complex temp;
        temp.real = real -ob.real;
        temp.img = img -ob.img;
        return temp;
    }
    complex operator *(complex ob){
        complex temp;
        temp.real = real *ob.real;
        temp.img = img *ob.img;
        return temp;
    }
    complex operator /(complex ob){
        complex temp;
        temp.real = real /ob.real;
        temp.img = img /ob.img;
        return temp;
    }
    complex operator %(complex ob){
        complex temp;
        temp.real = real %ob.real;
        temp.img = img %ob.img;
        return temp;
    }
    complex operator++ (){
        complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
    
    complex operator-- (){
        complex temp;
        temp.real = --real;
        temp.img = --img;
        return temp;
    }
    complex operator &&(complex ob){
        complex temp;
        temp.real = real &&ob.real;
        temp.img = img &&ob.img;
        return temp;
    }
    complex operator ||(complex ob){
        complex temp;
        temp.real = real ||ob.real;
        temp.img = img ||ob.img;
        return temp;
    }  
    complex operator <(complex ob){
        complex temp;
        temp.real = real <ob.real;
        temp.img = img <ob.img;
        return temp;
    }  
    complex operator >(complex ob){
        complex temp;
        temp.real = real >ob.real;
        temp.img = img >ob.img;
        return temp;
    } 
};
int main(){
complex c1(10,50), c2(20,60);
complex c3;
c1.display();
c2.display();
c3.display();
cout<<"starting action "<<endl;
cout<<"1. add "<<endl;
c3 = c1+c2;
c3.display();
cout<<"2. substraction "<<endl;
c3 = c1-c2;
c3.display();
cout<<"3. multiplication "<<endl;
c3 = c1*c2;
c3.display();
cout<<"4. division "<<endl;
c3 = c1/c2;
c3.display();
cout<<"5. mod "<<endl;
c3 = c1%c2;
c3.display();
cout<<"6. increment in c1"<<endl;
++c1;
c1.display();
cout<<"7. decrement in c2"<<endl;
--c2;
c2.display();
cout<<"8. logical and "<<endl;
c3 = c1&&c2;
c3.display();
cout<<"9. logical or "<<endl;
c3 = c1 || c2;
c3.display();
cout<<"10. less then"<<endl;
c3 = c1 < c2;
c3.display();
cout<<"11. greater then"<<endl;
c3 = c1 > c2;
c3.display();
return 0;
}
