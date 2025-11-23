// WAP to Print the following Pattern
 /* 
    1 2 3
    4 5 6
    7 8 9
 */
 /*  Also print the following pattern
  A B C
  D E F
  G H I */

#include<iostream>
using namespace std;
int main(){
  int num=1;
  for(int i=0;i<3;i++){
    for (int j= 0; j<3; j++ )
    {
       cout<<num<<" ";
       num++;
    }
    cout<<endl;
    
  }
  cout<<endl;
 char ch =65;
  for(int i=0;i<3;i++){
    for (int j= 0; j<3; j++ )
    {
       cout<<ch<<" ";
       ch++;
    }
    cout<<endl;
    
  }

}