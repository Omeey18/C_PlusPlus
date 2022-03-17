#include <iostream>

using namespace std;

template <class T>
class Addition{
    public:
        T add(T n1, T n2){
            T res;
            res = n1+n2;
            return res;
        }
};

int main()
{
    Addition<int> ob1;
    Addition<char> ob2;
    int a = 10, b=20,c;
    char A='NULL',B='NULL',C;
    c = ob1.add(a,b);
    cout<<"Sum of int: "<<c<<endl;
    c= ob2.add(A,B);
    cout<<"Sum of Char: "<<C<<endl; 
    return 0;
}