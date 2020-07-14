#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int a,b;
	cout<<"scissor (0), rock (1), paper (2): ";
	cin>>a;
	if (a>2)
	{
		cout<<"Invalid Input";
		return 0;
	}
	srand(time(0));
	b=rand()%3;
	
	if(a==0 && b==0)
	{
		cout<<"The computer is scissor. You are scissor too. It is a draw.";
	}
	else if (a==1 && b==1)
	{
		cout<<"The computer is rock. You are rock too. It is a draw.";
	}
	else if (a==2 && b==2)
	{
		cout<<"The computer is paper. You are paper too. It is a draw.";
	}
	else if (a==0 && b==1)
	{
		cout<<"The computer is rock. You are scissor. Computer won.";
	}
	else if (a==0 && b==2)
	{
		cout<<"The computer is paper. You are scissor. You won.";
	}
	else if (a==1 && b==0)
	{
		cout<<"The computer is scissor. You are rock. You won.";
	}
	else if (a==1 && b==2)
	{
		cout<<"The Computer is paper. You are rock. Computer won";
	}
	else if (a==2 && b==0)
	{
		cout<<"The computer is scissor. You are paper. Computer won";
	}
	else if (a==2 && b==1)
	{
		cout<<"The computer is rock.You are paper. You won";
	}
	return 0;
}
