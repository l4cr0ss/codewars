#include <cmath>
class BuyCar
{

  public:
  static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
  {
    double old_car = startPriceOld;
    double new_car = startPriceNew;
    double savings = old_car;
    int month;
    for (month=1; savings<new_car; month++) {
      if(month%2==0) percentLossByMonth += 0.5; 
      old_car *= 1-percentLossByMonth/100;
      new_car *= 1-percentLossByMonth/100;
      savings = old_car+month*savingperMonth;
    }
    savings -= new_car;
    return { month-1, (int)std::round(savings) };
  };
};
