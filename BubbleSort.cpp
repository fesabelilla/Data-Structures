#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std ;


int main()
{
    int n ;
    cout << " Enter Array Size : ";
    cin >> n;

    int x[n];
    cout << "Enter Some Positive Number : ";
    for(int i=0;i<n;i++)
        cin>>x[i];

    int k = n;
     while(k!=0){

        int t =0 ;
        for(int j=0;j<=k-1;j++){
            if(x[j]>x[j+1]){

                swap(x[j],x[j+1]);
                t=j;
            }

        }
        k = t;
     }

     cout<<"After Bubble sort the value is : ";

 for(int i=0;i<n;i++)
        cout<<" "<<x[i];


    return 0;
}
