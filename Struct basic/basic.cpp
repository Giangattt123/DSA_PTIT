#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i = (a) ; i < (b) ; i++)
#define snl int
struct car {
  string brand;
  string model;
  int year;
};
int main(){
//	// Create a structure variable called myStructure  ->> ten cua bien cau truc
//	struct {
//	  int myNum;
//	  string myString;
//	} myStructure;
//
//	// Assign values to members of myStructure
//	myStructure.myNum = 1;
//	myStructure.myString = "Hello World!";
//
//	// Print members of myStructure
//	cout << myStructure.myNum << "\n";
//	cout << myStructure.myString << "\n";
	
	// Mot cau truc co the dat trong nhieu bien
	struct {
  		int myNum;
  		string myString;
	} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
	
	car Car1;
	Car1.brand = "Toyota";
	Car1.model = "X5";
	Car1.year = 2000;
	
	car Car2;
	
	
	// Mot bien tham chieu là mot "tham chieu" den mot bien hien có và nó duoc tao bang &toán tu:
	string food = "Pizza";
	string &meal = food;
	cout << food << endl;
	cout << meal << endl; // meal cx la 1 bien tham chieu
	
}
