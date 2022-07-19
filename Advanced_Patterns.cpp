//0-1 pattern

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if(j%2==0){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
    cout<<endl;
}
return 0;
}

// amstrong or not

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int armstrong = 0;
int origi = n;
while(n>0){
    int lastdigit = n%10;
    armstrong+=pow(lastdigit,3);
    n = n/10;
    }
if(armstrong==origi){
        cout<<"yeah boii, armstrong";
    }
else{
    cout<<"naah boi, not an armstrong";
}

// inverted pattern

return 0;
}

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i = n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}

// number pattern

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<"   ";
    }
    cout<<endl;
}
return 0;
}

// palindromic pattern

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int j;
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    int k=i;
    for(;j<=n;j++){
        cout<<k;
        k--;
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k;
        k++;
    }
    cout<<endl;
}


return 0;
}

// reverse a number

#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int reverse = 0;
while(n>0){
    int lastdigit = n%10;
    reverse = reverse*10+lastdigit;
    n=n/10;
}
cout<<reverse;
return 0;
}

// rhombus pattern

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-i;j++){
        if(j<=n-i){
            cout<<"  ";
        }
        else {
            cout<<"* ";
        }
    }
    cout<<endl;
}
return 0;
}

// star pattern

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}