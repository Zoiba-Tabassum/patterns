#include <iostream>
using namespace std;
int main()
{
    int row, column,n;
 /*
  // Hollow rectangle
  //-- Output
  Enter number of rows            8
  Enter number of columns         9
* * * * * * * * * 
*               * 
*               * 
*               * 
*               * 
*               * 
*               * 
* * * * * * * * * 
  */
// CODE--

  cout<<"Enter number of rows \t\t";
  cin >> row;
  cout<<"Enter number of columns \t";
  cin>> column;
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

  
  //Inverted Half Pyramid
  //--Output
/*
Enter number of rows    8
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

  //CODE--
  cout<<"Enter number of rows \t";
  cin>>n;

  for(int i=n; i>0; i--){
    for (int j=0; j<i;j++){

      cout<<"* ";
    }
    cout<<endl;
  }

  //Half Pyramid 
 // -- Output
 /*
 Enter number of rows    5
*
* *
* * *
* * * *
* * * * *

 */
 //CODE --
 cout<< "Enter number of rows \t";
 cin>>n;

 for(int i=0;i<n;i++){
  
  for (int j=0;j<i+1;j++){
    cout<<"* ";
  }
  cout<<endl;
 }

 // Rhombous Star Pattern
 //--Output
 /*
 Enter number of rows     5
* * * * *
 * * * * *
  * * * * *
   * * * * *
    * * * * *
 */

//CODE--
cout<<"Enter number of rows\t";
cin>>n;
for(int i=0;i<n;i++){
  for(int j=0;j<i;j++){
    cout<<" ";
  }
  for(int j=0;j<n;j++){
    cout<<"* ";
  }
  cout<<endl;
}

//Triangle
//--Output
/*
Enter number of rows    5
    *
   * *
  * * *
 * * * *
* * * * *
*/

//CODE--
 cout<<"Enter number of rows\t";
cin>>n;
for(int i=1;i<=n;i++){
  for (int j=0;j<n-i;j++){
    cout<<" ";
  }
  for (int j=0;j<i;j++){
    cout<<"* ";
  }
  cout<<endl;
}

//Flipped simple pyramid
//--Output
/*

*/

//CODE--
cout<<"Enter number of rows\t";
cin >>n;
for (int i=n;i>0;i--){
  for(int j=0; j<i;j++){
    cout<<"  ";
  }
  for(int j=0;j<=(n-i);j++){
    cout<<" *";
  }
  cout<<endl;
}

}