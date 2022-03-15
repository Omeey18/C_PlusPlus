#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream readFile,writeFile;
    //string str;
    int count = 0;
    char c;
    readFile.open("p1.File.txt",ios::in); // opeing file in read mode only
    writeFile.open("writefile.txt",ios::out);
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
            writeFile << c;
           // writeFile << str << " ";
            // readbuf = getc(myFile);
        }
        cout<<"Copy Done...!\n";
        cout<<"Total space is:"<<count<<endl;
       
    }
    readFile.close();
    writeFile.close();
    return 0;
}