#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    string str;
    int count=0;
    myFile.open("p2.File.txt",ios::in); // opeing file in read mode only
    //cout << myFile;
    if (!myFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {
        cout << "File is opened..!\n";
        
        
        while (!myFile.eof())
        {
            /* code */
            myFile >> str;
            count++;
            // readbuf = getc(myFile);
        }

        cout<<"Total words in files : "<<count<<"\n";
       
    }
    return 0;
}