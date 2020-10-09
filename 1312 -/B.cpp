#include <bits/stdc++.h>
using namespace std;

vector<int> shuffleVector(vector<int> toShuffle);

int main(void){
  int testCases, arraySize, currVal;
  cin >> testCases;
  vector<int> currVector;
  while(testCases--){
    currVector.clear();
    cin >> arraySize;
    while(arraySize--){
      cin >> currVal;
      currVector.push_back(currVal);
    }
    currVector = shuffleVector(currVector);
    for(vector<int>::iterator i = currVector.begin(); i != currVector.end(); ++i)
      cout << *i << " ";
    cout << endl;
  }
  
  return 0;
}

vector<int> shuffleVector(vector<int> toShuffle){
  if(toShuffle.size() == 1) return toShuffle;
  for(int i = 0; i < toShuffle.size()-1; ++i)
    for(int j = i + 1; j < toShuffle.size();){
      if((j+1) - toShuffle[j] == (i+1) - toShuffle[i]){
	random_shuffle(toShuffle.begin()+j, toShuffle.end());
      }
      else ++j;
    }
  return toShuffle;
}
