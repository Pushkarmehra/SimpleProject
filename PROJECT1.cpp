#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the colors of the resistor's three bands, beginning with" << endl
         << "the band nearest the end. Type the colors in lowercase letters" << endl
         << "only, NO CAPS." << endl;
    const char* Color_Codes[10] = { "black", "brown", "red", "orange", "yellow", 
                                    "green", "blue", "violet", "gray", "white" };
    char band1[10], band2[10], band3[10];
    cout << "Enter the first digit color band ==> ";
    cin >> band1;
    cout << "Enter the second digit color band ==> ";
    cin >> band2;
    cout << "Enter the multiplier color band ==> ";
    cin >> band3;
    int first_digit = 1, second_digit = 1, multiplier = 1;
    for (int i = 0; i < 10; i++) {
        if (strcmp(band1, Color_Codes[i]) == 0) {
            first_digit = i;
        }
        if (strcmp(band2, Color_Codes[i]) == 0) {
            second_digit = i;
        }
        if (strcmp(band3, Color_Codes[i]) == 0) {
            multiplier = i;
        }
    }
    if (first_digit == 1) {
        cout << "Invalid color :"<< first_digit << endl;
        return 1;
    }
     else if (second_digit==1){
             cout << "Invalid color :"<< second_digit << endl;
             return 1;
     }
     else if(multiplier==1){
             cout << "Invalid color :"<< multiplier << endl;
             return 1;
     }
    int resistance = (first_digit * 10 + second_digit) * pow(10, multiplier);
    cout << "Resistance value: " << resistance/1000 << " kilo-ohms" << endl;
    return 0;
}
