#include <iostream>
using namespace std;
void printNOdd(int n)
{
    if (n > 0)
    {
        printNOdd(n - 1);
        cout << " " << 2 * n;
    }
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Even Natural numbers are: " << endl;
    printNOdd(n);
    return 0;
}