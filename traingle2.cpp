#include<bits/stdc++.h>
using namespace std;

class triangle
{
	protected:
		float a,b,c,s;
		float A;
	public:
		triangle(){
			a=1;b=1;c=1;
		}
		triangle(float x,float y,float z)
		{
			a=x;b=y;c=z;
		}
		void input()
		{
			cout<<"Enter a,b,c=";
			cin>>a>>b>>c;
		}
		float area()
		{
			
			if(a<=0||b<=0||c<=0)
			{
				throw 8;
			}
			if(a>=(b+c)||b>=(a+c)||c>=(a+b))
			{	char x;
				throw x;
			}
			else
			{
			s=(a+b+c)*0.5;
			A=pow((s*(s-a)*(s-b)*(s-c)),0.5);
			return A;
			}
		}
		void output()
		{
			cout<<"The area of triangle is ="<<A;
		}
};

int main()
{
	triangle t1;
	try{
	t1.input();
	t1.area();
	t1.output();
	}
	catch(int k)
	{
		cout<<"Your side is either negative or zero";
	}
	catch(char m)
	{
		cout<<"cant form a triangle!!!!";
	}
 return 0;
 
}

