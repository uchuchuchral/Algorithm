    /* N*N hemjeetei shatriin hulug deer garaas teregnii bairshiliig oruulhad  ideltseh teregnii too 
code by uchral 
2014.11.26*/
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
         int T[50],B[8][8],n;
         int A[8][8];
         int s,p,l,q,k,t,i,j,p1,k1,a,b;
         cout<<" n hemjeeg oruul\n";
         cin>>n;
         s=0;
         for (i=0;i<n;i++){
             for(j=0;j<n;j++) {
                    A[i][j]=0;
                    B[i][j]=0;
                    }
                    }                  
    cout<<"teregnii too=";
    cin>>t;
    for(i=0;i<t;i++){
       cout<<"T["<<i<<"]:"<<endl;
       cout<<"muriin dugaar=";     
       cin>>k;
       cout<<"baganiin dugaar=";
       cin>>l;              
       A[k][l]=i+1;
       T[i]=i+1;
     }             
     cout<<"\nTeregnii bairlal\n";
     for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         cout<<A[i][j]<<"\t";   
     }
         cout<<"\n";
     }                                                   
       for(i=0;i<n;i++)
        { 
           for(j=0;j<n;j++)
           {
              if  (A[i][j]>0)
              {
                          p=i;
                          p1=j;
                          k=i;
                          k1=j;
                  for(a=0;a<t;a++){             
                      if (A[p][p1]==T[a]){
                            q=a;
                      }                   
                           
                  }
                  for (p=0;p<n;p++){
                       if (A[p][p1]>=0){
                          if(A[p][p1]==T[q]){
                             T[q]=q;               
                           }
                          else{                                    
                               for(a=0;a<t;a++){
                                  if(A[p][p1]==T[a]){
                                      B[q][a]=1;
                                   }        
                                }
                           } 
                         }     
                   }    
                   p=k;
                   for (p1=0;p1<n;p1++){
                       if (A[p][p1]>=0){
                          if(A[p][p1]==T[q]){
                             T[q]=q;
                           }                
                          else{     
                               for(a=0;a<t;a++){
                                   if (A[p][p1]==T[a]){
                                       B[q][a]=1;
                                    }
                               }           
                           }
                        }
                    }
                   
              }
              
            }
          }  
          cout<<"\n hevlehed\n";    
             for(i=0;i<n;i++){
             for(j=0;j<n;j++){
                 cout<<B[i][j]<<"\t";
                 }
                 cout<<"\n";
                 }                
          cout<<"\n------------\n";                     
          for(i=0;i<n;i++){
          for(j=0;j<n;j++)
              s=s+B[i][j];
                
               }                         
          cout<<"\n teregnii ideltseh bolomj="<<s<<endl;                                                   
          system("pause");                
}

