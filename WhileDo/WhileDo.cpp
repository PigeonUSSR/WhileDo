/*************************
* Автор: Прохоров В.В.   *
* Дата: 06.10.2026       *
* Название: Лаб. No2     *
* Вариант: 25            *
*************************/

#include <iostream>

using namespace std;

int main() {

	const double Res0 = 1.7;
	const double T0 = 298.0;
	const double p = 4.0 * pow(10, 3);
	const double firstStep = 10.0;
	const double secondStep = 25.0;
	const double T = 20.0;
	const double changePointT = 50.0;
	const double finishT = 200.0;
	int stepIndex = 0;
	double argumentT = T;
	double Res;

	do {
		Res = Res0 * ( (p * (T0 - argumentT) ) / (T0 * T) );
		cout << argumentT << " " << Res << "\n";
		++stepIndex;
		argumentT = T + stepIndex * firstStep;
	}while (argumentT <= changePointT);

	stepIndex = 1;
	argumentT = changePointT + stepIndex * secondStep;
	while (argumentT <= finishT) {
		Res = Res0 * ( (p * (T0 - argumentT) ) / (T0 * T) );
		cout << argumentT << " " << Res << "\n";
		++stepIndex;
		argumentT = changePointT + stepIndex * secondStep;
	}

}