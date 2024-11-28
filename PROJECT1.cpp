#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"Enter the colors of the resistor's three bands, beginning with"<<endl<<" the band nearest the end. Type the colors in lowercase letters"<<endl<<" only, NO CAPS."
  char colours_band[10][7]{"black","brown","red","orange","yellow","green","blue","violet","gray","white"};
  char band1[7],band2[7],ban3[7];
  cout<<"Enter the first digit color band ==>";
  cin>>band1;
  cout<<"Enter the second digit color band ==>";
  cin>>band2;
  cout<<"Enter the third digit color band ==>";
  cin>>band3;
  return 0;
}
