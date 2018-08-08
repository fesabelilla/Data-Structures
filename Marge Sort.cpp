#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;


int movement, compare ,p,q,r ;

float mergearray(int num[] , int p , int q , int r)
{
    float starrytTime = clock();
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1] , R[n2+1];
    for(int i = 0 ; i < n1 ; i++)
    {
        L[i] = num[p+i];
    }
    for(int j = 0 ; j < n2 ; j++)
    {
        R[j] = num[q+1+j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    for(int i = 0 , j = 0 , k = p ; k <= r ; k++)
    {
        if(L[i] <= R[j])
        {
            compare++;
            num[k] = L[i++];
            movement++;
        }
        else
        {
            compare++;
            num[k] = R[j++];
            movement++;
        }
    }
    float endTime = clock();
    return endTime - starrytTime;
}

void mergeSort(int num[] , int p , int r)
{
    if(p<r)
    {
        int q = floor((p+r)/2);
        mergeSort(num , p , q);
        mergeSort(num , q+1 , r);
        mergearray(num, p , q , r);
    }
}

int main()
{
    srand(time(NULL));
    int n;
    cout << "Enter the number of numbers to sort : ";
    cin >> n;
    int num[n];
    for(int i = 0 ; i < n ; i++)
        num[i] = rand()%1000;

    num[0] = 0;
    cout << "The Unsorted Numbers : ";
    for(int i = 0 ; i < n ; i++)
        cout << num[i] << " ";

    cout << endl;

    mergeSort(num , 0 , n-1);
     cout<<endl;
    cout << "The Sorted Numbers : ";
    for(int i = 0 ; i < n ; i++)
    cout << num[i] << " ";

     float time = mergearray(num,p,q,r);

    cout<<endl;
    cout<<endl ;
    cout<< "Required time: "<< time/CLOCKS_PER_SEC <<" seconds"<< endl;
    cout<< "Number of data comparryison: " << compare<< endl;
    cout<< "Number of movement: " << movement << endl;

}

