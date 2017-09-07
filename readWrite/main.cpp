#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile;
  string input;
  MyFile.open("test.txt");
  cout << "Type your input to the test.txt file.\n";
  cin >> input;
  MyFile << input;
  MyFile.close();
}
