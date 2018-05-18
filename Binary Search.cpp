
//Binary Search using Selection Sort
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int size);
void BinarySearch(int arr[], int size, int a);
bool flag = false;

int main()
{
    int size = 20000;
    int arr[size], p ;

    for(int i=0; i<size; i++)
    arr[i] = rand()%1000;

    cout<<"Find Number : ";
    cin>>p;
    SelectionSort(arr, size);
    BinarySearch(arr, size, p);
    for(int i=0;i<size;i++)
    cout<<i+1<<": "<<arr[i]<<endl;

    if(flag)
    cout<<"Found";
    else
    cout<<"Not Found";

return 0;

}


void SelectionSort(int arr[],int size)
{
    for(int j=size-1; j>=1; j--){

    int t=0;
    for(int k=1; k<=j; k++){

    if(arr[t]<arr[k])
    t = k;

    }

    swap(arr[t],arr[j]);
     }

}


void BinarySearch(int arr[], int size, int p)
{
    int lowestValue=0, highestValue=size, midValue;

    while(lowestValue<= highestValue){

    midValue = (lowestValue+highestValue)/2;

    if(p < arr[midValue])
    highestValue = midValue;

    else if(p > arr[midValue])
    lowestValue = midValue;

    else if(p == arr[midValue]){
    flag = true;
    break;
    }
}
}

