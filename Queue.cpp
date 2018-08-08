#include<bits/stdc++.h>
using namespace std;

int s=20, arr[20], i=-1;


void Push(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    i++;
    arr[i] = a;
}
void Pop(){
    cout<<arr[0]<<" is popped"<<endl;
    for(int p=0 ; p<i ; p++)
        arr[p] = arr[p+1];
    i--;
}
void Display(){
    cout<<"Your Queue is: ";
    for(int k=0; k<=i ; k++)
        cout<<arr[k]<<"  ";
    cout<<endl;
}
void MenuBar(){
    cout<<"1 for Push"<<endl;
    cout<<"2 for Pop"<<endl;
    cout<<"3 for Display"<<endl;
    cout<<"4 for Exit"<<endl;
}


int main()
{
    MenuBar();
    int n=0;
    while(n!=4){
            cout<<"Enter your Choice : ";
        cin>>n;
        switch(n){
            case 1:
                Push();
                MenuBar();
                break;
            case 2:
                if(i>-1)
                    Pop();
                else
                    cout<<"Queue is empty."<<endl;
                MenuBar();
                break;
            case 3:
                if(i>-1)
                    Display();
                else
                    cout<<"Queue is empty"<<endl;
                MenuBar();
                break;
            case 4:
                cout<<"Your push and pop are complete ."<<endl;
                break;
            default:
                cout<<"Please retry."<<endl;
        }
    }
    return 0;
}
