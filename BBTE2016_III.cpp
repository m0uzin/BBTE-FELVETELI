#include <iostream>
using namespace std;
int a[100],n,maxKezdet,maxVeg;

void Beolvas();
int maxSziget();
bool hegyTipus();
void Magassag();
int main(){
Beolvas();
cout<<maxSziget();cout<<endl;
if(hegyTipus()){cout<<"A leghosszabb sziget hegytipusu."<<endl;}
else{cout<<"A leghosszabb sziget nem hegytipusu."<<endl;}
cout<<endl;
Magassag();


return 0;
}
void Beolvas(){
cout<<"n=";cin>>n;

for(int i=0;i<n;i++){
cout<<"a["<<i<<"]=";cin>>a[i];

}
}

int maxSziget(){
int mx=0,t,counter;
for(int i=0;i<n;i++){
t=0;counter=0;
 if(a[i]==0){
t=i+1;
while(a[t]!=0){counter++;t++;}
}
if(counter>mx){mx=counter;maxKezdet=i+1;maxVeg=i+counter;}
}
cout<<maxKezdet+1<<"-tol "<<maxVeg+1<<"-ig"<<" tart a leghosszabb sziget."<<endl;
cout<<"A sziget hossza = ";
return mx;
}

bool hegyTipus(){
bool novekvo=true,csokkeno=true;
for(int i=maxKezdet;i<maxVeg+1;i++){
if(i!=maxKezdet && i!=maxVeg){
if((a[i]<a[i-1] && a[i]>a[i+1])||(a[i]>a[i-1] && a[i]<a[i+1])||(a[i]>a[i+1] && a[i+1]>a[i+2])||(a[i]<a[i+1] && a[i+1]<a[i+2])){}
else return false;
}}
for(int i=maxKezdet;i<maxVeg;i++){
if(a[i]<a[i+1]){csokkeno=false;}
}
for(int i=maxKezdet;i<maxVeg;i++){
if(a[i]>a[i+1]){novekvo=false;}
}

if((novekvo==false) && (csokkeno==false))
{return true;}
else return false;

}
void Magassag(){
int vMag[100],i,j,mx[1][2];mx[1][0]=0;
bool b=true;

for(i=0;i<100;i++)
{vMag[i]=0;}

for(i=0;i<n;i++){
if(a[i]!=0){
vMag[a[i]]++;
if(vMag[a[i]]==2){b=false;}
}}




if(b){cout<<"A szarazfoldon magassagok kulonboznek . "<<endl;}
else{for(i=0;i<100;i++){
       if(vMag[i]>mx[1][0]){mx[1][0]=vMag[i];mx[1][1]=i;}
                       }
cout<<"A szarazfoldon magassagok ismetlodnek."<<endl;
    }

cout<<mx[1][1]<<"-es(as)  "<<mx[1][0]<<"-szer(szor)"<<"fordul elo."<<endl;

}








