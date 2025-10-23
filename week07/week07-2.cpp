/// week07-2.cpp
/// 礶禬よ, 计癬ㄓ
/// TAICA ユ膀娄祘Α砞璸(C++)  戳いσ肈 材6肈
#include <iostream>
using namespace std;
int main()
{
   int n; /// Part 1:Input
   cin >> n;

   for(int i=1; i<n*2; i++) { /// Part2: Output
      for(int j=1; j<n*2; j++) {
          /// ㄓぇ,  祇瞷タいみ1Τ種, Τ翴狥﹁!!!
          int d=max(i-n, j-n);
          cout << d; /// cout << n;
      }
      cout << endl; ///cout << "瞷i琌: " << i << endl; ///加糷阀├
   }
} /// 2穦Τ3糷加, 3穦Τ5糷加, 4穦Τ7糷加, 5穦Τ9糷加
