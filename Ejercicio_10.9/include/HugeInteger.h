#ifndef HugeInteger_H
#define HugeInteger_H
#include <array>
#include <iostream>
#include <string>

using namespace std;

class HugeInteger {
friend ostream& operator<<(ostream&, const HugeInteger&);
public:
    static const int digits{40}; // maximum digits in a HugeInteger

    HugeInteger(long = 0); // conversion/default constructor
    HugeInteger(const string&); // conversion constructor

    // addition operator; HugeInteger + HugeInteger
    HugeInteger operator+(const HugeInteger&) const;

    // addition operator; HugeInteger + int
    HugeInteger operator+(int) const;

    // addition operator;
    // HugeInteger + string that represents large integer value
    HugeInteger operator+(const string&) const;

    HugeInteger operator*(const HugeInteger&) const;
    HugeInteger operator/(const HugeInteger&) const;
    bool operator==(const HugeInteger&) const;
    bool operator!=(const HugeInteger&) const;
    bool operator>(const HugeInteger&)const;
    bool operator<(const HugeInteger&)const;
    bool operator>=(const HugeInteger&)const;
    bool operator<=(const HugeInteger&)const;
private:
    array<short, digits> integer{}; // default init to 0s
};

#endif
