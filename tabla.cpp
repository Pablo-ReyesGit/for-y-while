#include <iostream>
using namespace std;
int main()
{
	int i, resul, tabla;
	cout<<"ingrese el numero de la tabla"<<endl;
	cin>>tabla;
	for(i=0;i<=10; i++)
	{
		resul=tabla*i;
		cout<<tabla<<" * "<<i<<" = "<<resul<<endl;
	}
	system("pause");
}
