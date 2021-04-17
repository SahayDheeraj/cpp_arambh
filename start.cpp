// Object Oriented Programming(OOP) basic topics cover here.
// classes, objects, access modifiers
// encapsulation, abstraction, inheritanse, polymorphism.
/* #include <iostream>
using namespace std;
using std::string;  */
//class and objects && Access modifiers
/*
class Employee {
    public:
    string Name;
    string Company;
    int Age;
    
void IntroduceYourSelf(){
    cout<<"Name - "<<Name<<endl; 
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl; 
}

//constructors
Employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;
}

};

int main(){

    Employee employee1 = Employee("Dheeraj Sahay", "Msit-Janakpuri",20);
//    employee1.Name = "Dheeraj Sahay";
//    employee1.Company = "Msit-Janakpuri";
//    employee1.Age = 20;
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Sahay  Sahay ", "Amazon",21);
//    employee2.Name = "Sahay Dheeraj";
//    employee2.Company = "Amazon";
//    employee2.Age = 21;
    employee2.IntroduceYourSelf();
}

*/
// Encapsulation on the above program!!
/*
class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourSelf(){
    cout<<"Name - "<<Name<<endl; 
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl; 
}

//constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}
};

int main(){
    Employee employee1 = Employee("Dheeraj Sahay", "Msit-Janakpuri",20);
     employee1.IntroduceYourSelf();
    Employee employee2 = Employee("Sahay  Sahay ", "Amazon",17);
     employee2.IntroduceYourSelf();

    employee1.setAge(17);
    cout<<employee1.getName()<<" is "<< employee1.getAge()<< " years old.";
}
*/
// ABSTRACTION
/*
class AbstractEmployee {
    virtual void AskForPromotion() = 0; //pure virtual function or an abstract function. 
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourSelf(){
    cout<<"Name - "<<Name<<endl; 
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl; 
}

//constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}

    void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted!"<< endl;
        else
            cout<<Name<<" sorry, no promotion for you!"<<endl;
    }

};

int main(){
    Employee employee1 = Employee("Dheeraj Sahay", "Msit-Janakpuri",32);
    Employee employee2 = Employee("Sahay  Sahay ", "Amazon",25);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
*/

// INHERITANCE
/*
class AbstractEmployee {
    virtual void AskForPromotion() = 0; //pure virtual function or an abstract function. 
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourSelf(){
    cout<<"Name - "<<Name<<endl; 
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl; 
}

//constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}

    void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted!"<< endl;
        else
            cout<<Name<<" sorry, no promotion for you!"<<endl;
    }

};

class Developer:public Employee {
    public:
    string FavProgramminglang;
    Developer(string name, string company, int age, string favProgramminglang)
        :Employee(name, company, age)
        {
            FavProgramminglang = favProgramminglang;
        }
    
    void FixBug(){
        cout<<Name<<" fixed bug using "<< FavProgramminglang<<endl;
    }

};

class Teacher:public Employee {
public:
    string Subject;
    void Preparelesson() {
        cout<< Name << " is preparing "<< Subject << " lesson."<<endl;

    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
        {
            Subject = subject;
        }
};

int main(){
    Employee employee1 = Employee("Dheeraj Sahay", "Msit-Janakpuri",32);
    Employee employee2 = Employee("Sahay  Sahay ", "Amazon",25);

    Developer d = Developer("Dheeraj Sahay", "Msit-Janakpuri", 20, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "GBSSS", 40, "History");
    t.Preparelesson();
    t.AskForPromotion();
}
*/

// POLYMORPHISM 

class AbstractEmployee {
    virtual void AskForPromotion() = 0; //pure virtual function or an abstract function. 
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourSelf(){
    cout<<"Name - "<<Name<<endl; 
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl; 
}

//constructors
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}

    void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted!"<< endl;
        else
            cout<<Name<<" sorry, no promotion for you!"<<endl;
    }

    virtual void Work() {
        cout<<Name<<" is checking email, task backlog, performing task.... "<<endl;
    }

};

class Developer:public Employee {
    public:
    string FavProgramminglang;
    Developer(string name, string company, int age, string favProgramminglang)
        :Employee(name, company, age)
        {
            FavProgramminglang = favProgramminglang;
        }
    
    void FixBug(){
        cout<<Name<<" fixed bug using "<< FavProgramminglang<<endl;
    }

        void Work() {
        cout<<Name<<" is writing "<< FavProgramminglang <<" Code "<<endl;
    }

};

class Teacher:public Employee {
public:
    string Subject;
    void Preparelesson() {
        cout<< Name << " is preparing "<< Subject << " lesson."<<endl;

    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
        {
            Subject = subject;
        }

        void Work() {
        cout<<Name<<" is Teaching "<< Subject << "." <<endl;
    }
};

int main(){

    Developer d = Developer("Dheeraj Sahay", "Msit-Janakpuri", 20, "C++");
    Teacher t = Teacher("Jack", "GBSSS", 40, "History");
 //   d.Work();
 //   t.Work();

    Employee* e0 = &d;
    Employee* e1 = &t;

    e0->Work();
    e1->Work();

}



