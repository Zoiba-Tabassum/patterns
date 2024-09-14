#include <iostream>
using namespace std;
int main()
{
    int row, column;
 
  // Hollow rectangle
  cout<<"Enter number of rows \t\t";
  cin >> row;
  cout<<"Enter number of columns \t";
  cin>> column;
  int v=column-1;
  for (int i=0; i<row; i++){
    for (int j=0; j<column ; j++){
      if(j==0 || j==(column-1) || i==0 || i==(row-1) ){
      cout<<"* "; 
      }
      else{
        cout<<"  ";
      }
  
    }
    cout<<endl;
  }
  

}