#include<iostream>
using namespace std;
int main(){
int arr[100]  = {};

int x;
cout<<"enter the element to be searched"<<" ";
cin>>x;

int n ;
cout<<"enter the no of elements"<<" ";
cin>>n;

for(int i =0;i<n;i++){
    cin>>arr[i];
}

// sorting the array before binary search
for(int i = 1;i<=n-1;i++){
    for(int j = 0;j<=n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

// sorted array 
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


//binary search
int i = 0;
int j = n-1;
bool found = false;
while(i<=j){
    int mid = (i+j)/2;
    if(arr[mid]==x) {
        found = true;
        cout<<"element in sorted array is  at index no "<<mid;
        break;
    }
    else if(arr[mid]>x) j = mid-1;
    else i = mid+1;
}

if(!found ) {
    cout<<"element not found";
}
return 0;
}