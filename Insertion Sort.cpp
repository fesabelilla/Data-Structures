#include<bits/stdc++.h>
using namespace std;

float insertion_sorter(int arr[], int size);
int movement=0, compare=0,r=0;

int main()
{

    int size=20000;
    int arr[size+1];
    srand(time(NULL));

    arr[0] = -100000;
    for(int i=1; i<=size; i++)
    arr[i] = rand()%1000;

    float time = insertion_sorter(arr, size);

    cout<< "Required time: "<<time<<" seconds"<<endl;
    cout<< "Number of data movement: "<<movement<<endl;
    cout<< "Number of data compare: "<<compare<<endl;

    return 0;
    }


    float insertion_sorter(int arr[], int size)
    {

    float StartTime = clock();
    int j ,i, t;

   for(j=2; j<=size; j++){
    i = j-1;
    t = arr[j];
    compare++;

    while(t<arr[i]){

    arr[i+1] = arr[i];
    movement++;
    i--;
    compare++ ;

    }

    arr[i+1] = t;
    movement += 2;

    }

    float EndTime = clock();

return (EndTime - StartTime)/CLOCKS_PER_SEC;


}



