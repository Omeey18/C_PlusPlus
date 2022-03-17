#include <iostream>

using namespace std;

// int sum(int a, int b){
//     return a-b;
// }

template <typename T,typename U>
void swap(T &n1, T &n2){
    T rs;
    rs = n1;
    n1 = n2;
    n2 = rs;
}

int main()
{
    int A= 10;
    int B =5;
    char c1 ='a';
    char c2 = 'b';
    cout<< "Before swap  "<<endl<<"Value of A: "<<A<<"\nValue of B: "<<B;
    swap(A,B);
    cout<< "\nAfter swap  "<<endl<<"Value of A: "<<A<<"\nValue of B: "<<B;
    cout<< "\nBefore swap  "<<endl<<"Value of C1: "<<c1<<"\nValue of C2: "<<c2;
    swap(c1,c2);
    cout<< "\nAfter swap  "<<endl<<"Value of C1: "<<c1<<"\nValue of C2: "<<c2;
    
    return 0;
}