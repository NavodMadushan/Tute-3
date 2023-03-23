/*
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<setw(5)<< "No"<<setw(15) << "Name"<<setw(16) << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout << setw(5)<< r+1; 
 cout<<setw(15)<< names[r];
 cout<<setw(16)<< marks[r] << endl;
 }

}*/


/*#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;
 
 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;
 
 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;
 
 totalVolume = volume(box1Height, box1Width, box1Length)
 + volume(box2Height, box2Width, box2Length);
 
 cout << "Volume of Box is " << totalVolume << endl;
 
 return 0;
}
// Implement the Volume() function here
int volume(int height, int width, int length){
  return height*width*length;
}*/

#include <iostream>
using namespace std;
  struct{
    int height;
    int width;
    int length;
  }Box1,Box2;
int volume(int height, int width, int length);

int main() {
 
 int totalVolume;
 cout << "Enter Box 1 Height : ";
 cin >> Height of Box 1;
 cout << "Enter Box 1 Width : ";
 cin >> Width of Box 1;
 cout << "Enter Box 1 Length : ";
  cin >> Length of Box 1;
 
 cout << "Enter Box 2 Height : ";
 cin >> Height of Box 2;
 cout << "Enter Box 2 Width : ";
 cin >> Width of Box 2;
 cout << "Enter Box 2 Length : ";
 cin >> Length of Box 2;
 
 
 totalVolume = volume( , , )
 + volume( , , );
 
 
 cout << "Volume of Box is " <<       totalVolume << endl;
 
 return 0;
}
int volume(int height, int width, int length);
return height*width*length;
}

