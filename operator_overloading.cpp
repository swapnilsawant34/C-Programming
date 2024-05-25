#include<iostream>
#include<string.h>
using namespace std;
class  Employee
{
  private:
  int id;
  char name[90];
  int sal;
  public:
  void setData(){
   cout<<"Enter name id and salary\n";
   cin>>name>>id>>sal;
 }
 void showData(){
 
 
  cout<<"\t"<<name<<"\t"<<id<<"\t"<<sal<<"\n";
  }
  int operator==(Employee emp)
  {
     if(this->id==emp.id && strcmp(this->name,emp.name)==0 && this->sal==emp.sal)
     { return 1;
     }
     else{
      return 0;
     }
  }
};
int main()
{  int i;
   Employee emp[5];
   for(i=0; i<5; i++)
   { emp[i].setData();
   }
   cout<<"display all records\n";
   for(i=0;i<5;i++)
   { emp[i].showData();
   }
   Employee e;
   e.setData();
   int flag=0;
   for(i=0;i<5;i++)
   {
      if(emp[i]==e)
      { flag=1;
	break;
      }
   }
   if(flag)
   { cout<<"Found\n";
   }
   else{
    cout<<"Not Found";
   }

}
