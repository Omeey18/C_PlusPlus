#include <iostream>
using namespace std;

void demo() throw(int, double, char)
{
    int a;
    cout << "Enter the number: " << endl;
    cin >> a;

    if (a == 1)
        throw a; // throwing integer exception
    else if (a == 2)
        throw 'A'; // throwing character exception
    else if (a == 3)
        throw 4.5; // throwing float exceptiom
}

int main()
{

    try
    {
        demo();
    }
    catch (int n)
    {
        cout << "Exceptiomn caught" << endl;
    }
    catch(char a){
        cout<<"char";
    }

    cout << "End of program" << endl;
}

// terminate called after throwing an instance of 'char'
// Aborted (core dumped) -------------------------Error because we have restricted demo function to throw only int and double