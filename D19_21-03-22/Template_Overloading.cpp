#include <iostream>

using namespace std;

void sum(int a, int b){
    cout<<"Sum: "<<a+b<<endl;
}
template <class T1>
void sum(T1 a, T1 b, T1 c){
    cout<<"Sum: "<<a+b+c<<endl;
}

template <class T1, class T2>
void sum(T1 a, T2 b, T1 c){
    cout<<"Sum: "<<a+b+c<<endl;
}


int main()
{
    int a=2,b=3,c=4;
    double B=5.5;
    sum(a,b);//calling normal funC
    sum(a,B,c);//calling template funC 2
    sum(a,b,c);//calling template funC 1

    return 0;
}
