#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:
        float payRate;
    public:
        void setPayRate(float rateIn);
        float getPayRate();
        virtual float calcWeeklyPay(); 
};

void Employee::setPayRate(float payRate_in) {
    payRate = payRate_in;
}

float Employee::getPayRate() {
    return payRate;
}

float Employee::calcWeeklyPay() {
    // cout << "Employee, pay rate. ";
    return payRate * 40;
}

class Manager : public Employee {
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay() {
    return Employee::getPayRate() / 52;
}