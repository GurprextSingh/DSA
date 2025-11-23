#include<iostream>
using namespace std;
int main(){
    //WAP to Print the Follwing Pattern
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // For Character Pattern
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    for(int i=1;i<=4;i++){
        char ch=65;
        for(int j=1;j<=4;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }

}