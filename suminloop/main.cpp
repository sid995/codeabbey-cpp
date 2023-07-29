#include <iostream>

using namespace std;

int main()
{
  // int iteration;
  // int sum = 0;
  // cout << "Enter num of loops:";
  // cin >> iteration;
  // int *arr = new int(iteration);
  // cout << "Enter numbers:" << endl;
  // for (int x = 0; x < iteration; x++)
  // {
  //   cin >> arr[x];
  //   sum += arr[x];
  // }
  // cout << sum;
  // return 0;
  int iteration = 45, sum = 0;
  int arr[45] = {308, 158, 623, 1244, 702, 85, 976, 901, 186, 675, 1228, 369, 191, 704, 133, 820, 176, 520, 1179, 1288, 988, 406, 408, 115, 25, 440, 459, 548, 704, 1077, 359, 47, 1089, 341, 340, 219, 1124, 390, 233, 474, 115, 791, 1064, 1141, 748};
  for (int x = 0; x < iteration; x++)
  {
    sum += arr[x];
  }
  printf("%d", sum);
  return 0;
}

// 380 137 1071 775 573 55 212 731 426 933 406 1206 1160 255 575 420 147 627 245 636 1197 622 430 473 482 641 137 1069 332 644 714 535 1163 1084 652 973 1174 642 245 75 1207 81 886 849 69