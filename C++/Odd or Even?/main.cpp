#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int>& arr)
{
  int sum = 0;
  for (int num : arr) {
    sum += num;
  }
  return (sum % 2 == 0) ? "even" : "odd";
}