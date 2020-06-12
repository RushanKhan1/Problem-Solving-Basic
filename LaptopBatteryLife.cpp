#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int getBattery(vector<int>);
int getBattery(vector<int> events) {
int battery = 50;
for(int i = 0; i < events.size(); i++)
  {
      battery = battery + events.at(i);
      if(battery > 100)
      {
          battery = 100;
      }
  }
  return battery; //Remaining battery is returned.
}
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int eventsCount, x, result;
     cin >> eventsCount;
     vector<int> events;
     for(int i = 0; i < eventsCount; i++)
     {
         cin >> x;
         events.push_back(x);
     }
     result = getBattery(events);
     cout << result << endl;
     return 0;
 }