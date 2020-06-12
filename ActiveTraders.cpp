#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
vector <string> mostActive(vector<string>);

vector<string> mostActive(vector<string> customers) {
    int count = 0, perc = 0, c = 0;
    vector<string> ar;
    int size = customers.size();
    map<string, int> mp;
    for(int i = 0; i < size; i++) //Initialising the map
    {
        mp.insert(pair<string, int>(customers.at(i), 1));
    }
    for (int i = 0; i < size; i++) {
    if( (mp.at(customers.at(i)) * 100)/size >= 5)
    {
        if(mp.at(customers.at(i)) != -1){    
        ar.push_back(customers.at(i));
        mp.at(customers.at(i)) = -1;
        }
    }
    }
    sort(ar.begin(), ar.end());
    return ar;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; //storing customers count.
    string cust;
    vector <string> customers;
    vector <string> ActiveCustomers;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> cust;
        customers.push_back(cust);
    }
    ActiveCustomers = mostActive(customers);
    for(int i = 0; i < ActiveCustomers.size(); i++)
    {
        cout << ActiveCustomers.at(i) << endl;
    }
    return 0;
}