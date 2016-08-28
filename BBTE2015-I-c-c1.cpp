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
for(int i=0;i<n;i++){
if(X[i]==v){cout<<"Az adott elem pozicioja :";return i+1;}} //Ha az elem megegyezik a sorozatban talalhato egyik elemmel visszateritjuk az  pozicio erteket(i).
return -1;      //Ha az elem nem talalhato meg a sorozatban visszateritjuk a -1-et.
} 