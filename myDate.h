
#ifndef MYDATE_MYDATE_H
#define MYDATE_MYDATE_H

<<<<<<< HEAD
using namespace std;

=======
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9

class myDate {
private:
    int month = 5, day = 11, year = 1959;
public:
    myDate();
    myDate(int m, int d, int y);
    int Greg2Julian(int month, int day, int year);
    int Julian2Greg(int JD, int &month, int &day, int &year);
    void display();
<<<<<<< HEAD
    void increaseDate();
    void decreaseDate();
=======
    //void increaseDate();
    //void decreaseDate();
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
    void addMonth();
    int daysBetween(myDate D);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
<<<<<<< HEAD
    string dayname();
=======
   // string dayName();
>>>>>>> f3c5b83d90d5bef1b7270c41a773357e1e9160d9
};


#endif //MYDATE_MYDATE_H
