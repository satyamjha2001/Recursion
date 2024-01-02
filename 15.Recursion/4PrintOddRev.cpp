#include <iostream>
using namespace std;
void printNOdd(int n)
{
    if (n > 0)
    {
        cout << " " << 2 * n - 1;
        printNOdd(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Odd Natural numbers in reverse order are: " << endl;
    printNOdd(n);
    return 0;
}