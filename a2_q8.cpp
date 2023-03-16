#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for (int i = n; i >=1; i--)
    {
        /* code */
        for (int j = 1; j < i ; j++)
        {
            /* code */
        cout<<"     ";
        }
        
       cout<<"*";
       cout<<endl;
        
    }
    
    return 0;
}
