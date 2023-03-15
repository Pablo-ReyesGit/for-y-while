#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<10; i++)
	{
		if(i==5)
		{
			cout<<"continuar"<<endl;
			continue;
		}
		if(i==9)
		{
			cout<<"termino el for"<<endl;
			break;
		}
		cout<<i<<endl;
	}
	cout<<"ciclos "<<i<<endl;
	system("pause");
}
