/*Main*/
#include <iostream>
using namespace std;

int main() {
    /*Variable & constant declarations*/
  int board[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  bool win_condition = false;
  void print_board(){
    cout<<"   |   |  \n";
    cout<<""<< board[0][0]<<" |  "<< board[0][1]<<" |  "<< board[0][2]<<"  \n"
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<""<< board[1][0]<<" |  "<< board[1][1]<<" |  "<< board[1][2]<<"  \n"
    cout<<"___|___|___\n";
    cout<<"   |   |  \n";
    cout<<""<< board[2][0]<<" |  "<< board[2][1]<<" |  "<< board[2][2]<<"  \n"
    cout<<"   |   |  \n";

  }
  print_board();
}