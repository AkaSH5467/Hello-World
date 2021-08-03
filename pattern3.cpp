
/* Pattern to print
    
    
    *****
    ****
    ***
    **
    *
  */

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the number of iteration required";
    cin>>n;

    for(int i=n;i<=1;i--)
    {
        for(int j=1 ; j<i;j++)
        {
            cout<<"*";

        }
        cout<<endl;    }
    return 0;
}
