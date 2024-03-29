
#include <iostream>
#include <string>
<<<<<<< HEAD
#include <math.h>
using namespace std;
#include "myDate.h"


=======
using namespace std;
#include "myDate.h"

>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
myDate::myDate() {}
myDate::myDate(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

// Math formulas to convert between calendar systems
int myDate::Greg2Julian(int month, int day, int year){

    int I = year;
    int J = month;
    int K = day;
    //pass day, month, year and return julian number
    int JD = K-32075+1461*(I+4800+(J-14)/12)/4+367*(J-2-(J-14)/12*12)/12-3*((I+4900+(J-14)/12)/100)/4;
    return JD;
}
int myDate::Julian2Greg(int JD, int &month, int &day, int &year) {
    int I, J, K, L, N;
    L = JD + 68569;
    N = 4 * L / 146097;
    L = L - (146097 * N + 3) / 4;
    I = 4000 * (L + 1) / 1461001;
    L = L - 1461 * I / 4 + 31;
    J = 80 * L / 2447;
    K= L - 2447 * J / 80;
    L = J / 11;
    J= J + 2 - 12 * L;
    I = 100 * (N-49) + I + L;

    year = I;
    month = J;
    day = K;
    return 0;
}

void myDate::display(){
    string monthName;
    switch (month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
    }
    cout << monthName << " " << day << ", " << year << endl;
}

<<<<<<< HEAD
// Date increments and decrements
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
void myDate::addMonth() {
    month++;
    if (month > 12){
        month = 1;
        year++;
    }
}
<<<<<<< HEAD
void myDate::increaseDate() {
    int adder = Greg2Julian(month,day,year);
    Julian2Greg(++adder,month,day,year);
}
void myDate::decreaseDate() {
    int adder = Greg2Julian(month,day,year);
    Julian2Greg(--adder,month,day,year);
}
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9

// The Get Functions for bringing back int values of date attributes
int myDate::getMonth(){
    return month;
}
int myDate::getDay(){
    return day;
}
int myDate::getYear(){
    return year;
}

<<<<<<< HEAD
// returns the Julian day of the year
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
int myDate::dayOfYear(){
    int currYear = this->getYear();
    int startOfYear = this->Greg2Julian(1,1,currYear);
    int targetDate = this->Greg2Julian(month,day,year);


    return targetDate-startOfYear+1;
}

<<<<<<< HEAD
// finds the amount of days between two dates.
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
int myDate::daysBetween(myDate D) {
    int Dday = D.getDay();
    int Dmonth = D.getMonth();
    int Dyear = D.getYear();
    int Ddate,Cdate;

    Ddate = D.Greg2Julian(Dmonth,Dday,Dyear);
    Cdate = this->Greg2Julian(month,day,year);

    if (Ddate > Cdate){
        return Ddate - Cdate;
    } else{
        return Cdate - Ddate;
    }
}
<<<<<<< HEAD

string myDate::dayname(){
    int JulDay = this->getDay();
    int result = JulDay % 7;
    switch (result) {
        case 0:
            return "Monday";
        case 1:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "error";
    }
}
=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
#include "myDate.h"
