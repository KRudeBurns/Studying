#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <stdexcept>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    try
    {
        vector<int> v;
        for(int x; cin>>x;)
        {
            v.push_back(x);
        }
        for (int i = 0; i <= v.size(); ++i)
        {
            cout << "v[" << i << "] == " << v[i] << "\n" ;
        }   

        return 0;     
    }
    catch(out_of_range)
    {
        cerr << "Oops! Range error\n";
        return 1;
    }
    catch(...) //catch all other exceptsion
    {
        cerr << "Exception: something went wrong\n";
        return 2;
    }
    
}