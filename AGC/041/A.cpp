#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll N,A,B;
  cin >> N >> A >> B;
  if((B-A)%2==0){
    cout << (B-A)/2 << endl;
  }else{
    cout << min(A-1,N-B)+1+(B-A-1)/2 << endl;
  }
}
