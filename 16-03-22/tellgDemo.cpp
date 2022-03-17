#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("data1.txt");
    myFile<<"This is file ";
    long pos = myFile.tellp();
    cout<<pos;
    myFile.seekp(pos-3);
    myFile<<"Again my file";
    myFile.seekp(0,ios::end);
    myFile<<"\nLast line";
    myFile.seekp(0,ios::beg);
    myFile<<"First Line\n";
    myFile.close();
    cout<<"Done..!\n";
    return 0;
}