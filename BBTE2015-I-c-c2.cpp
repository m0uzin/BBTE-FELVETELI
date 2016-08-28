#include <iostream>
using namespace std;
int X[6]={1,2,3,4,5,6};                         //Pelda sorozat.
int FindElement(int n,int X[100],int v);
int main()
{
cout<<FindElement(6,X,4);
return 0;
}
int FindElement(int n,int X[100],int v){        //Fuggveny definialasa.
if(n==0)return -1;
if(X[n]==v){cout<<"Az elem pozicioja : ";return n+1;}        //Ha az elem megegyezik a sorozatban talalhato egyik elemmel visszateritjuk az  pozicio erteket(n+1).
FindElement(n-1,X,4);      
} 