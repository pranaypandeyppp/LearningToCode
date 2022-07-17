// DataTypes - Primitive, Derived, User Defined
// Primitive - Integer, Float, Character, Boolean
// Derived - Function, Array, Pointer, Reference
// User Defined - Class, Structure, Union, Enum 
// Integer - int (4 bytes = 32 bits) - Range(unsigned) - 
//                                     0 to 2^32 - 1
// Range(signed) - 0 to -2^31 to 2^31 - 1 (1 bit for sign)
// Float - 4 bytes up to 7 decimal digits
// Doubble - 8 bytes up to 15 decimal digits
// Character - 1 byte (ASCII Table is used to store these)
// char representation - ''
// int some_char = 'a' ---> then some_char will return 97(ascii value)
// Boolean - 1 byte True(1), False(0)
//   *** sizeof() -- To know the size of a Variable ***
// integer - signed - 4 bytes, unsigned - 4 bytes but more range
// long 8 bytes, short - 32 bytes
// short int, long int ---> you modify the types of int like this


#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

int a;
short int b;
cin>>a>>b;
cout<<"size of integer is "<<sizeof(a)<<endl;
cout<<"size of short integer is "<<sizeof(b)<<endl;

return 0;
}

// Just learnt that you should not use ampersand(&) sign while naming a c++ file in vs code