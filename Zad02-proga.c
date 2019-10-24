#include <climits>
#include <iostream>
#include <stdlib.h>
#include <float.h>
using namespace std;
int main() 
{
	cout <<"Type\tSize\tMin\t\tMax\t\n";
	cout <<"int\t"<<sizeof(int)<<"\t"<<INT_MIN<<"\t"<<INT_MAX<<"\n"
	<<"uint\t"<<sizeof(unsigned)<<"\t"<<"0"<<"\t"<<INT_MAX<<"\n"
	<<"long\t"<<sizeof(long)<<"\t"<<LONG_MIN<<"\t"<<LONG_MAX<<"\n"
	<<"ulong\t"<<sizeof(unsigned long)<<"\t"<<"0"<<"\t"<<ULONG_MAX<<"\n"
	<<"float\t"<<sizeof(float)<<"\t"<<FLT_MIN<<"\t"<<FLT_MAX<<"\n"
	<<"double\t"<<sizeof(double)<<"\t"<<DBL_MIN<<"\t"<<DBL_MAX<<"\n"
	<<"long double\t"<<sizeof(long double)<<"\t"<<LDBL_MIN<<"\t"<<LDBL_MAX<<"\n"
	<<"char\t"<<sizeof(char)<<"\t"<<CHAR_MIN<<"\t"<<CHAR_MAX<<"\n"
	<<"uchar\t"<<sizeof(unsigned char)<<"\t"<<"0"<<"\t"<<UCHAR_MAX<<"\n"
	<<"bool\t"<<sizeof(bool)<<"\t"<<"False"<<"\t"<<"True"<<"\n"<<endl;
	return 0;
}