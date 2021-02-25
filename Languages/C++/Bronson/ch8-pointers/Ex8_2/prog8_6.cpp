#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int ARRAYSIZE = 6;    
    int grade[ARRAYSIZE] = {98,87,92,78,85,77};
    int * gPtr = &grade[0];
    
    for (int i = 0; i < ARRAYSIZE; ++i)
    {
        cout << "\nElement " << i + 1 << " = " << gPtr[i] << endl;
    }

    cout << grade << endl;
    cout << "Element 5 --> " << *(grade + 4) << endl;

    

}