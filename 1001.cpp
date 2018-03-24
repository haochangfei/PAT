#include<bits/stdc++.h>

using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  int ans = a+b;
  if(ans<0) {
    cout<<"-";
    ans = -1 * ans;
  }
  if(ans < 1000)
  {
    cout<<ans<<endl;
  }
  else if (ans < 1000000)
  {
    printf("%d,%03d\n",ans/1000,ans%1000);
  }
  else
  {
    printf("%d,%03d,%03d\n",ans/1000000,ans%1000000/1000,ans%1000);
  }
  return 0;
}
