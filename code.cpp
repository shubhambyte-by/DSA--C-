#include <iostream>
using namespace std;

int main()
{
    //Sum of odd number 
    int i,n;
    int sum;
    sum = 0;
    i = 0;
    cout<<"Enter value of n :";
    cin>>n;
    while(i<=n)
    {
        if (i%2!=0){
            sum = sum + i;
        
        }
     i = i + 1;
    }
    cout<<sum;
    return 0;
}