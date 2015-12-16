#include <iostream>

using namespace std;

int test(const int *, int);

int main()
{


    int b;
    const int N = 5;
    int arr1[N] = {0,1,2,3,4};
    cout << "before: " << arr1[3] << endl;
    test(arr1,N);
    cout << "after: " << arr1[3] << endl;
    cout << "Hello World!" << endl;
    arr1[2]=51;

    return 0;
}

int test(const int * , int)
{
    cout << "hello1\n";
    return 0;
}
