//Inital Code
#include<iostream>
#include<algorithm>
using namespace std;
int compare(int a, int b)
{
  if (a > b) return true;
  return false;

}
int  main(){
        int ar[5] = {1,5,3,4,2};
//sort(first,last)
//Array: sort(ar,ar+n);
//vector: sort(v.begin(),v.end())
//sort from least to greatest

        sort(ar,ar+5,compare);
        //sort from greatet to least

        for(int i=0;i<5;i++)
                cout<<ar[i]<<"  ";
         return 0;

}
