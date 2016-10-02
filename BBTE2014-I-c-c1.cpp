#include <iostream>
using namespace std;
void Palindrom(int n);
int main(){
    
    
Palindrom(4273); 
    
    
  return 0;
 
}
void Palindrom(int n){
  int v[9];
  //A szamot beolvassuk egy tombbe hatulrol elore
  //(a soron levo tomb elem megkapja a szam utolso szamjegyet).
for(int i = 0 ; i < 9 ; i++)
{v[i] = n % 10 ;
n = n / 10 ; }
     


for(int i=0;i<9;i++){if(v[i]!=0){cout<<v[i];}}
}