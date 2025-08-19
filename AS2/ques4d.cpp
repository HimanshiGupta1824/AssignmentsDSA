#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<" enter a string";
    getline(cin,s);
    int n = s.length();
    for(int i =1;i<=n-1;i++){
         for(int j =0;j<=n-1-i;j++){
            if(s[j]>s[j+1]){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1]= temp;
            }
         }
    }
    cout <<s;
    return 0;
}