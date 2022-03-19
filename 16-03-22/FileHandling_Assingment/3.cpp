#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream myFile;
    string str;
    char a[100];
    int count=0,flag =0;
    myFile.open("The_counter.txt",ios::in); // opeing file in read mode only
    
    if (!myFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {    
        while (myFile>>str)
        {
            /* code working  */
                if(str.at(0) == 'e' | str.at(0) == 'E'){
                    count++;
                }
        }
        cout<<"Total words are START with 'E' : "<<count<<"\n";  
    }
    return 0;
}