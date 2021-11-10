
#include <iostream>
using namespace std;


int main()
{
    
    int arraySize = 100;
    srand(int(time(NULL)));
    
    int randNumber[100];
    for (int i = 0; i < arraySize; i++)
    {
        randNumber[i] = rand() % 100 + 1;
    }
   
    for (int i = 0; i < arraySize; i++)
    {
        cout << randNumber[i] << endl;
    }
    return 0;
}


