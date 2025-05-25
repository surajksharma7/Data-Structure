#include<iostream>
using namespace std;


class Student{
private:
    // attriutes
    int id;
    int age;
    string name; 
    int nos;
private:
    int *gpa;
    string gf;


    // connstructor -> parameterized and non parameterized
public:

    void setGpa(int a ){
        *this->gpa = a;

    }
    int getGpa() const{
        return *this->gpa;
    }


    void setAge(int age){
        this->age;
    }

    int getAge() const{
        return this->age;
    }
    // default constructor --> class name
    Student(int id, int age, string name , int nos, string gf, int gpa){
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->gpa = new int(gpa);
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
private:
    void gfChating(){
        cout << "chatting with gf" << endl;
    }
}; 


int main(){
    // Dynammic memory alocation 

    // Student*a = new Student(1, 18, "suraj", 10);
    // cout << a->name << " " << a->age<< endl;
    // delete a;


    Student a(1,12,"suraj", 10, "menu",10);
    // cout << a.gf << endl; // this will not be visible beacuse the gf parameter is private

    a.sleep();
    return 0;
}