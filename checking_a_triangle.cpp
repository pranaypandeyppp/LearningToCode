#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

int a,b,c;
cin>>a>>b>>c;
if(a == b && b == c){
    cout<<"equilateral"<<endl;
}
else if(a == b || b == c || a ==c){
    cout<<"isosceles"<<endl;
}
else{
    cout<<"scalen"<<endl;
}


return 0;
}