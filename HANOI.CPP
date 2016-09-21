#include   <iostream>
using namespace std;

const int disks = 6;  // Make this constant much smaller to run program.
void move(int count, int start, int finish, int temp);
 
/* 
 
Pre:  None.
Post: The simulation of the Towers of Hanoi has terminated.
 */

void main()
{
   move(disks, 1, 3, 2);
}
 
void move(int count, int start, int finish, int temp)
{
   if (count > 0) {
      move(count - 1, start, temp, finish);
      cout << "Move disk " << count << " from " << start
           << " to " << finish << "." << endl;
      move(count - 1, temp, finish, start);
   }
}
