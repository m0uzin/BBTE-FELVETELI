#include <iostream>
using namespace std;
void Palindrom(int n);
int main(){
    
    
Palindrom(4273); 
    
    
  return 0;
 
}
void Palindrom(int n){
  int m=0,c=0;
while(n!=0){
    c = n % 10 ;
    m = m * 10 +c ;
    n = n / 10 ;
}

cout<<m; 

}