#include <iostream>

using namespace std;
// simple class programme.
class student{
public:
    float markObtain;

     void marks(string Name){
        cin >> markObtain;
        cout << "Marks obtain by student "<< Name << " is => " << markObtain<<endl;
    }

     void percentage(){
        float per;
        per = (markObtain/150) * 100;
        cout << per << "%" << endl;
    }
};

int main(){
    student a, b, c;
    a.marks("Dheeraj Kumar");
    b.marks("Rabinder");
    c.marks("Sachin");

    a.percentage();
    b.percentage();
    c.percentage();

    return 0;
}