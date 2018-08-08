#include<stdio.h>
#include<iostream>
#include<stack>

using namespace std;

struct Hanoi
{
    int disk;
    char i;
    char j;
    char k;
} p,s;

int main()
{
    int n, count = 0;
    stack<struct Hanoi>s1;
    printf("Enter the number of discs : ");
    scanf(" %d",&n);
    s.disk=n;
    s.i = 'a';
    s.j = 'b';
    s.k = 'c';
    s1.push(s);
    while(s1.size()!=0)
    {

        s=s1.top();

        s1.pop();
        if(s.disk==1){
            printf("Move %d from pole %c to %c\n",s.disk,s.i,s.k);
            count++;
        }
        else
        {
            p.disk=s.disk-1;
            p.i='b';
            p.j='a';
            p.k='c';
            s1.push(p);

            p.disk=1;
            p.i='a';
            p.j='b';
            p.k='c';
            s1.push(p);

            p.disk=s.disk-1;
            p.i='a';
            p.j='c';
            p.k='b';
            s1.push(p);
        }
    }
    printf("Number of data movement : %d",count);

    return 0;

}


