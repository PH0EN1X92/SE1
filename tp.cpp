#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "vvedite chisla: \n" << "x = "; 
    cin >> x;
    cout << "y = "; 
    cin >> y;
    
    cout << x << "+" << y << "=" << x+y << endl;
    cout << x << "-" << y << "=" << x-y << endl;
    cout << x << "*" << y << "=" << x*y << endl;
    cout << x << "/" << y << "=" << x/y << endl;
    return 0; 
}
