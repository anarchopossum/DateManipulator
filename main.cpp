<<<<<<< HEAD
/*
 * THIS IS FOR DEBUG PURPOSES ONLY
 */
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
#include <iostream>
#include "myDate.h"

using namespace std;

int main() {
    int day = 22;
    int month = 2;
    int year = 2022;
    myDate a;
    myDate compdate(5,5,1959);
    int testr = a.Greg2Julian(6,16,1997);
    cout << "Default Date: ";
    a.display();
    cout << "Greg2Jul 6/16/1997: " << testr<<endl;
    a.Julian2Greg(testr, month, day, year);
    cout << "Jul2Greg: "<< month <<"/"<<day<<"/"<<year<<endl;

    cout << "\nGet value tester:\n";
    cout << "month: "<< a.getMonth() << " Day: " << a.getDay() << " Year: "<< a.getYear()<<endl;

    cout << "\nDay of year tester:";
    cout <<a.dayOfYear();

<<<<<<< HEAD
    cout<<"\n"<<a.daysBetween(compdate)<<endl;


    for (int i = 0; i < 80; ++i) {
        //a.addMonth();
        a.display();
        //a.increaseDate();
        a.decreaseDate();
    }

    cout << a.dayname();
=======
    cout<<"\n"<<a.daysBetween(compdate);
    /*
     * for (int i = 0; i < 12; ++i) {
        a.addMonth();
        a.display();
    }
*/
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9

}
