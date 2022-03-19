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
                int length = str.length()-1;
                if(str.at(length) == 's' | str.at(length) == 'S'){
                    count++;
                }
        }
        cout<<"Total words are END with 'S' : "<<count<<"\n";  
    }
    return 0;
}