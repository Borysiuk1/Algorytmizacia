#include<iostream>
#include<vector>

using namespace std;

int main()
{
	string a;
	int b, c;
	vector <int> queue;
	while(true)
	{
		cin >> a;
		if(a == "push")
  	    {
  	    	cin >> b;
			queue.insert(queue.begin(), b);
			cout<<"ok"<<endl;
    	}
    		if(a == "pop")
    	{
    		c = queue.back();
    		queue.pop_back();
    		cout << c << endl;
		}
		if(a == "front")
		{
			c=queue.back();
			cout << c << endl;
		}
		if(a == "size")
		{
			c = queue.size();
			cout << c << endl;
		}
		if(a == "clear")
		{
			queue.clear();
			cout<<"ok"<<endl;
		}
		if(a == "exit")
		{
			cout<<"bye"<<endl;
			return 0;
		}
	}
}
