
#include <iostream>
#include <cstring>
using namespace std;

void printArray(const int * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const double * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const float * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}
 
void printArray(const char * array, int count)
{
    for (int ix = 0; ix < count; ix++)
        cout << array[ix] << "   ";
    cout << endl;
}

int main()
{
 
    const int iSize = 10,
              dSize = 7,
              fSize = 10,
              cSize = 5;

    int    iArray[iSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double dArray[dSize] = {1.2345, 2.234, 3.57, 4.67876, 5.346, 6.1545, 7.7682};
    float  fArray[fSize] = {1.34, 2.37, 3.23, 4.8, 5.879, 6.345, 73.434, 8.82, 9.33, 10.4};
    char   cArray[cSize] = {"MARS"};


    cout << "\n int:\n"; printArray(iArray, iSize);
   
    cout << "\n double:\n"; printArray(dArray, dSize);

    cout << "\n float:\n"; printArray(fArray, fSize);
  
    cout << "\n char:\n";printArray(cArray, cSize);
    system("pause");
    return 0;
}
