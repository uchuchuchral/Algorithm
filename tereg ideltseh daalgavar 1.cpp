/* N*N hemjeetei shatriin hulug deer garaas teregnii bairshiliig oruulhad  ideltseh teregnii too 
code by uchral 
2014.11.26*/
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
         int main()
         {
         int T[50],B[100][100],n,m;
         int A[100][100]={{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0}};
         int q,w,k,t,i,j,l,a,b;
         
    //for(i=0;i<n;i++){
    //for(j=0;j<n;j++){
      ///  cout<<"A["<<i<<"]"<<"["<<j<<"]";
        //cin>>A[i][j]; 
        //}
        //}
        //k=0;
    cout<<"teregnii too=";
    cin>>t;
    for(i=0;i<t;i++){
       cout<<"T["<<i<<"]:"<<endl;
       cout<<"muriin dugaar=";     
       cin>>k;
       cout<<"baganiin dugaar=";
       cin>>l;              
       A[k][l]=2;
     }
    
          
    //for(i=0;i<n;i++){
    //for(j=0;j<n;j++){
      //  if (A[i][j]>0){
                 
        //   }
            //i=2;
            //j=3;        
        //cout<<"A["<<i<<"]["<<j<<"]"<<A[i][j]<<endl;
         //i=1;
         b=0;
         a=0;//amid uldsen teregnii too
          n=7;                                 
        for(i=0;i<n;i++)
        { 
           for(j=0;j<n;j++)
           {
              if  (A[i][j]>0)
             
              {
                  k=i;
                  l=j;
                //  B[i][j]=A[i][j];
                  //b=b+1;         //A[i][j] tegees ih bailaa 
            for (i=i+1;i<n;i++){
                if (A[i][j]==2){
                    A[i][j]=A[i][j]-2;
                     a=a+1;  
                   }
                }    
                i=k;
                j=l;
            for (j=j+1;j<n;j++){
                if (A[i][j]==2) {
                    A[i][j]=A[i][j]-2;
                     a=a+1;
                   }
                }
                           
            
            j=l;
            i=k;
            }
            }
            }  
                
              
                          
          cout<<"iduulsen teregnii too="<<a<<endl;                                                   
          system("pause");
            
             
             
}
