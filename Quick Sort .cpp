#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int movement, compare;
int arry[200];

float QUICKSORT(int f , int l){
float starrytTime = clock();
int i , j ;

if(f<l){

    i = f+1;
    j = l;
    while(arry[i]<arry[f]){
        i++;
        compare++;
    }
    while(arry[j]>arry[f]){
        j--;
        compare++;
    }
    while(i<j){
        swap(arry[i],arry[j]);
        movement++;
        while(arry[i]<arry[f]){
            i++;
            compare++;
        }
        while(arry[j]>arry[f]){
            j--;
            compare++;
        }

    }
     swap(arry[j],arry[f]);
        movement++;
        QUICKSORT(f,j-1);
        QUICKSORT(j+1,l);
}
float endTime = clock();
    return endTime - starrytTime;

}

int main()
{
 int n ;
 cout<<"Enter array Size : " ;
 cin>>n;
 for(int i =0;i<n;i++){
    arry[i]=rand()%1000;
 }
 cout<<"Unsorted array :";
 for(int i = 0 ; i< n ; i++){
    cout<<arry[i]<<" ";
 }
 cout<<endl;
 QUICKSORT(0,n-1);
 cout<<endl;
 cout<<"Sorted array : " ;
 for(int j =0 ;j<n;j++ )
    cout<<arry[j]<<" ";

  cout<<endl;

    float time = QUICKSORT(0,n-1);

    cout<<endl;

    cout<< "Required time: "<< time/CLOCKS_PER_SEC <<" seconds"<< endl;
    cout<< "Number of data comparryison: " << compare<< endl;
    cout<< "Number of movement: " << movement << endl;

    return 0;
}

