#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count;
    float sum;
    cout << "Count: ";
    cin >> count;
    float *arr = new float [count];
    for (int i=0; i<count; i++) {
        cin >> arr[count];
        sum+=arr[count];
    }
    delete [] arr;
    cout << sum << endl;



return 0;
} 