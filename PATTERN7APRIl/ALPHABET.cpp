// A A A 
// B B B 
// C C C 
#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;

    int i=1;
    char  count='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            // typecasting will be there 
            // char ch='A'  + i - 1;
            cout<< count;
            count++;
            j++;

        }
        cout<<endl;
        i++;
    }
}