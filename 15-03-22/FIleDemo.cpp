#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    string readbuf;
    myFile.open("p1.File.txt", ios::in); // opeing file in read mode only
    //cout << myFile;
    if (!myFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {
        cout << "File is opened..!\n";
        getline(myFile,readbuf);// read whole one line at a time
        cout<<"With readLine \n"<<readbuf<<endl;

        // while (!myFile.eof())
        // {
        //     /* code */
        //     myFile >> readbuf;
        //     // readbuf = getc(myFile);
        //     cout << readbuf << " ";
        // }
    }
    return 0;
}