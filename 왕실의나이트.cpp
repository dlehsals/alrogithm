#include <iostream>
#include <string>
#include <stdlib.h>
#define endl "\n" 
using namespace std;
int dx[8] = { -2, -2, -1, 1, 2,  2, +1, -1 };
int dy[8] = { -1, +1, 2, 2, -1, 1, -2, -2 };
int map[8][8] = {0,};
int main() {
   string position;
   int cnt = 0;
   cin >> position;
   int row = (position[1] - '0') - 1; //가로 
   int col = (position.at(0) - 96)-1;  // 세로  
   for (int i = 0; i < 8; i++) {
      int ncol = dx[i] + col;
      int nrow = dy[i] + row;
      if (ncol > 7 || nrow > 7 || ncol < 0 || nrow < 0) continue;
      else
         map[ncol][nrow] = 1;

   }
   for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
         if(map[i][j])
            cnt++;
      }
   }
   for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
         cout << map[i][j] << " ";
      }
      cout << endl;
   }
   cout << cnt << endl;
   return 0;
}
