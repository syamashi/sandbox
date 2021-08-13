#include <stdio.h>
typedef int ll;
#define rep(i,n) for (ll i=0; i<n; ++i)

#define M 500010
ll dat[M];
void init(){ rep(i, M) dat[i] = 0; }
void add(ll i, ll x){
  for(; i<M; i += i&-i) dat[i] += x;
}
ll sum(ll i){
  ll res = 0;
  for(; i>0; i -= i&-i) res += dat[i];
  return res;
}
ll rangesum(ll L, ll R){
  return sum(R) - sum(L-1);
}

int main(){
  ll N;
  rep(i, 100)  printf("%d", i);
  ll A[]={1,2,3,4,5,6,7,8,9};
  rep(i, 9){
	  add(A[i], 1);
  }
  ll k=2;
  rep(i, 9){
	  k*=2;
	  printf("%d\n", dat[k]);
  }
}
