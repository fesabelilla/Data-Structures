#include<bits/stdc++.h>
using namespace std;

float selection_sorter(int arr[],int size);
int movement=0, compare=0;

int main()
{
        int size=20000;
        int arr[size];

        srand(time(NULL));

        int i ;
        for( i=0; i<size; i++){

        arr[i] = rand()%1000;

        }

        float time = selection_sorter(arr,size) / CLOCKS_PER_SEC;

        cout<<"Required time: "<<time<<"seconds"<<endl;
        cout<<"Number of data movement: "<<movement<<endl;
        cout<<"Number of comparison: "<<compare<<endl;

return 0;
}

  float selection_sorter(int arr[],int size)
{
        float StartTime = clock();

        for(int j=size-1; j>=1; j--){

        int t=0;

        for(int k=1; k<=j; k++){
        compare++;
        if(arr[t]<arr[k])
        t=k;
        }
        swap(arr[t],arr[j]);

        movement += 2;
        }



        float EndTime = clock();
        return EndTime-StartTime;

}
