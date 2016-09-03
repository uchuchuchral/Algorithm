/* hudaldaachin bodlogo buren huwilbar
garaas n baraanii too bolon 
hargalzah une jinguud ugugdunu 
Tendees hamgiin ih une hureh zaagdsan k jingees baga bh baraanuudiin olonlog oloh programm
code by uchral
2014.12.11*/
#include<iostream.h>
using namespace std;
int main(){
int n,s=0,i,A[100],D[100],B[100],C[100],G[100],p,j,k,cost=0,costMax=0,sum=0;                     
      cout<<"\nn baraanii toog oruul=";
      cin>>n;
      for(i=0;i<n;i++){
          C[i]=0;
          G[i]=0;
          A[i]=0;
          B[i]=0;
          D[i]=0;
      } 
      for(i=0;i<n;i++){
          cout<<i<<"\nbaraanii jin=";
          cin>>A[i];     
          cout<<i<<"\nbaraanii une=";
          cin>>C[i]; 
      }
      cout<<"\nBaraanii jingiin hyzgaar=";
      cin>>k;                    
      i=n-1;
      p=i;
      
 ene: if(s<n){
         s=0;
         sum=0;
         cost=0;
  ene1:  if(B[i]==0){
            B[i]=1;
            if(i<n-1){
               for(j=i+1;j<n;j++){
                   B[j]=0;}
                   cout<<"\n";
                   for(i=0;i<n;i++){              
                      s=s+B[i];
                      cout<<B[i];}
                      for(i=0;i<n;i++){
                          if(B[i]>0){
                             sum=sum+A[i];
                             cost=cost+C[i];
                             }        
                      }     
                      if(sum<=k){
                         if(cost>costMax){
                            costMax=cost;
                            for(i=0;i<n;i++){
                                D[i]=0;
                                G[i]=0;
                            }
                            for(i=0;i<n;i++){
                               D[i]=B[i];    
                               if(B[i]>0)
                                  G[i]=A[i];        
                            }
                         }  
                       }                                  
                      i=p;
                      goto ene;
                   
                                                 
              }        
            else{ 
               cout<<"\n";   
               for(i=0;i<n;i++){              
                      s=s+B[i];
                      cout<<B[i];}
                      for(i=0;i<n;i++){
                          if(B[i]>0){
                             sum=sum+A[i];
                             cost=cost+C[i];
                             }        
                      }     
                      if(sum<=k){
                         if(cost>costMax){
                            costMax=cost;
                            for(i=0;i<n;i++){
                                D[i]=0;
                                G[i]=0;
                            }
                            for(i=0;i<n;i++){
                               D[i]=B[i];    
                               if(B[i]>0)
                                  G[i]=A[i];        
                            }
                         }  
                       }    
                   i=p;
                   goto ene;
            }     
          }
          else{
              if(B[i]==1){
              i=i-1;
              goto ene1;
              }
          }                                              
      }
      else      
      cout<<"\ns="<<s<<endl; 
          for(i=0;i<n;i++){
          cout<<"\nB["<<i<<"]="<<B[i];
          } 
          cout<<"\n------------------------------\n";
          cout<<"\nOlj boloh hamgiin ih une="<<costMax;
          cout<<"\nSongoj awsan baraanuud";
          for(i=0;i<n;i++){
              if(D[i]>0){
              cout<<"\nG["<<i<<"]="<<G[i];          
              }        
          }                               
      system("pause");
}
