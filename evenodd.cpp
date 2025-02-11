#include<iostream>
using namespace std ;

bool iseven(int a){
    if(a&1){
        // odd
        return 0;
    }
    // even 
    return 1;

}
int main(){

    int num1;
    cin>>num1;

    if(iseven(num1)){
        cout<<"the number is even"<<endl;

    }else{
        cout<<"the number is odd "<<endl;
    }

}