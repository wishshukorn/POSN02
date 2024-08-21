// sort a -> b -> c with bubble sort /* done */

#include<bits/stdc++.h>
using namespace std;

struct mys
{
    int no;
    int a;
    int b;
    int c;
}row[14];

bool abc(int f , int s)
{
    if(row[f].a!=row[s].a)
    {
        return row[s].a < row[f].a;
    }
    if(row[f].b!=row[s].b)
    {
        return row[s].b < row[f].b;
    }
    if(row[f].c!=row[s].c)
    {
        return row[s].c < row[f].c;
    }
    return row[s].no<row[f].no;
}
int main()
{
    for(int i= 0 ; i <14 ;i++)
    {
        cin >> row[i].no >> row[i].a >> row[i].b >> row[i].c;
    }
    for(int i=0 ; i<13;i++)
    {
        for(int j=0 ; j<13-i ;j++)
        {
            if(abc(j,j+1))
            {
                swap(row[j],row[j+1]);
            }
        }
    }
    for(int i=0 ; i< 14 ;i++)
    {
        cout << row[i].no << "\t" <<  row[i].a << "\t" << row[i].b << "\t" << row[i].c << endl;
    }
}
/*
1 1 1 4
2 3 1 1
3 4 4 4 
4 2 4 4
5 3 5 3
6 4 3 3 
7 1 3 3
8 2 4 3
9 3 3 5
10 1 5 3
11 1 1 4
12 4 1 1
13 5 2 3
14 3 5 2
*/