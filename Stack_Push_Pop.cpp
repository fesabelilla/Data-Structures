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
    cout<<arr[i]<<"  is Popped"<<endl;
    i--;
}

void Display(){
    cout<<"The Stack is: ";
    for(int p=0; p<=i; p++)
        cout<<arr[p]<<"  ";
    cout<<endl;
}

void Menu(){
    cout<<"1 for Push"<<endl;
    cout<<"2 for Pop"<<endl;
    cout<<"3 for Display"<<endl;
    cout<<"4 for Exit"<<endl;
}


int main()
{
    Menu();
    int n=0;
    while(n!=4){
            cout<<"Enter your Choice : ";
        cin>>n;
        switch(n){
            case 1:
                Push();
                Menu();
                cout<<endl;
                break;
            case 2:
                if(i>-1)
                    Pop();
                else
                    cout<<"Stack is empty."<<endl;
                Menu();
                break;
            case 3:
                if(i>-1)
                    Display();
                else
                    cout<<"Stack is empty"<<endl;
                Menu();
                break;
            case 4:
                cout<<"You Push and Pup is complete"<<endl;
                break;

            default:
                cout<<"Please Retry."<<endl;
        }
    }
    return 0;
}
