#include<iostream>
using namespace std;

int main(){

	int number;
	cout<<"enter a number:";
	cin>>number;

// initializing line_no as 1[essential need], total_cur to count number of star in line
	int line_no=1, curr_star=0;

// if the line==0 out of loop
	if(number<=0)
	{
		std::cout<<"Please enter a +ve or  number greater than 0";

	}
// if all thing are good
	else
	{
		for(int line_n0=1; line_no <=number;)
		{

		// condition if number of star is less than number of line
			if(curr_star < line_no)
			{
				std::cout<<"*";
				curr_star++;
				continue;
			}
			
		// if star is equal to line number
			if(curr_star == line_no)
			{
				std::cout<<"\n";
				line_no++;

				curr_star=0;
			}
		}

	}
  return 0;
}
