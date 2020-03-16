#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,k;
    int target;
    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if( temp == 1){
            target = temp;
        }
    }
    //중간에서 오른쪽
    if( target > n - target){
        int leftCount = ceil( (double)(target-0-k) / ( k- 1) );
        int rightStone = target - ((k - 1) * leftCount + k );
        if(rightStone <= 0 ){
            ans += leftCount + 1;
        }
        else{
            int rightCount = ceil( (double)(rightStone - 0 - k ) / ( k - 1));
            ans += leftCount + 1 +  rightCount + 1;
        }
    }
    //중간에서 왼쪽
    else{
        int rightCount = ceil( (double)(n-target-k) / ( k- 1) );
        int leftStone = n - ((k - 1) * rightCount + k );
        if(leftStone <= 0 ){
            ans += rightCount + 1;
        }
        else{
            int leftCount = ceil( (double)(leftStone - 0 - k ) / ( k - 1));
            ans += leftCount + 1 +  rightCount + 1;
        }


    }
    cout << ans << endl;
}