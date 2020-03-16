#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

void pick(int n, vector<int>picked, int topick){
  if(topick == 0){
    for(int i=0; i<picked.size(); i++){
      cout<< picked[i] <<" ";
    }
    cout<<endl;
    return;
  }

  int smallest = picked.size() == 0 ? 0 : picked.back()+1;

  for(int i=smallest; i<n; i++){
    picked.push_back(i);
    pick(n, picked, topick-1);
    picked.pop_back();
  }

}

int main() {

  freopen("test.txt","r",stdin);
  int topick;
  int total;
  vector<int> vec;
  cin>>total>>topick;

  pick(total,vec,topick);

}
