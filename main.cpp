#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Add
{
public:
    int operator()(const int a, const int b)
    {
        this->count++;
        return a + b;
    }

    int count;
};

int main()
{
    Add a;
    cout << a(1,2) << endl;
    Add b;
    cout << a.count << endl;
    cout << b.count << endl;
}
