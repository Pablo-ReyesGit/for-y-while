#include <iostream>
using namespace std;
int main()
{
	int i, inicio, tabla, final;
	cout<<"ingrese el numero de la tabla"<<endl;
	cin>>tabla;
	cout<<"inicio: "<<endl;
	cin>>inicio;
	cout<<"final: "<<endl;
	cin>>final;
	for(i=inicio;i<=final; i++)
	{
		cout<<tabla<<" * "<<i<<" = "<<tabla*i<<endl;
	}
	system("pause");
}
