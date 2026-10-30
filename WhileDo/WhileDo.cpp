/*********************************************
* Автор: Прохоров В.В.                       *
* Дата: 06.10.2026                           *
* Название: Циклы с пред- и постусловием     *
* Вариант: 25                                *
*********************************************/

#include <iostream>

using namespace std;

int main() {
  double Res0, firstStep, secondStep, T, changePointT, finishT, Res, argumentT;
  int stepIndex, p, T0;
	
  Res0 = 1.7;
  T0 = 298;
  p = 4000;
  stepIndex = 0;
  argumentT = T;
	
  cout << "Enter start Tempature = "; cin << T;
  cout << "Enter finish Tempature = "; cin << finishT;
  cout << "Enter first step of Tempature change = "; cin << firstStep;
  cout << "Enter second step of Tempature change = "; cin << secondStep;
  cout << "Enter Tempature where start second step = "; cin << changePointT;

  do {
    Res = Res0 * ((p * (T0 - argumentT)) / (T0 * T));
    cout << argumentT << " " << Res << "\n";
    ++stepIndex;
    argumentT = T + stepIndex * firstStep;
  } while (argumentT <= changePointT);

  stepIndex = 1;
  argumentT = changePointT + stepIndex * secondStep;
  while (argumentT <= finishT) {
    Res = Res0 * ((p * (T0 - argumentT)) / (T0 * T));
    cout << argumentT << " " << Res << "\n";
    ++stepIndex;
    argumentT = changePointT + stepIndex * secondStep;
  }
}
