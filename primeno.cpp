#include<iostream>
using namespace std ;

bool isprime(int n){
     for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }else{
            return 1;
        }
    }

}
int main(){
    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"is prime number "<<endl;

    }else{
        cout<<"not an prime number"<<endl;
    }
}