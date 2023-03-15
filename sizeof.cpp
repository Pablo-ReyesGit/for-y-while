#include <iostream>
using namespace std;
int main()
{
	int datos[] = {12,13,14,15,16,17};
	cout<<sizeof(datos)/sizeof(datos[0])<<endl;

	for(int i : datos){
		cout<<i<<endl;
	}
	system("pause");
}
