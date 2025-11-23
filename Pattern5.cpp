/* WAP to Print follwing Pattern 
1 
2 2
3 3 3
4 4 4 4
 */
 /* Also print Character pattern for 
 A 
 B B 
 C C C 
 D D D D */
#include<iostream>
using namespace std;
int main(){
    int n=4, num=1;
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<<num<<" ";
       }
       num++;
       cout<<endl;
    }
    cout<<endl;
    char ch=65;
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<<ch<<" ";
       }
       ch++;
       cout<<endl;
    }
    
    
    
}
