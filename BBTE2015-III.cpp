#include <iostream>
#include <math.h>
using namespace std;
int v[100][100],X[1000];
int m,n;
void MatrixRead();
void XSequence();
bool IsPrime(int n);
bool IsMagic(int n);
void MagicSequences();
int main()
{
    cout<<"m=";cin>>m;
    cout<<endl;
    cout<<"n=";cin>>n;
 MatrixRead();   
 XSequence();cout<<"X = ";for(int i=0;i<n*m;i++){cout<<X[i]<<" ";}   
cout<<endl;
MagicSequences();

    
 return 0;
  
}
void MatrixRead(){
    
    
   for(int i=0;i<m;i++)
       for(int j=0;j<n;j++){
       cout<<"v["<<i<<"]["<<j<<"]=";cin>>v[i][j];
       }  }
       
 
void XSequence(){
    int k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){X[k]=v[j][i];k++;}
    
}

bool IsPrime(int n){
    if(n==2){return true;}
    if(n==1){return false;}
    for(int i=2;i<=n/2;i++)
        {if(n%i==0)return false;}
        return true;
    
    }
bool IsMagic(int n){
     
     if(IsPrime(n)!=1){return false;}
     int FirstDec = pow(10,floor(log(n)/log(10))); 
     int FirstDig = n/FirstDec;
     if(IsPrime(FirstDig)==false){return false;}
     int Removed=n;
     while(Removed!=0){
     
     FirstDec = pow(10,floor(log(Removed)/log(10))); 
     FirstDig = Removed/FirstDec;  
     Removed = Removed-FirstDig*FirstDec;
     if(IsPrime(Removed)==false){return false;} 
     }
    return true;
    }

void MagicSequences(){
    int q=0,c=0,Counter=0,MaxCounter=0;
    int x=(m*n)-1,ipos;
    label:
    cout<<"Milyen poziciotol kezdve : ";cin>>ipos;
if(ipos<0 || ipos>x){cout<<"Helytelen pozicio"<<endl;goto label;}
    
for(int i=ipos;i<x;i++){
    if(IsMagic(X[i]+X[i+1])){Counter++;
    if((c==i-1)&&(i!=1)){cout<<X[i+1]<<" ";}
                             else {cout<<X[i]<<" "<<X[i+1]<<" ";}q=1;c=i;}
          if(MaxCounter<Counter){MaxCounter=Counter;}                   
else{cout<<endl;Counter=0;}}
cout<<endl;
if(MaxCounter!=0){cout<<"A maximalis hosszusagu tomb hossza : "<<MaxCounter+1;}
else{cout<<"Nem letezik tombszakasz.";}
    }
       