/* matritsiin hamgiin baga urjver oloh 
code by uchral 
2014.12.21*/
#include<iostream.h>
using namespace std;
      int min(int a,int b,int P[], int t, int S[100][100], int M[100][100]){
          
             int e,m,mine,k;
             if(a==b){
                M[a][b]=0;
                S[a][b]=0;      
                return 0;
             }
             else
             {        
                   k=a;
                 mine=min(a,k,P,t,S,M)+min(k+1,b,P,t,S,M)+P[a-1]*P[k]*P[b];  
                 while(a<=k&&k<b){
                      e=min(a,k,P,t,S,M)+min(k+1,b,P,t,S,M)+P[a-1]*P[k]*P[b];                            
                      if(e<=mine){
                      mine=e;
                      M[a][b]=e;
                      S[a][b]=k;
                      }                     
                      k++;           
                  }                 
             return mine;
             }                     
          }
          
int main(){
     int S[100][100],n,P[50];
         int M[100][100];            
         int s,k,t,i,j,l,l1,bagaUrjwer;
         cout<<"matritsuudiin too=";
         cin>>t;
         i=1;
         cout<<"M["<<i<<"]:"<<endl;
         cout<<"muriin dugaar=";     
         cin>>k;
         P[i-1]=k;
         cout<<"baganiin dugaar=";
         cin>>l;
         P[i]=l;   
         for(i=2;i<=t;i++){
            cout<<"M["<<i<<"]:"<<endl;
            cout<<"muriin dugaar=";     
            cin>>l1;
            cout<<"baganiin dugaar=";
            cin>>l;
            P[i]=l;              
             }
         for(i=1;i<=t;i++){
             for(j=1;j<=t;j++) {
                    M[i][j]=0;
                    S[i][j]=0;
                    }
                    }               
         i=1;
         bagaUrjwer=min(i , t, P, t, S, M);
         cout<<"baga ni "<<bagaUrjwer<<endl;
         cout<<"\n";
         cout<<"\t\tminumum urjweruudiin husnegt"<<endl;
         for(i=1;i<=t;i++){
         for(j=1;j<=t;j++){                  
         cout<<M[i][j]<<"\t";
         }            
         cout<<"\n";      
         }
         cout<<"\n\n";
         cout<<"\t\turjih erembiin husnegt"<<endl;
         for(i=1;i<=t;i++){
         for(j=1;j<=t;j++){                  
         cout<<S[i][j]<<"\t";
         }            
         cout<<"\n";      
         }
         system("pause");
    
    
}
