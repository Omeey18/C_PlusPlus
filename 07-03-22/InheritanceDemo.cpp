#include <iostream>

using namespace std;
class person
{
    void dance()
    {
        cout << "Dancing\n";
    }

protected:
    int height=5, weight=55;
public:
    void talk()
    {
        cout << "Talking \n";
    }
    void walk()
    {
        cout << "Walking  \n";
    }
    void run()
    {
        cout << "running \n";
    }
};
class Doctor : private person
{
public:
    void diagnosis()
    {
        cout << "diagnosis\n";
    }
};
class businessman : private person
{
public:
    void run_business()
    {
        cout << "Running Business\n";
    }
};
class footballer : private person
{
public:
    void play()
    {
        cout << "Playing football\n";
    }
};
int main()
{
    Doctor d1;
    businessman b1;
    footballer f1;

    cout << "Doctor \n";
    d1.diagnosis();
    d1.run();
    d1.dance();

    cout << "\nBusinessman \n";
    b1.run_business();
    b1.run();
    b1.dance();

    cout << "\nFootballer \n";
    f1.talk();
    f1.play();
    return 0;
}