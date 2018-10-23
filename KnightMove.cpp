#include <iostream>
using namespace std;
#define endl "\n"


// dimension of the board
const int D = 8;

void printBoard(int board[D][D], int d){
  for(int row = 0; row < d; ++row){
    for(int col = 0; col < d; ++col){
      cout << board[row][col] << "  ";
    }
    cout << endl;
  }
  cout << endl;
}

bool canPlace(int board[D][D], int d, int row, int col ){
  return row >= 0 && row < d &&
         col >= 0 && col < d  &&
         board[row][col] == 0;

}

bool  getMove(int board[D][D], int d, int move_no, int currRow, int currCol){
  if(move_no == d*d) {
    //to all possible solution
    //just do not return if isSuccessfull is true
    //printBoard(board, d);
    return true;
  }
  int row[] = { +2, +1, -1, -2, -2, -1, +1, +2};
  int col[] = { +1, +2, +2, +1, -1, -2, -2, -1};
  for(int next = 0; next < 8; ++next){
    int nextRow = currRow + row[next];
    int nextCol = currCol + col[next];
    if(canPlace(board, d, nextRow, nextCol)){
      board[nextRow][nextCol] = move_no + 1;
      bool success = getMove(board, d, move_no + 1, nextRow, nextCol);
      
      if(success)return true;
      board[nextRow][nextCol] = 0;

    }
  }
  return false;
}

int main(int argc, char const *argv[]) {
  /* code */
  int board[D][D] {0};
  int d;
  cin >> d;
  board[0][0] = 1;
  bool ans = getMove(board, d, 1, 0, 0);
  if(ans){
    printBoard(board, d);
  }else{
    cout << "Can't complete the move !\n";
  }
  return 0;
}
