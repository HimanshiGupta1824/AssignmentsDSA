#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<" enter the string";
    getline(cin,s);
   
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        char temp = s[i];
        s[i] = s[j];
        s[j]= temp;
        i++;
        j--;
    }
    
    cout<<" the reversed string is "<<s;
}