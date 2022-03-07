#include <iostream>
using namespace std;
class grandfather
{
public:
    void dada_car()
    {
        cout << "Got access of Grandfather's car\n";
    }
};


class father
{
public:
    void father_car()
    {
        cout << "Got access of father's car\n";
    }
};
class son : public father, public grandfather
{
public:
    void son_car()
    {
        cout << "Got access of son's car\n";
    }
};
int main()
{
    grandfather g1;
    father f1;
    son s1;

    g1.dada_car();
    f1.father_car();
    s1.dada_car();
    s1.father_car();
    s1.son_car();
    return 0;
}