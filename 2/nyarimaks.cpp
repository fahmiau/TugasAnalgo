/*
  Fahmi Auliya 170041
*/
#include <iostream>
using namespace std;

int n;
int x[100];
void input(){
  cout<<"Banyak bilangan : ";cin>>n;
  for(int i = 1; i <= n; i++)
  {
    cout<<"Bilangan ke - "<<i<<" : ";cin>>x[i];
  }
  
}

int proses(){
  int maks;
  maks = x[1];
  for(int i = 2; i <= n; i++)
  {
    if (maks < x[i]) {
      maks = x[i];
    } 
  }
  return maks;
}

main (){
  input();
  cout<<"Bilangan maksimum : "<<proses();
}
