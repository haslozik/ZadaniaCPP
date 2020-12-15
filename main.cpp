#include <iostream>
#include <bitset>
#include <stdio.h>

using namespace std;

int main() {
    
	int a;
    int b;

    cin>>a;
    cin>>b;

    cout<<"a= "<<bitset<8>(a).to_string();

    cout<<"b= "<<bitset<8>(b).to_string();

    cout<<"a|b= "<<bitset<8>(a|b).to_string();

    cout<<"a&b= "<<bitset<8>(a&b).to_string();

    cout<<"a^b= "<<bitset<8>(a^b).to_string();

    cout<<"~a= "<<bitset<8>(~a).to_string();

    cout<<"~b= "<<bitset<8>(~b).to_string();

    cout<<"a<<=4 "<<bitset<8>(a<<=4).to_string();

    cout<<"b>>=1 "<<bitset<8>(b>>=1).to_string();
    
    
    return 0;
}

