#include <iostream>
using namespace std;
int X[100];
//Statisztika vektor deklaralasa.
int vStat[100];
int j;

bool Kulonbozo(int n,int X[100]);
int main(){
int n;
cout<<"n=";cin>>n;

for(j=0;j<n;j++)
{vStat[j]=0;}

for(int i=0;i<n;i++){
cout<<"X["<<i<<"]=";cin>>X[i];
}
cout<<Kulonbozo(n,X);


return 0;
}
bool Kulonbozo(int n,int X[100]){

if(n!=-1){
vStat[X[n]]++;
if(vStat[X[n]]==2){return false;}
Kulonbozo(n-1,X);
}
else {return true;}

}
