#include <iostream>

using namespace std;

// int sum(int a, int b){
//     return a-b;
// }

template <typename T,typename U>
U sum(T n1, U n2){
    T rs;
    rs = n1 + n2;
    return rs;
}

int main()
{
    int A= 10, B =10,C;
    long a=11,b=22,c;
    C = sum(A,B);
    cout<< "The sum of int: "<<C<<endl;
    c = sum(a,b);
    cout<<"The sum of long: "<<c<<endl;
    return 0;
}