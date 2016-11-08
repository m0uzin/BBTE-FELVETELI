#include <iostream>
using namespace std;
bool Primtenyezo(int n);
int main(){
int n;
cout<<"n=";cin>>n;
cout<<Primtenyezo(n);



return 0;
}
bool Primtenyezo(int n){
int counter,d=2;
while(n!=1){
counter=0;
while(n%d==0){n=n/d;counter++;}
if(counter%2==0 && counter!=0){return true;}
d++;}

return false;

}
