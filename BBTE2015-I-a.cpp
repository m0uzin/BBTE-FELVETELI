#include <iostream>
using namespace std;
int Matrix(int m,int n,int A[][6]);
int A[2][6]={5,2,8,4,9,3,7,1,6,3,8,5};      //Pelda matrix definialasa.

int main(){
  
    cout<<Matrix(2,6,A);  

return 0;  
}
int Matrix(int m,int n,int A[][6]){                             //Fuggveny definialasa.
    int Counter=0,RowMax=0,RowMin=0,ColumnMax=0,ColumnMin=0;    //Counter(nyeregpontok szamlalasara hasznaljuk), RowMax,RowMin,ColumnMax,ColumnMin(az adott sorban/oszlopban talalhato az adott elemnel nagyobb illetve kissebb elemek szama),
    int i,j,a,b;
    for(i=0;i<m;i++){
        
           for(j=0;j<n;j++){                                    //Vegigmenes a tomb elemein.
                        
      for(a=0;a<n;a++){if(A[i][j]>A[i][a]){RowMax++;}  
                           else if(A[i][j]<A[i][a]){RowMin++;}} 
      for(b=0;b<m;b++){if(A[i][j]>A[b][j]){ColumnMax++;}            //Sorok es oszlopok atfesulese(osszehasonlitas) az adott elemmel illetve a megfelelo valtozok inkrementalasa. 
                           else if(A[i][j]<A[b][j]){ColumnMin++;}} 
      
    if((RowMax==n-1)&&(ColumnMin==m-1)){Counter++;cout<<"Nyeregpont : A("<<i<<','<<j<<')'<<endl;}    //Ha annyi elemnel nagyob , mint ahany elem van a sorban - 1(tehat maximum) es annyi elemnel kissebb , mint ahany elem van az oszlopban -1(tehat minimum).
    if((RowMin==n-1)&&(ColumnMax==m-1)){Counter++;cout<<"Nyeregpont : A("<<i<<','<<j<<')'<<endl;}    //Ha annyi elemnel kissebb , mint ahany elem van a sorban - 1(tehat minimum) es annyi elemnel nagyobb , mint ahany elem van az oszlopban -1(tehat maximum).
                
                                                                                                    //Noveljuk a Counter erteket es kiiratjuk a nyeregpontoknak megfelelo matrix elemet.
    RowMax=0;RowMin=0;ColumnMax=0;ColumnMin=0; //Nullazzuk a segedvaltozok ertekeit.
    
    
 }}
 cout<<"Nyeregpontok szama :"<<endl;    //Kiiratjuk a nyeregpontok szamat.
return Counter;}