#include <iostream>
using namespace std;
bool Kulonleges(int n);
int main(){
int n;
cout<<"n=";cin>>n;
cout<<Kulonleges(n);



return 0;
}
bool Kulonleges(int n){
int Sm,a,c;
for(int i=0;i<n;i++){
a=i;
Sm=0;
//A szamjegyek osszegenek kiszamolasa.
while(a!=0){
c=a%10;
Sm+=c;
a/=10;
}
//Tokeletes szam feltetelenek ellenorzese.
if(n==i+Sm){return true;}
}
return false;
}
