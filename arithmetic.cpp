#include <iostream>
#include <cmath>
using namespace std;

int powerOf10(int n){
  int ans = 1;
  for(int i = 0; i < n; i++){
    ans *= 10;
  }
  return ans;
}

int getDigitAtPosition(int n, int pos){
  return int((n % (powerOf10(pos + 1))) / (powerOf10(pos)));
}

int binaryAddition(int num1, int num2){
  int ans = 0;
  int numDigits = max(floor(log10(num1)) + 1, floor(log10(num2)) + 1);
  int carry = 0;
  for(int i = 0; i < numDigits; i++){
    ans += ((getDigitAtPosition(num1, i) + getDigitAtPosition(num2, i) + carry) % 2) * powerOf10(i);
    carry = floor((getDigitAtPosition(num1, i) + getDigitAtPosition(num2, i) + carry) / 2);
  }
  if(carry == 1){
    ans += carry * powerOf10(numDigits);
  }
  return ans;
}

int binarySubtraction(int num1, int num2){
  int ans = 0;
  int borrow = 0;
  int numDigits = max(floor(log10(num1)) + 1, floor(log10(num2)) + 1);
  for(int i = 0; i < numDigits; i++){
    if(getDigitAtPosition(num1, numDigits - 1 - i) < getDigitAtPosition(num2, numDigits - 1 - i)){
      return -1;
    }
    if(getDigitAtPosition(num1, numDigits - 1 - i) > getDigitAtPosition(num2, numDigits - 1 - i)){
      break;
    }
  }
  for(int i = 0; i < numDigits; i++){
    int p = abs(((getDigitAtPosition(num1, i) - getDigitAtPosition(num2, i) - borrow) % 2));
    ans += p * powerOf10(i);
    if(getDigitAtPosition(num1, i) - getDigitAtPosition(num2, i) - borrow == -1 || getDigitAtPosition(num1, i) - getDigitAtPosition(num2, i) - borrow == -2){
      borrow = 1;
    }
    else{
      borrow = 0;
    }
  }
  return ans;
}

int binaryShiftLeft(int n){
  return n * 10;
}

int binaryShiftRight(int n){
  return floor(n / 10);
}

int main(){
  cout << binaryAddition(111011, 111) << endl;
  cout << binarySubtraction(111011, 111) << endl;
  cout << binaryShiftLeft(111011) << endl;
  cout << binaryShiftRight(111011) << endl;
  return 0;
}
