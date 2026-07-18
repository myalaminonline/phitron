#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, q;
    cin >> n >> m >> q;

    int grid[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
        }
    }

    while(q--)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        int sum = 0;
        for(int i=r1; i<=r2; i++)
        {
            for(int j=c1; j<=c2; j++)
            {
                sum += grid[i][j];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
// // You are given an  grid of integers. Each cell contains a certain amount of treasure buried beneath it. Your task is to process  , each asking for the total treasure within a rectangular subgrid.

// Each query provides two corners:

// Top-left corner 
// Bottom-right corner 
// where    and   
// You must calculate the sum of all treasures in the subgrid defined by these corners. The subgrid includes all cells from row  to  and coloum  to  inclusive.

// If a query gives  = (1,1) and  = (2,2) the selected subgrid will include the following cells:

// (1,1) (1,2)

// (2,1) (2,2)

// To help you visualize this, refer to the image below where the selected subgrid is highlighted.

// image The cell values are:

// cell (1,1) = 9 and cell (1,2) = 8

// cell (2,1) = 20 and cell (2,2) = 12

// So Total Sum: 9 + 8 + 20 + 12 = 49

// Input Format

// First line: Three integers  and  (N=number of rows, M=number of coloums and Q = Number of queries)
// Next  lines: Each line contains  integers, the grid values
// Next  lines: Each line contains four integers 
// ₁
// ₁
 
// ₂
// ₂
// Constraints

// ³
// ³
// ₁
// ₂
// ₁
// ₂
// Output Format

// For each query, output a single integer: the sum of treasures in the specified subgrid

// Sample Input 0

// 4 4 2
// 2 4 5 6
// 1 9 8 7
// 10 20 12 3
// 44 100 4 2
// 1 1 2 2
// 3 0 3 0
// Sample Output 0

// 49
// 44
// Explanation 0

// First line: 4 4 2

// N = 4 (rows), M = 4 (columns) and Q = 2 (number of queries)

// Next 4 lines: the grid values

// Row 0: 2 4 5 6

// Row 1: 1 9 8 7

// Row 2: 10 20 12 3

// Row 3: 44 100 4 2

// Next 2 lines: the queries

//  = (1, 1),  = (2, 2)

//  = (3, 0),  = (3, 0)

// First Query answer: 49 (already shown in the problem statement)

// Second Query:  = (3,0) and  = (3,0)

// That means only one cell (row 3, column 0): 44