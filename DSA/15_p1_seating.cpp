#include <bits/stdc++.h>
using namespace std;

int main()
{

  // testcase
  int t;
  cin >> t;
  while (t--){

    // input
    int n, k;
    cin >> n >> k; // team = n, seat = k
    int a[n];
    int total=0;
    for (int i = 0; i < n; i++){
      cin >> a[i]; // fan = i
      total+=a[i];
    }

    // process
    int ans = 0;
    for (int i = 0; i < n; i++){ // 1st team = i
      for (int j = i + 1; j < n; j++){               // 2nd team = j
        int fans = 0; // fans count
        // for (int x = 0; x < n; x++){
        //   if (x == i || x == j){
        //     fans += a[x]; // self team
        //   } else {
        //     fans += a[x] / 2; // other team
        //   }
        // }
        fans = a[i] + a[j] + (total - a[i] - a[j]) / 2;
        if (fans > k){
          ans++; // fans are greater than seat
        }
      }
    }

    // output
    cout << ans << endl; 
  }
  return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.codechef.com/problems/STRSEAT
// https://www.codechef.com/viewsolution/1332319497
