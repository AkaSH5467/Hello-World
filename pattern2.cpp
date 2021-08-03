#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows and coloumns";
    cin>>m>>n;

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<= n;j++)
        { if(i==1||i==m )
            {
                cout<<"*";

            }
            
            else if( j==1||j==n)
            {
                cout<<"*";
            }

            else
            { 
                cout<<" ";
                }

        }
        cout<<endl;    
        }
    return 0;
}