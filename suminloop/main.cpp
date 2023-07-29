#include <iostream>

using namespace std;

int main()
{
  int iteration;
  int sum = 0;
  cout << "Enter num of loops:";
  cin >> iteration;
  int *arr = new int(iteration);
  cout << "Enter numbers:" << endl;
  for (int x = 0; x < iteration; x++)
  {
    cin >> arr[x];
    sum += arr[x];
  }
  cout << sum;
  return 0;
}