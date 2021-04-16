#include <bits/stdc++.h>
#define ll long long int
#define deci long double
#define ill int_fast64_t

using namespace std;
using namespace std::chrono;
int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
     ill  test=0;
     ll tess=0;
      auto start = high_resolution_clock::now(); 
     for (tess=0; tess<10000000000; tess++)
     {

     }
     auto stop = high_resolution_clock::now(); 
    //  for (tess=0; tess<10000000000; tess++)
    //  {
         
    //  }
     
     auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count()/1000000 << " seconds" << endl;
  
    cout << endl << sizeof(test)  << endl << sizeof(tess)  <<endl;
    return 0;
}