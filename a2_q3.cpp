#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter n"<<endl;

    cin>>n;
    if (1 <= n <= 10)
    {
       
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        /* code */
        if ((i+j)<=n)
        {
            /* code */
            cout<<"     ";
        }
        
        else{
            cout<<"*    ";
        }
 
      }
  cout<<endl;
    }
     return 0;
}
  
    }
   
