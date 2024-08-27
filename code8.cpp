  #include <iostream>

  using namespace std;

    
    class employee{ 
      public:
      int employee_id;
      string employee_name,employee_address;
       void display(){
         cout<<"employee info"<<"\n";
         cout<<"employee id="<<employee_id<<"\n"<<"employee name="<<employee_name<<"\n"<<"employee_address="
         <<employee_address<<"\n";
       }

    };

    class permanant_employee:public employee{
        public:
        float basic_pay,da,hra,ta;
        void salary(){
            float salary=0;
            salary = basic_pay+da+hra+ta;
            cout<<"salary of employee is  "<<salary<<"\n";

        }
    };


    class manager:public permanant_employee{
        public:
        float advance_salary;
        string vehicle;
        void advance(){
            cout<<"Advance salary :"<<advance_salary<<"\n";
            cout<<"vehicle :"<<vehicle<<"\n";

        }
    }; 


    int main()
    {
       manager a;
       a.employee_id=2302353  ;
       a.employee_name="shreya";
       a.employee_address=" mapusa,goa"; 
       a.display();  
       
       a.basic_pay=10000;
       a.da=34000;
       a.hra=40000;
       a.ta=40000;
       a.salary();
 
       a.advance_salary=30000;
       a.vehicle="oddy";
       a.advance();

      
     return 0;

  }