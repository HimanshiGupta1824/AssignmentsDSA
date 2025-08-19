#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    int i ;
    for(i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]=='u'){
            for(int j = i;j<s.size();j++){
                s[j] = s[j+1];
            }
        }
    }
    s.resize(s.size()-1);
    i--;
    cout<<s;

    return 0;
}