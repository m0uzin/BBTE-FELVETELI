#include <iostream>
using namespace std;
int v[100][100];
void Beolvas();
void Kiir();
bool Prim(int n);
bool Superprim(int n);
void XSor();
int X[100];

int main(){
Beolvas();

XSor();


}
void Beolvas(){
int i,j,n;
cout<<"n=";cin>>n;
for(i=0;i<n;i++){
  for(j=0;j<n;j++)
{cout<<"v["<<i<<"]"<<"["<<j<<"]=";cin>>v[i][j];}}
}

void Kiir(){
int n;
cout<<"n=";cin>>n;
for(int i=0;i<n;i++){
cout<<X[i]<<" ";
}
}
bool Prim(int n){
for(int i=2;i<n/2;i++)
{if(n==1){return false;}
if(n%i==0){return false;}}
return true;
}
bool Superprim(int n){
while(n!=0){
if(Prim(n)!=1){return false;}
n=n/10;
}
return true;
}
void XSor(){
int n,i,j;
cout<<"n=";cin>>n;
for(i=0;i<n;i++){
  for(j=0;j<n;j++)
{if((i>j && i+j>n+1)||(i<j && i+j>n-1)){if(Superprim(v[i][j])){X[v[i][j]]=1;}}}}

for(int i=1001;i>-1;i--){
if(X[i]==1){cout<<i<<" ";}
}
}
