#include <iostream>
#include <math.h>
using namespace std;
int X[100];
int A[100][100];

void XSequence(int n);
int FirstDigit(int n);
int LastDigit(int n);
int MaxDigit(int n);
void MakeMatrix(int n);
void BiggestNumber(int n);
int main (){
for(int i = 0 ;  i < 100 ; i++){X[i] = 0 ;}
    
XSequence(5); 
   
    
 cout<<"X = ";for(int i = 0 ;  i < 33 ; i++){cout<<X[i]<<" "; } 
 
//cout<<endl;
//cout<<FirstDigit(1234);
//cout<<endl;
//cout<<LastDigit(1234);
//cout<<endl;
//out<<MaxDigit(5234);

cout<<endl;

MakeMatrix(4);

cout<<endl<<endl;
 
BiggestNumber(4); 
 
return 0;    
}

void XSequence(int n){
    int i=1,k=1;
    int j;
    while(k < 2*n*n){
        X[k]=i;
        
        
    for( j = 2 ; j < i ; j++){if(i % j == 0){k++;X[k]=j;}}

k++;i++;}}
    
int FirstDigit(int n){
   int m = n,k = 0 ;
while(m != 0){k++; m = m / 10 ; }
return (n / pow(10,k-1));  
}

int LastDigit(int n){
   return n % 10 ;
    
}

int MaxDigit(int n){
    int mx = 0 ;
while(n != 0){
if(n % 10 > mx){mx = n % 10 ;}n = n / 10;}

    return mx ;
 
    }
void MakeMatrix(int n){
    int i,j;
    for( i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++){
            if(i + j < n - 1){A[i][j]=LastDigit(X[n*n + i+1 + j+1]);}
            if(i + j > n - 1){A[i][j]=FirstDigit(X[n*n + i+1 + j+1]);}
            if(i + j == n - 1){A[i][j]=MaxDigit(X[n*n + (i+1)*(i+1) ]);}
            
            }    
    cout<<"A = ";
    
    for( i = 0 ; i < n ; i++)
        {cout<<endl;
        for(j = 0 ; j < n ; j++){cout<<A[i][j]<<" ";}}
    
    }

void BiggestNumber(int n){
    int i , j , m , l , s ,k=0;
    int v[100];
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++)
        {v[k]=A[j][i];k++;
        if(k % n == 0){for(m = 0 ; m < n  ; m++)for(l=m+1 ; l < n  ; l++){if(v[m]<v[l]){swap(v[m],v[l]);}}for( s = 0 ; s < k  ; s++ ){cout<<v[s];}k=0;cout<<","; }
    }  
    
    
    
}    
    

