#include <iostream>
using namespace std;


void Swap( int& a,  int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x1 = 10;
    int x2 = 20;

    cout << "X1="<< x1 <<" X2="<< x2 <<endl;
    Swap(x1, x2);
    cout << "X1=" << x1 << " X2=" << x2 << endl;

   
    return 0;
}

