// A B C
// B C D 
// C D E 

#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch;
    while(i<=n){
        int j=1;

        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;

    }
}