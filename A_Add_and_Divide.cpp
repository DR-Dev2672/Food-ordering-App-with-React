   //code written by DEV 

   #include<bits/stdc++.h>
   using namespace std;

   #define int  long long int
   // #define sort(v) sort(v.begin(),v.end())
   #define vi vector<int> 
   #define vvi vector<vector<int>> 
   #define mii map<int,int>
   #define MOD 1000000007



void solve() {
  int a,b;
  cin>>a>>b;
  int cnt=0;
  if(b==1){
  	b=b+1;
  	cnt++;
  }
  while(a!=0){
  	if(a>b){
  	a=a/b;
  	cnt++;
    }
  	if(a<=b){
  	b=b+1;
  	cnt++;	
  	}
  }
  cout<<cnt<<endl;

}





int32_t main(){
      int t;
      cin>>t;
      while(t--)
 {
   solve();
 }
}