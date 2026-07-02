#include<bits/stdc++.h>  // this library have every contains 
/// @brief //
 //1.vectors
vector<int> marks;

marks.push_back(90);
marks.push_back(80);
marks.push_back(70);
cout << marks[0]; // 90


//2. pair
pair<int,string> p;

p.first = 101;
p.second = "Ram";
(101, Ram)

//3. stack
Top -> Plate3
       Plate2
       Plate1
stack<int> st;

st.push(10);
st.push(20);

st.pop();

//4. queue
queue<int> q;

q.push(10);
q.push(20);

q.pop();
FIFO
First In First Out


//5. prioty queue
priority_queue<int> pq;

pq.push(5);
pq.push(10);
pq.push(2);
pq.top(); // 10
Largest comes first.

in queue top means print the top element which is present

for in pq if we want in ascending order 
priority queue<int ,vector<int> ,greater<int>>pq;
 it will print 2 4 6 8 like this 


 push O(logn)
 top O(1)

 College ID database

Duplicate IDs not allowed.

set<int> s;

s.insert(10);
s.insert(10);
s.insert(20);
10 20

Duplicate removed automatically.

7. Unordered Set

Same college database but not sorted.

unordered_set<int> s;

May store:

20 10

Faster searching than set.

Interviewers love asking:

Difference between set and unordered_set?

Answer:

set -> sorted
unordered_set -> not sorted