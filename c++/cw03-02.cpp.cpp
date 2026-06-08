
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>


using namespace std;

double sum(vector<double>& numbers)
{
  double result = 0;
  for (double number : numbers)
    result += number;
  return result;
}

double mean(vector<double>& numbers)
{
  return sum(numbers) / numbers.size();
}

double geometric_mean(vector<double>& numbers)
{
  double result = 1;
  for (double number : numbers)
    result *= number;
  return pow(result, 1.0 / numbers.size());
}

double median(vector<double>& numbers)
{
  sort(numbers.begin(), numbers.end());
  int n = numbers.size();
  if (n % 2 == 0)
    return (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
  else
    return numbers[n / 2];
}

int main()
{
  ifstream file("numbers.txt");

  vector<double> numbers;
  double number;
  while (file >> number)
    numbers.push_back(number);

  double (*functions[])(vector<double>&) = { sum, mean, geometric_mean, median };
  string names[] = { "suma", "srednia", "geometryczna srednia", "mediana" };

  for (int i = 0; i < 4; i++)
    cout << names[i] << ": " << functions[i](numbers) << endl;

  return 0;
}
