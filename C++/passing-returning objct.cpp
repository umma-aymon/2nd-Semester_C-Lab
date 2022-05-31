#include <iostream>
using namespace std;
class Student
{
public:
   int i, a;
   string n;
   /* In this function we are returning the
    * Student object.
    */
   Student input(int n, int a, string s)
   {
      Student obj;
      obj.i = n;
      obj.a = a;
      obj.n = s;
      return obj;
   }
   /* In this function we are passing object
    * as an argument.
    */
   void disp(Student obj)
   {
      cout << "Name: " << obj.n << endl;
      cout << "Id: " << obj.i << endl;
      cout << "Age: " << obj.a << endl;
   }
};
int main()
{
   Student s;
   s = s.input(1001, 29, "Negan");
   s.disp(s);
   return 0;
}
/* Name: Negan
Id: 1001
Age: 29
*/
