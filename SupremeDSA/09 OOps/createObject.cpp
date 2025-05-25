#include<iostream>
using namespace std;


class Student{
public:
    // attriutes
    int id;
    int age;
    string name; 
    int nos;

    // connstructor -> parameterized and non parameterized

    // default constructor --> class name
    Student(int id, int age, string name , int nos){
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        cout << "this is default constructor" << endl;
    }
    // copy constructor
    Student(const Student &srcobj){
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
        cout << "this is default constructor" << endl;
    }


    // behavior -> kya kya method  honge 
    void study(){
        // jis student ki baat ho rahi hai usko identify karne ke liye this>likhte hai 

        cout<<  this->name << " study" << endl;
    }

    void sleep(){
        cout << this->name<< " sleeping" << endl;
    }

    void bunk(){
        cout << this->name <<  " bunking" << endl;
    }

    // desructor

    // ~Student(){
    //     cout << " this is default destructor" << endl;
    // }

}; 


int main(){
    // Student a;
    // a.id =1;
    // a.age = 16;
    // a.name = "suraj";;
    // a.nos = 6;
    // a.study();


    // Student b;
    // b.name = "Shail";
    // b.id = 2;
    // b.age = 21;
    // b.nos = 10;
    // b.bunk();

    // Student A(1, 18, "suraj", 10);
    // Student B(1, 18, "suraj", 10);


    // A.bunk();
    // B.sleep(); 

    // // cpy constructor
    // Student c = A;
    // cout << A.age << " " << c.age << endl;


    // Dynammic memory alocation 

    Student*a = new Student(1, 18, "suraj", 10);
    cout << a->name << " " << a->age<< endl;
    return 0;
}