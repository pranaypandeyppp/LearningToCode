#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){
    for(int i=0;i<=n-1;i++){
    if(arr[i]==key){
        cout<<i;
        }
} return -1;
}

int main(){
int n;
cin>>n;
int key;
cin>>key;
int arr[n];
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
cout<<linearsearch(arr,n,key);

    


return 0;
}