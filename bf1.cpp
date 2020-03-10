#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int dx[8] = { -1,-1,-1,1,1,1,0,0};
const int dy[8] = { -1,0,1,-1,0,1,-1,1};
string board[5];

bool inRange(int x, int y){
  if( x>=0 && x<5 && y>=0 && y<5) return true;
  return false;
}
bool hasword(int x, int y, const string& word){
  if(!inRange(x,y)) return false;
  if(board[x][y] !=word[0] ) return false;
  if(word.size() ==1 ) return true;
  for(int direction = 0; direction<8; ++direction){
    int nx = x+dx[direction]; int ny = y+dy[direction];
    if(hasword(nx,ny,word.substr(1)))
      return true;
  }
  return false;

}

int main(){
  freopen("input.txt","r",stdin);
  int tc; cin>>tc;
  while(tc--){
    for(int i=0; i<5; i++){
      cin>>board[i];
    }
    int numQuery; cin>> numQuery;
    for(int query = 0; query< numQuery; query++){
      string word; cin>>word;
      string ans = "NO";
      for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
          if(hasword(i,j,word) == true && ans == "NO"){
            ans = "YES";
          }
        }
      }
      cout<<word<<" "<<ans<<endl;
    }

  }
  return 0;
}

//유의할점, 완전탐색 , substr(1)로 앞글자 하나 떄고 보냄 이렇게 함으로서 string.size와 depth를 비교할 필요가없음
//좌표설정을 y,x로 2차원좌표와 맞게 해야할듯. 너무긴 변수명 direction을 di 로 하던지 해야겟음.
// string ans에 미리 no를 입력해두고 yes가 되면 바꿔주는 식으로 해줌 이로서 yes가 나왔을대 break를 두번할 필요가없음
