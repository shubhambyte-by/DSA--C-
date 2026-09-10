#include<iostream>
using namespace std;

int main() {
    int a = 23;
    char x = 'a';
    float PI = 3.14F;
    cout<<typeid(PI).name()<<endl;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<typeid(23).name()<<endl;
    return 0;
}
