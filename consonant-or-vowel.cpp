#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

char input;
cin>>input;
if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
    cout<<"vowel"<<endl;
}
else{
    cout<<"consonant";
}

return 0;
}