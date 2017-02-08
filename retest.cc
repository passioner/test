#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <cmath>
//merge two map<string,int>
//if key equals:: add value
using namespace std;

map<string,int>& operator+(map<string,int>&a,map<string,int>&b)
{
	map<string,int>::iterator ita;
	map<string,int>::iterator itb;
	for (ita = a.begin();ita!=a.end();ita++)
	{
		itb = b.find(ita->first);
		if(itb != b.end())
		{
			ita->second += itb->second;
			b.erase(itb);
		}
	}
	for (itb = b.begin();itb!=b.end();)
	{
		a[itb->first] = itb->second;
		b.erase(itb++);
	}
	// print
	for (ita = a.begin();ita!=a.end();ita++)
	{
		cout << ita->first << " " << ita->second << endl;
	}
	cout << "--------" << endl;
	for (itb = b.begin();itb!=b.end();itb++)
	{
		cout << itb->first << " " << itb->second << endl;
	}
	return a;
	
}
unsigned reverseBits(unsigned value)  
{  
    unsigned answer = 0;   
    unsigned i;  
    for(i = 1; i != 0; i <<= 1)  
    {  
        answer <<= 1;   
        if(value & 1)  
            answer |= 1;   
        value >>= 1;       
    }      
    return answer;  
}  

int main()
{
	map<string,int> a;
	map<string,int> b;
	a["a"] = 1;
	a["b"] = 2;
	a["c"] = 3;
	b["b"] = 4;
	b["c"] = 5;
	b["d"] = 6;
	cout << "first: " << a.size() << endl;
	a=a+b;
	cout << "second: " << a.size() << endl;

	int n = 2;
	unsigned mask = 0;
	for (int i = 0; i < (4 - n); i++)
	{
		mask |= (1 << i);
	}
	cout << mask << endl;
	unsigned hr = 9;
	unsigned temp = hr & mask;
	cout << temp << endl;
	cout << "--end--" << endl;
	cout << "--real-end--" << endl;
	cout << "--add-for-HEAD" << endl;
	cout << "hh" << endl;



	return 0;
}
