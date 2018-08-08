#include<bits/stdc++.h>
using namespace std;

int main()

{

    int arr[30], n;

    bool flag = false;

    srand(time(NULL));
    for(int i=0; i<30; i++)
    arr[i] = rand()%10+1;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<30; i++){
    if(n==arr[i]){
    flag = true;
    break;
    }
    }

    if(flag)
    cout<< "Found" << endl;
    else
    cout<< "Not found"<<endl;


return 0;
}

