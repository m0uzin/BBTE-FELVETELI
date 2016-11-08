#include <iostream>
using namespace std;
int X[100];
bool Kulonbozo(int n,int X[100]);
int main(){
int n;
cout<<"n=";cin>>n;
for(int i=0;i<n;i++){
cout<<"X["<<i<<"]=";cin>>X[i];
}
cout<<Kulonbozo(n,X);


return 0;
}
bool Kulonbozo(int n,int X[100]){
//Statisztika vektor deklaralasa.
int vStat[100];

for(int j=0;j<n;j++)
{vStat[j]=0;}

for(int i=0;i<n;i++){
vStat[X[i]]++;
if(vStat[X[i]]==2){return false;}
}
return true;

}
