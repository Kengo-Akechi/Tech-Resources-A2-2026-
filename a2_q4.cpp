#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    if (1 <= n <= 100)
    {
       for (int i = 1; i <=n; i++)
       {

       for (int j = 1; j <=n; j++)
       {
         if (i>j)
         {
            cout<<"     ";
         }
         
         else{
            cout<<"*    ";

         }
       }
       
      
      cout<<endl;
       }
    }

    return 0;
}
