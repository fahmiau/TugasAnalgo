/*
  Fahmi Auliya 170041
*/
#include <iostream>

using namespace std;

typedef int arr[];

void linearSearch(arr a, int n, int key, int &found, int &loc)
{
  found = loc = 0;
  while (!found && loc < n)
  {
    if (a[loc] == key)
    {
      found = 1;
    }
    else
    {
      loc = loc + 1;
    }
  }
}

main()
{
  arr x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n, key, found, loc;

  cout << "key Pencarian data : ";
  cin >> key;

  linearSearch(x, 10, key, found, loc);

  if (found)
    cout << "Ditemukan di posisi : " << loc + 1 << endl;
  else
    cout << "Tidak ditemukan";
}
