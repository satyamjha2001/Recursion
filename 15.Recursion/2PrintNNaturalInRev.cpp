#include<iostream>
using namespace std;
void printNnaturalRev(int n)
{
    if(n>0)
    {
    cout<<n<<" ";
    printNnaturalRev(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n";
cin>>n;
cout<<"Natural numbers in reverse order are: "<<endl;
printNnaturalRev(n);
return 0;
}