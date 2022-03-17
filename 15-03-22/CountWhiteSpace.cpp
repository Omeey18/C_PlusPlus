#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream readFile;
    //string str;
    int count = 0;
    char c;
    readFile.open("p1.File.txt",ios::in); // opeing file in read mode only
    //cout << myFile;
    if (!readFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {
        //cout << "File is opened..!\n";
        while (!readFile.eof())
        {
            /* code */
            //myFile >> str;
            //readFile >> str;
            readFile.get(c);
            if(c==32)
                count++;//counting space in file 
        }
        cout<<"Total space is:"<<count<<endl;
       
    }
    readFile.close();
    return 0;
}