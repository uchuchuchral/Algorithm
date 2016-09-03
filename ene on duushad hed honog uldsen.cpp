/* on duushad hed honog uldsen be
code by uchral
2014.12.03*/
#include<iostream>
using namespace std;
      int undurJil(int jil){
          if (jil%400==0)
             {
             // cout<<"\n Undur jil mun";
              return 1;
              }
          else                          
             if (jil%100!=0&&jil%4==0)
             {
              //  cout<<"\n Undur jil";                      
                return 1;             
             }
             else {
             //cout<<" \n Undur jil bish";
             return 0;
             }
}    
      int DayCounter(int sar, int on){   
          int udur;        
          switch (sar){
               case 1:       
               case 3:
               case 5:
               case 7:
               case 8:
               case 10:
               case 12:
                    udur=31;
                    break;
               case 2:
                    if (undurJil(on)==0)
                        udur=28;
                        else
                        udur=29;
                        break;     
                case 4:
                case 6:
                case 9:
                case 11:
                     udur=30;
                        break;
                default:
                        cout<<" \n iim sar baihgui\n";
          }return udur;                               
}
  int main(){
       int on,sar,udur, udriinToo=0;              
           cout<<"\nOn:";
           cin>>on;   
           cout<<"\nsar:";
           cin>>sar;
           cout<<"\nudur:";
           cin>>udur;
       for(int i = 1; i < sar; i++){
            udriinToo=udriinToo+DayCounter(i, on);
          }          
            udriinToo=udriinToo+udur;
         if(undurJil(on)==1)
             cout<<366-udriinToo<<"\nhonog uldsen bn";
         else
             cout<<365-udriinToo<<"\nhonog uldsen bn";
             system("pause");
             
}
