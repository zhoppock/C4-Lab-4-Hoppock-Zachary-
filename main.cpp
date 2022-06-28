// Hoppock, Zachary
// betweenTenAndZero.cpp
// 10/13/2020
// Using a while loop, input a number between 0 and 10
// Version # 1
#include <iostream>
using namespace std;

int main()
{
  int number;
  const int MIN = 0;
  const int MAX = 10;
  cout << "Enter a number less than 10:  ";
  cin >> number;
  while (number >= MAX || number <= MIN)
  {
    cout << "Invalid Entry! Enter a number less than 10:  ";
    cin >> number;
  }
  cout << "The number you selected was: " << number;
  return 0;
}