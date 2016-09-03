/* matritsiin hamgiin baga urjver oloh 
code by uchral 
2014.12.21*/
#include<iostream.h>
cout<<"oruul togtmoliig";
cin>>int const k;
using namespace std;
      int min(int B[k][k], int a,int b,int C[],int n){
             int baga,g=2;
             if(a>b)
             return b;
             else  
             B[0][0]=a/C[0];
             baga=B[0][0];
             return baga;                     
          }
          
int main(){
 int l=5, y=6, C[4]={2,4,5,6},B[2][2]={{0,0},{0,0}};
 int n=4;
 int k=2;
 
    cout<<"baga ni "<<min(B, l ,y, C, n)<<endl;
    cout<<"B[0][0]="<<B[0][0]<<endl;
    system("pause");
    
    
}
