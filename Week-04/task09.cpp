#include <iostream>
using namespace std;

void tpChecker(int ppl, int tp);


main()
{
	int ppl,tp;
	cout << "Number of people in the household: ";
	cin >> ppl;
	cout << "Number of rolls of TP: ";
	cin >> tp;

	tpChecker(ppl, tp);


}


void tpChecker(int ppl, int tp)

{
	int sheets = tp*500;
	int required = ppl*57*14;
	int days = sheets/(57*ppl);

	if(required > sheets){
	   cout << "Your TP will only last " << days << " days, buy more!";	   
	}	
	if(required < sheets){
	   cout << "Your TP will last " << days << " days, no need to panic!";	   
	}	
}