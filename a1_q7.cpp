#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    if(1 <= n <= 100)
    
    {
        for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int sp = 1; sp < i; sp++)
        {
            /* code */
            cout<<"     ";
        }
       cout<<"*"<<endl;
    }
    }
    
    else{
        cout<<"try again";
    }
   
    
    return 0;
}
