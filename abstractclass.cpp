# include<iostream>
using namespace std;
    

class car // atleast 1 pure virtual function means an abstract class , cant be instantiated but can have the ptrs with other class objects
{
public:
	virtual void start()=0; // pure virutal functions
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	// car c; *NOT ALLOWED
	car *p=new innova();
	p->start();
	p=new swift();
	p->start();
}