#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for (int row  = 1; row<=n; row++)
    {
        for (int col  = n ; col>=row; col--)
        {
            /* code */
            cout<<"*    ";
        }
        cout<<endl;
    }
    
    return 0;
}
