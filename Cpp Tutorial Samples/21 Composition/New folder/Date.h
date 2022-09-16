// Fig. 10.8: Date.h
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H
 
class Date
{
public:
   // explicit Date(int, int, int);

    //Date(const Date& other) :
    //    //
    //    // Since this is a user-defined copy constructor,
    //    // all member initialization must be done explicitly.
    //    //
    //    month{ other.month },
    //    day{ other.day },
    //    year{ other.year }
    //{
    //    cout << "Date copy constructor" << endl;
    //}
    static const unsigned int monthsPerYear = 12; // number of months in a year
    explicit Date(int = 1, int = 1, int = 1900); // default constructor
    void print() const; // print date in month/day/year format
    ~Date(); // provided to confirm destruction order

private:
    unsigned int month; // 1-12 (January-December)
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
}; // end class Date

#endif