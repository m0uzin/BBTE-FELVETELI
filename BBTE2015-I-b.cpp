#include <iostream>
#include <math.h>
using namespace std;
int MaxPermutation(int n);
int main(){

 cout<<MaxPermutation(4273);

return 0;
}
int MaxPermutation(int n){                          //Fuggveny definialasa.
  int FirstDec=0,FirstDig=0,Removed=0;              //FirstDec(ebben taroljuk a szam tizhatvanyat),FirstDig(ebben taroljuk a szam elso szamjegyet),Removed(ebben taroljuk az elso szamjegy nelkuli szamot),
  int x=n,i=0;
  int max=n;

    while ((n!=x) || (i!=1)){                       //Amig vissza nem kapjuk az eredeti szamot(kiveve az elso lepes). 
  i=1;
  FirstDec = pow(10,floor(log(n)/log(10)));         //Megkapjuk az elso szam tizhatvanyat.
  
  FirstDig = n/FirstDec;                            //A szamot elosztva a tizhatvannyal megkapjuk az elso szamjegyet.
  
  Removed = n-FirstDig*FirstDec;                    //Kitoroljuk az elso szamjgyet.
    
    n = Removed*10 + FirstDig;                      //Mindent eloretolva az elso szamjegyet az utolso helyere rakjuk ezzel befejezve a permutaciot.

    if(n>max)max=n;     //Ha a permutacio nagyobb , mint a max a max megkapja az adott permutacio erteket.
    }
cout<<"Legnagyobb : ";
return max;             //Kiiratjuk a legnagyobb permutacio erteket. 
}
