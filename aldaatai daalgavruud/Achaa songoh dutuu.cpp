/* a[i] jintei b[i] unetei achaanii k aas baga niit jintei hamgiin ih une hureh baraanuudiig oloh 
code by uchral
2014.12.10*/
#include<iostream.h>
using namespace std;
int main(){
      int A[100],e,p,t1,t,s,z=0,n,k,i,j,l,m,cost=0,costMax=0,sum,C[100],B[100],G[100];
      cout<<"n baraanii toog oruul=";
      cin>>n;
      for(i=0;i<n;i++){
          C[i]=0;             
      }                 
      for(i=0;i<n;i++){
          cout<<i<<"\nbaraanii jin=";
          cin>>A[i];     
          cout<<i<<"\nbaraanii une=";
          cin>>B[i]; 
      }                        
      cout<<"\nBaraanii jingiin hyzgaar=";
      cin>>k;
      for(j=0;j<n;j++){
          for(i=j+1;i<n;i++){
              if(A[j]>A[i]){
                 t=A[j];
                 t1=B[j];
                 A[j]=A[i];
                 B[j]=B[i];
                 A[i]=t;   
                 B[i]=t1;        
               //  swap(A[j],A[i]);
               //  swap(B[j],B[i]);              
              }              
          }                     
      }          
      cout<<"\nErembelsenii daraa";
      for(i=0;i<n;i++){
          cout<<"\nA["<<i<<"]="<<A[i];
          cout<<"\nB["<<i<<"]="<<B[i];
      }                
      for(i=0;i<n;i++){
         if (A[i]>k){
             z=i;
             break;
         }  
         else 
         z=n;                           
      }            
      cout<<"\n \nz="<<z;           
      for(s=0;s<z;s++){
          for(j=s;j<z;j++){
              for(p=0;p<z;p++){
              C[p]=0;                 
              }                   
              sum=A[s];
              cost=B[s];
              C[s]=B[s];
              l=j;
              for(i=l+1;i<=z;i++){
                     if(sum+A[i]<k){
                     sum=sum+A[i];
                     cost=cost+B[i];
                     C[i]=B[i];
                         if(cost>costMax){
                         costMax=cost;
                         for(e=0;e<z;e++){
                             G[e]=C[e];}
                       
                     }  
                     }
                     else{
                        // sum=sum-A[i-1]; 
                        // cost=cost-B[i-1];
                       //  C[i-1]=0; 
                     if(cost>costMax){
                         costMax=cost;
                         for(e=0;e<=z;e++){
                             G[e]=C[e];}
                       
                     }                 
                     }       
                            
              }                   
          }                   
        cout<<"\n costmax ["<<s<<"]="<<costMax;
      }                 
          /* for(i=0;i<n;i++){
               jin=0;
               jin=jin+A[0][i];             
               for(j=i+1;j<n;j++){         
                   jin=jin+A[0][j];      
                   while (jin<=k){
                       for(l=j+1,l<n;l++){
                           jin=jin+A[0][l];
                           cost=cost+A[1][l];
                           C[l]=l;
                       }                  
                   }                     
               }                                         
           }
          
          */
      cout<<"\nsuuliin muchid\n";
      cout<<"\nHamgiin undur une="<<costMax; 
      for(i=0;i<n;i++){
          cout<<"\nG["<<i<<"]="<<G[i];
      }                 
      system("pause");
}

