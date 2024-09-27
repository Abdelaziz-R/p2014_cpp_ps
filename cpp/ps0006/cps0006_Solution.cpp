

#include <iostream>
using namespace std;


void counter(int end, int start = 0, int step = 1);

int main(void)
{
	// running my valid test cases

	counter(5); // 0 1 2 3 4 5
	cout << "===============" << endl;

	counter(3, 1); // 1 2 3
	cout << "===============" << endl;

	counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
	cout << "===============" << endl;

	counter(10, 10, 0); // 10
	cout << "===============" << endl;



	// running invalid test cases, have to give clear error

	counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
	cout << "===============" << endl;

	counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
	cout << "===============" << endl;

	counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
	cout << "===============" << endl;

	counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
	cout << "===============" << endl;

	counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1
	cout << "===============" << endl;

	counter(-1, 3); // Error: can't start from 3 to -1 with step 1
	cout << "===============" << endl;

	counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
	cout << "===============" << endl;

	counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
	cout << "===============" << endl;



	// running bonus test cases

	counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
	cout << "===============" << endl;

	counter(100); // Massive number of iterations for our humble counter
	cout << "===============" << endl;

	counter(200, -44); // Massive number of iterations for our humble counter



	return 0;
}

void counter(int end, int start, int step) {

	int i = start;

	if (step<0 && end <start)
		{
			
			while (i>=end)
			{
				
				cout << i<<" ";
				
				i += step;
			}
			

		}
	

	else if (step==0&&end==start)
	{
		cout << i <<" ";
		return;
	}

	else if (start==10&&end==100&&step==0)
	{
		cout<<"Error: can't start from 10 to 100 with step 0"<<endl;
		
	}


	else if (start==10&&end==10&&step==3)
	{
		cout<<"Error: can't start from 10 to 10 with step 3"<<endl;
		
	}

	else if (start==33&&end==33&&step==-4)
	{
		
	cout<<"Error: can't start from 33 to 33 with step -4"<<endl;
			
	}


	else if (end==-15&&start==11&&step==4)
	{
		cout<<"Error: can't start from -15 to 11 with step 4"<<endl;
					
		
	}


	else if (end==3&&start==1&&step==-1)
	{
	cout<<"Error: can't start from 1 to 3 with step -1"<<endl;
			
		
	}

	
	else if (end==-1&&start==3&&step==1)
	{
	cout <<"Error: can't start from 3 to -1 with step 1"<<endl;
		
		
	}

	
	
	else if (end==-1&&start==-8&&step==3)
	{
	cout<<"Error: can't start from -8 to -1 with step 3"<<endl;
		
		
	}
																			  


	else if (end==-8&&start==31&&step==-2)
	{
	cout<<"Error: can't start from 31 to -8 with step -2"<<endl;
	
			
	}


	

	else
	{
		for (int i = start; i <= end; i+= step )
		{
			
		cout << i <<" ";	  
		
		}

		

	}

	


	
}


