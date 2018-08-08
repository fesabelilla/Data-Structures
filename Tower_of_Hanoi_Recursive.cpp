#include<bits/stdc++.h>
using namespace std;

void Hanoi(int n ,int i,int j,int k);
int movement=0;

int main(){
    int n;
  cout<<" Enter number of Disk : ";
  cin>>n;
  Hanoi(n,'a','b','c');
  cout<<"Number of data movement "<<movement<<endl;


return 0;
}

void Hanoi(int n ,int i,int j,int k){
    if(n==1){
        printf("Move disk 1 from %c to %c\n",i,k);
        movement++;
    }
    else{
        Hanoi(n-1,i,k,j);
        printf("Move disk %d from %c to %c\n",n,i,k);
        Hanoi(n-1,j,i,k);
        movement++;

    }




}

