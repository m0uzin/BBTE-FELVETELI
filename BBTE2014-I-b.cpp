#include <iostream>
using namespace std;
int MaxDigitNumber(int n, int X[100]);
int X[4]={1234,2244,5282,4679};

int main(){



    
MaxDigitNumber(4,X); 
    
 return 0;   
}



int MaxDigitNumber(int n, int X[100]){
    int c,v[100][2],aux=0;
    for(int i = 0 ; i < 4 ; i++){v[0][i] = 0;v[1][i]=0;}
    //Szamjegyek elofordulasainak azok szamanak a lementese statiszitika vektor altal.
    for(int i=0;i<n;i++){
        while(X[i]!=0){
          c=X[i]%10;  
          if(i>=v[c][0]){v[c][0]++;}
          v[c][1]=c;
        X[i]=X[i]/10;    
            
    }}
    //Szamjegyek elofordulasat tartalmazo tomb rendezese.
for(int i=0;i<n;i++)
    for(int j=i+1;j<n-1;j++){
        if(v[i][0]>v[j][0])                             
        {aux=v[i][0];v[i][0]=v[j][0];v[j][0]=aux;}
        
        }
    //Vegeredmeny kiiratasa.
    cout<<v[n][0]<<"-szor(szer) : "<<v[n][1]<<" es(as) szamjegy";

return 0;    
    
    } 