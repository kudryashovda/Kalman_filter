// Based on https://www.youtube.com/playlist?list=PLX2gX-ftPVXU3oUFNATxGXY90AULiqnWT videos

#include <iostream>
#include <vector>

using namespace std;

int main() {

  const vector<double> MEA = {75, 71, 70, 74, 70, 71, 75, 70};
  const double Emeas = 4;

  double Eest = 2;
  double EST = 68;

  for (auto meas : MEA) {
    double KG = Eest / (Eest + Emeas);
    EST = EST + KG * (meas - EST);
    Eest = (1 - KG) * Eest;
    cout << meas << '\t' << EST << '\t' << Eest << '\t' << KG << '\n';
  }
}
