#include <iostream>
using namespace std;

int main()
{
	cout<<"Even number between 1 to 100 are"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i%2 == 0)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
