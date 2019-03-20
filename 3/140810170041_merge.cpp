#include <iostream>

using namespace std;

int p,q,r,L[50],R[50];
int n, A[50];

void merge(int A[], int p, int q){
  if (p<q){
    r = p+(q-1)/2;

    merge (A,p,r);
    merge (A,r,q);

    sort();
  }
}

void sort(){
  
}

main(){
  cout<<"banyak bilangan : ";cin>>n;

  for(int i=1; i<=n; i++){
    cout<<"Bil ke "<<i<<" : ";cin>>A[i];
  }


}
