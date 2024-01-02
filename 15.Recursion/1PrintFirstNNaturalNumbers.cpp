#include<iostream>
using namespace std;
void printNnatural(int n)
{
    if(n>0)
    {
    printNnatural(n-1);
    cout<<n<<" ";
    }
}
int main() {
int n;
cout<<"Enter value of n";
cin>>n;
cout<<"Natural numbers are: "<<endl;
printNnatural(n);
return 0;
}