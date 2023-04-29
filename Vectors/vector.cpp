#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myData;
    myData.push_back(4);

    cout << myData[0] << endl;
    cout << myData.size() << endl;
    cout << myData.front() << endl;
    cout << myData.back() << endl;

    myData.push_back(234);
    cout << myData.front() << endl;
    cout << myData.back() << endl;
    cout << myData.max_size() << endl;
    myData.clear();
    cout << myData[2] << endl;

    vector<int> NoData = {5};
    myData.push_back(453);

    myData.swap(NoData);
    cout << myData[0] << endl;
    cout << NoData[0];
    
   
    return 0;
}