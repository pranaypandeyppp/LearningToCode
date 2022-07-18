// half pyramid after 180 degree rotation
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=n-i){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }
    }
    cout<<endl;
}
return 0;
}


// inverted half pyramid
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i = n;i>=1;i--){
    for(int j = i;j>=1;j--){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}



// space rectangle
#include<iostream>
using namespace std;
int main(){
int row, col;
cin>>row>>col;
for(int i = 1;i<=row;i++){
    for(int j = 1;j<=col;j++){
        if(i == 1 || i == row){
            cout<<"* ";
        }
        else if(j ==1 || j==col){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
return 0;
}



// square pattern
#include<iostream>
using namespace std;

int main(){

int rows,col;
cin>>rows>>col;
for(int i=1;i<=rows;i++){
    for(int j = 1;j<=col;j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}



// half pyramid using numbers
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}



// flyods triangle
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

return 0;
}




// butterfly pattern
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    int num = 2*n-2*i;
    
    for(int j=1;j<=num;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    int num = 2*n-2*i;
    
    for(int j=1;j<=num;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}



