#include <iostream>
#include "calculateSequenceLength.h"

using namespace std;

int main()
{
    int num;
    cout << "Enter the integer: ";
    cin >> num;
    int n = getCollatzSequenceLength(num);
    cout << "The collatz sequence length of "<< num << " is " << n << endl;

    return 0;
}
