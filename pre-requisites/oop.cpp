#include <iostream>
#include <cstring>
using namespace std;

class Greet //always start class name with a capital letter
{
    int a, b; //Default access specifier
    public: // public acess specifier
    static void greeting()
    {
        cout<<"Hello";
    }

    void Printer()
    {
        cout<<"Good Morning";
    }

    private:// private access specifier
    void well_greeted()
    {
        cout<<"Bonjour Monsuier";
    }
};

class Paint
{
    public:
    string color = "red";
    // simple POLYMORPHISM has been achieved as Greet class and Paint class have function with same name.
    void deets()
    {
        cout<<"color = "<<color;
    }
};

class Fuel
{
    public:
    int liters = 48;
    // simple POLYMORPHISM has been achieved as Greet class and Paint class have function with same name.
    void deets()
    {
        cout<<"capacity = "<<liters;
    }
};


class Car : public Paint // Car inherits the properties of class paint
{
    public:
    string brand;
    int max_speed;
    
    //Building a constructor. (parameterized constructor)
    Car(string name, int speed)// Note: if there are no parameters given, then its called a default constructor.
    {
        brand = name;
        max_speed = speed;
    }

    void deets()
    {
        cout<<"Car brand = "<<brand<<" speed = "<<max_speed<<endl;
    }

    //Bulding the Destructor!
    ~Car()
    {
        cout<<"The object got destroyed"<<endl;
    }
};

class Info : public Fuel, public Paint // multiple inheritance
{
    public:
    int mileage = 48, power;
    string car_name, car_type;

    void deets()//Runtime polymorphism.
    {
        cout<<"mileage = "<<mileage;
    }
};
// Compile time polymorphism
class Add
{
    public:
    int add(int a, int b)
    {
        cout<<"1st add function";
        return a+b;
    }
    int add(float a, float b)
    {
        cout<<"2nd add function";
        return a+b;
    }
};

//Accessing and modifying private variables using getters and setters
//we do this as we cannot directly access the private attributes
class Emp
{
    private:
    int sal;

    public:
    int get_sal()
    {
        return sal;
    }

    void set_sal(int sal)
    {
        this->sal = sal;
    }
};

int main()
{
    //calling function without creating objects
    Greet().greeting();
    //Calling methods without creating objects but using scope resolution operator
    //!Warning! only staic methods can be called like this
    Greet :: greeting();
    //Calling the method by creating the object.
    Greet obj; // objects are declared by mentioning class name + " " + object name 
    obj.greeting();

    cout<<endl;

    //Creating object of the class Car
    Car c1("Audi", 200);
    c1.deets();
    //Creating object with dynamic memory allocation
    Car *c2 = new Car("BMW", 250);
    c2->deets();// The new created object's pointer is returned instead of actual object.

    //create other objects and simulate the other concepts

    //overloading
    Add a;
    cout<<a.add(1, 2)<<endl;
    cout<<a.add(float(1.5), float(2.3))<<endl;

    //overriding
    Info i;
    i.deets();
    i.Paint::deets();
    i.Fuel::deets();

    return 0;
}