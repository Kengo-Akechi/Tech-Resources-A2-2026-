#include<iostream>
using namespace std;

int main(){
    int row;
    
    cout<<"enter"<<endl;
   // cout<<"Enter n"<<endl;
   int n;
    cin>>n;
     row=(n+1)/2;

if (1<=n<=100)
{
  


}
    for (int i = 1; i <= row; i++){
     
  if (n%2==0)
  {
break;
  }
  
        for (int space = 1 ; space <= row-i; space++){
            /* code */
            cout<<"    ";
        }

        for (int j = 1; j <= (2*i-1); j++)    {
            /* code */
         cout<<"*   ";
        }
        
        cout<<endl;
        }


        for (int i_ =1; i_ < row; i_++)
        {
            /* code */
            for (int space_ = 1; space_ <= i_; space_++)
            {
                /* code */
                cout<<"    ";
            }

            for (int j_ =1; j_ <= 2*(row-1)-(2*i_-1); j_++)
            {
                /* code */
                cout<<"*   ";
            }
            
           cout<<endl; 
        }
   


        return 0;
}
  
   
  
        

    
 
