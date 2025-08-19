#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"enter 1st string";
    getline(cin,s1);
    string s2;
    cout<<" enter 2nd string";
    getline(cin,s2);
    string s = s1+s2;
    cout<<"the result is "<<s;
}