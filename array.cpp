#include <iostream>
using namespace std;

int main() {
   int arr[10];
   int input, equal = 0, greater = 0, less = 0;

   // Accept values from the user in the array
   cout << "Enter 10 integers: ";
   for (int i = 0; i < 10; i++) {
      cin >> arr[i];
   }

   // Input a number from the user to compare with the array elements
   cout << "Enter another number: ";
   cin >> input;

   // Compare the input with each element in the array
   for (int i = 0; i < 10; i++) {
      if (arr[i] == input) {
         equal++;
      }
      else if (arr[i] > input) {
         greater++;
      }
      else {
         less++;
      }
   }

   // Output the results
   cout << "Number of elements equal to the input: " << equal << endl;
   cout << "Number of elements greater than the input: " << greater << endl;
   cout << "Number of elements less than the input: " << less << endl;

   return 0;
}

