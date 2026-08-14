#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
    int employeeID;
    string employeeName;
    double salary;
public:
    void accept(){
        cout<<"Enter Employee ID:";
        cin>>employeeID;
        cin.ignore();
        cout<<"Enter Employee Name:";
        getline(cin,employeeName);
        cout<<"Enter Salary:";
        cin>>salary;
    }
    void display(){
        cout<<"Employee ID:"<<employeeID<<endl;
        cout<<"Employee Name:"<<employeeName<<endl;
        cout<<"Salary:"<<salary;
    }
    double getSalary(){
        return salary;
    }
    string getName(){
        return employeeName;
    }
};
int main(){
    int n;
    cout<<"Enter number of Employees:";
    cin>>n;
    Employee *emp=new Employee[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter Details of Employees"<<i+1<<endl;
        emp[i].accept();
    }
    cout<<"\nEmployee Details\n";
    for(int i=0;i<n;i++){
        emp[i].display();
    }
    int highestIndex=0;
    double totalSalary=0;
    for(int i=0;i<n;i++){
        totalSalary+=emp[i].getSalary();
        if(emp[i].getSalary()>emp[highestIndex].getSalary()) highestIndex=i;
    }
    cout<<"\nEmployee with Highest Salary:\n";
    double average=totalSalary/n;
    cout<<"Average Salary="<<average<<endl;
    delete[] emp;
    return 0;
}