#include<iostream>
#include<vector>

using namespace std;

int main()
{
	string a;
	int b, c;
	vector <int> stack;
	while(true)
	{
		cin >> a;
		if(a == "push")
  	    {
  	    	cin >> b;
			stack.push_back(b); 
			cout<<"ok"<<endl;
    	}
    	if(a == "pop")
    	{
    		c = stack.back();
    		stack.pop_back();
    		cout << c << endl;
		}
		if(a == "back")
		{
			c = stack.back();
			cout << c << endl;
		}
		if(a == "size")
		{
			c=stack.size();
			cout << c << endl;
		}
		if(a == "clear")
		{
			stack.clear();
			cout<<"ok"<<endl;
		}
		if(a == "exit")
		{
			cout<<"bye"<<endl;
			return 0;
		}
	}
}
