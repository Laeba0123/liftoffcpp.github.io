#include <iostream>
#include <algorithm>

using namespace std;

int sorting() {
  int arr[] = {5, 3, 2, 1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  
  sort(arr, arr + n);

 
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
int main()
{
    sorting ();
    return 0;
}