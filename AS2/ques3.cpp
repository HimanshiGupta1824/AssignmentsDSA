#include<iostream>
using namespace std;
int main(){
    // n= 11
    int arr[100] = {}; 
int n;
cout<<"enter no of elements";
cin>>n;

cout<<" enter n-1 unique elements from 1 to n";
for(int i = 0;i<n-1;i++){
    cin>>arr[i];
}

for(int i = 0;i<n;i++){
    if(arr[i]!= i+1){
        cout<<" element missing is " << i+1;
        break;
    }
}


return 0;
}