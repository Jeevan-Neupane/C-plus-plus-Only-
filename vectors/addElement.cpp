#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(1);
    }
    
   v.clear();

    for (int i = 0; i <= v.size(); i++)
    {
        cout << v[i] << " ";
        cout<<"I cannot do anything"<<endl;
    }

    return 0;
}