#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
      ll n;
      cin>>n;
      ll aa[n+1];
      aa[0]=0;
      ll a,b,c,d,e,f,g,aaa,bbb,ccc,ddd;
      ll kk,k,i;
      kk=n%4;
      k=4+kk;
      if(k==4)
      {
       cout<<"1 1 2 3"<<endl;
       cin>>a;
       cout<<"1 2 3 4"<<endl;
       cin>>b;
       cout<<"1 3 4 1"<<endl;
       cin>>c;
       cout<<"1 4 1 2"<<endl;
       cin>>d;
       aa[1]=d^a^c;
       aa[2]=a^b^d;
       aa[3]=b^c^a;
       aa[4]=c^d^b;
      }
      else if(k==5)
      {
       cout<<"1 1 2 3"<<endl;
       cin>>a;
       cout<<"1 2 3 4"<<endl;
       cin>>b;
       cout<<"1 3 4 5"<<endl;
       cin>>c;
       cout<<"1 4 5 1"<<endl;
       cin>>d;
       cout<<"1 5 1 2"<<endl;
       cin>>e;
       aa[1]=b^c^e;
       aa[2]=c^d^a;
       aa[3]=d^e^b;
       aa[4]=e^a^c;
       aa[5]=a^b^d;
      }
      else if(k==6)
      {
       cout<<"1 1 2 4"<<endl;
       cin>>a;
       cout<<"1 2 3 5"<<endl;
       cin>>b;
       cout<<"1 3 4 6"<<endl;
       cin>>c;
       cout<<"1 4 5 1"<<endl;
       cin>>d;
       cout<<"1 5 6 2"<<endl;
       cin>>e;
       cout<<"1 6 1 3"<<endl;
       cin>>f;
       aa[1]=e^f^b;
       aa[2]=f^a^c;
       aa[3]=a^b^d;
       aa[4]=b^c^e;
       aa[5]=c^d^f;
       aa[6]=d^e^a;
       
      }
      else if(k==7)
      {
       cout<<"1 1 2 3"<<endl;
       cin>>a;
       cout<<"1 4 5 6"<<endl;
       cin>>b;
       cout<<"1 7 1 2"<<endl;
       cin>>c;
       cout<<"1 3 4 5"<<endl;
       cin>>d;
       cout<<"1 6 7 1"<<endl;
       cin>>e;
       cout<<"1 2 3 4"<<endl;
       cin>>f;
       cout<<"1 5 6 7"<<endl;
       cin>>g;
       aa[1]=a^b^c^d^e;
       aa[2]=f^g^a^b^c;
       aa[3]=d^e^f^g^a;
       aa[4]=b^c^d^e^f;
       aa[5]=g^a^b^c^d;
       aa[6]=e^f^g^a^b;
       aa[7]=c^d^e^f^g;
      }
        
      ll rep,temp;
      rep=(n-k)/4;
      for(i=0;i<rep;i++)
      {
        temp=4*i+k+1;
        cout<<"1 "<<temp<<" "<<temp+1<<" "<<temp+2<<endl;
        cin>>aaa;
        cout<<"1 "<<temp+1<<" "<<temp+2<<" "<<temp+3<<endl;
        cin>>bbb;
        cout<<"1 "<<temp+2<<" "<<temp+3<<" "<<temp<<endl;
        cin>>ccc;
        cout<<"1 "<<temp+3<<" "<<temp<<" "<<temp+1<<endl;
        cin>>ddd;
        aa[temp]=ddd^aaa^ccc;
        aa[temp+1]=aaa^bbb^ddd;
        aa[temp+2]=bbb^ccc^aaa;
        aa[temp+3]=ccc^ddd^bbb;
          
      }

     cout<<"2 ";
     for(j=1;j<=n;j++)
      {
        cout<<aa[j]<<" ";
      }
      int ans;
      cin>>ans;
      if(ans==-1)
      {
          exit(0);
      }      
        
    }
      
  return 0;
  
}
