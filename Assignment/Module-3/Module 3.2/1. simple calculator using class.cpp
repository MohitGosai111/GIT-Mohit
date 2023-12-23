#include<iostream>
using namespace std;

class calculator
{
	int a,b;
	public:
		
		void input()
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>a>>b;
		}
		
		int Sum()
		{
			return a+b;
		}
	    int Sub()
		{
			return a-b;
		}
		int Mul()
		{
			return a*b;
		}
		int Div()
		{
			return a/b;
		}
	
};

main()
{
	int ch;
	
	calculator obj;
	
	    cout<<"Enter 1 to Addition\n";
	    cout<<"Enter 2 to Substraction\n";
	    cout<<"Enter 3 to Multiplication\n";
      	cout<<"Enter 4 to Division\n";
	    cout<<"Enter 0 to Exit\n";
	    
	do
	{
		
		cout<<"\nEnter your chioce\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.input();
				cout<<"Result = "<<obj.Sum()<<endl;
				break;
			case 2:
				obj.input();
				cout<<"Result = "<<obj.Sub()<<endl;
				break;
			case 3:
				obj.input();
				cout<<"Result = "<<obj.Mul()<<endl;
				break;
			case 4:
				obj.input();
				cout<<"Result = "<<obj.Div()<<endl;
				break;		
		}
		
	}while(ch >= 1 && ch <= 4);
	
	
	return 0;
}
