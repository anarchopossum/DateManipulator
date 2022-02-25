
#include <iostream>
#include <string>
using namespace std;
#include "myDate.h"

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

void myDate::addMonth() {
    month++;
    if (month > 12){
        month = 1;
        year++;
    }
}

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

int myDate::dayOfYear(){
    int currYear = this->getYear();
    int startOfYear = this->Greg2Julian(1,1,currYear);
    int targetDate = this->Greg2Julian(month,day,year);


    return targetDate-startOfYear+1;
}

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
#include "myDate.h"
