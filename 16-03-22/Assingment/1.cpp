#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    fstream myFile;
    string str;
    char a[100];
    int count=0;
    myFile.open("The_counter.txt",ios::in); // opeing file in read mode only
    
    if (!myFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {    
        while (!myFile.eof())
        {
            /* code */
            myFile>>str;
            if(str == "the" | str == "The" | str == "THE"){
                //cout<<str<<"    ";
                count++;
            }
        }
        cout<<"Total Count of 'THE' in files : "<<count<<"\n";  
    }
    return 0;
}