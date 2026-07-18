#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Printing the complexity table to the console
    cout << R"(
===================================================================================
             COMPLEXITY OF EVERY OPERATION ON SINGLY LINKED LIST
===================================================================================

| OPERATION      | POSITION / METHOD       | COMPLEXITY | ADDITIONAL NOTES        |
|----------------|-------------------------|------------|-------------------------|
| Insertion      | at Head                 | O(1)       |                         |
|                | at Tail                 | O(N)       | without tail tracking   |
|                |                         | O(1)       | with tail tracking      |
|                | at any position         | O(N)       |                         |
|----------------|-------------------------|------------|-------------------------|
| Deletion       | at Head                 | O(1)       |                         |
|                | at Tail                 | O(N)       |                         |
|                | at any position         | O(N)       |                         |
|----------------|-------------------------|------------|-------------------------|
| Printing       | Forward                 | O(N)       |                         |
|                | Backward                | O(N)       | using recursion         |
|----------------|-------------------------|------------|-------------------------|
| Input          |                         | O(N)       | with tail tracking      |
|                |                         | O(N*N)     | without tail tracking   |
|----------------|-------------------------|------------|-------------------------|
| Sorting        |                         | O(N*N)     | using selection sort    |
===================================================================================
)" << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
