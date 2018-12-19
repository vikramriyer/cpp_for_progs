#include "iostream"
#include "fstream"
using namespace std;
int main() {
  ifstream myfile;
  string line;
  myfile.open("input.txt");
  while (getline(myfile, line)){
    cout<<line<<endl;
  }
  myfile.close();
  return 0;
}
