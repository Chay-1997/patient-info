//Create a sclass called Patient that store the details of the patient from the user. 
//Create 2 functions one that creates a Patient object after taking inputs from the user and other that display the patient details taking as argument. 

#include<iostream>
using namespace std;
class Patient
{
	private:
	string	patientname;
	
int patienttime;
public:
	void setdetails(string name,int t)
	{
	patientname=name;
	patienttime=t;
	
	}
void Displaydetails()
{
	cout<<"the paitent name is"<<patientname<<endl;
	cout<<"the paitent time is "<<patienttime<<endl;
}


};

int main()
{
	Patient p;
	string pname;
	int ptime; 
	
	cout<<"enter the name"<<endl;
	cin>>pname;
	cout<<"enter the time"<<endl;
	cin>>ptime;
	p.setdetails(pname,ptime);
	p.Displaydetails();
	return 0;
}






