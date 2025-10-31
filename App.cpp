#include <iostream>
#include <ctime>
#include <string>

using namespace std;


void PrintTableHeader() {
    cout << "\t \t \t  Multiplication table from 1 to 10\t \t \t " << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "\t" << i ;
    }
    cout << endl;
   

    for (int i = 1; i <= 90; i++) {
        cout << "-" ;
    }
    cout << endl;
}
 
string ColumnSeparator(int i) {
        if (i < 10)
            return  "    |";
        else
            return  "   |";
}


void MultiplicationTable() {
     
    for (int i = 1; i <= 10;i++) {
        cout << " " << i << ColumnSeparator(i)<< "\t";
        for (int j = 1; j <= 10;j++) {
            cout << i * j << "\t";
        }
      
        cout << endl;
    }
    cout << endl;


}

 
int main() {
    PrintTableHeader();
    MultiplicationTable();
}
