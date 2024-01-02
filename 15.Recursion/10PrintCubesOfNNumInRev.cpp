#include<iostream>
using namespace std;
void printNnatural(int n)
{
    if(n>0)
    {
    cout<<n*n*n<<" ";
    printNnatural(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n";
cin>>n;
cout<<"Cubes of natural numbers in reverse order are: "<<endl;
printNnatural(n);
return 0;
}