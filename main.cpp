#include <iostream>
#include <fstream>

using namespace std;

/*
 *
 *This program reads data out of a file into an array
 *and finds the lowest, highest, and average values
 *
 *Data Structures @ TCC
 *
 *Arick Mounts
 */

double mean (int param[20]);
int ceil (int param[20]);
int floor (int param[20]);

int main() {
  ifstream inFile;
  inFile.open ("project_02_data.txt");
  int arr[20];
  for (int i = 0; i < 20; i++){
    inFile >> arr[i];
  }
  
  cout << "The average is: " << mean(arr) << endl;
  cout << "The highets value is: " << ceil(arr) << endl;
  cout << "The lowest value is: " << floor(arr) << endl;
  
  inFile.close();
}

double mean (int param[20]){
  int sum = 0;
  double avg;
  for (int i = 0; i < 20; i++){
    sum += param[i];
  }
  avg = double(sum) / 20;
  return avg;
}

int ceil (int param[20]){
  int ceil = param[0];
  for(int i = 0; i < 20; i++){
    if (ceil < param[i]){
      ceil = param[i];
    }
  }
  return ceil;
}

int floor (int param[20]){
  int floor = param[0];
  for(int i = 0; i < 20; i++){
    if (floor > param[i]){
      floor = param[i];
    }
  }
  return floor;
}