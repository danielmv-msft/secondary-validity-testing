#include<iostream>
#include<vector>
using namespace std;

int main(){
  string helloWorld = "Hello World!";
  vector<char> helloWorldVector {};
  for(unsigned int i = 0; i < helloWorld.size(); ++i){
    helloWorldVector.push_back(helloWorld[i]);
  }
  cout << "STRING: " << helloWorld << "\n";
  cout << "VECTOR (DOUBLE SPACED):";
  for(unsigned int i = 0; i < helloWorldVector.size(); ++i){
    cout << helloWorldVector[i] << " ";
  }
  cout << "\n";
  
  return 0;
}
