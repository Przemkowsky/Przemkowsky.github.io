#include <iostream>

using namespace std;

int stopnie;

int main(int argc, char** argv)
{
	const float PI = 3.14159;
	cout<<"Podaj wartoœæ stopni: ";
	cin>>stopnie;
	cout<<stopnie<<" stopni = "<<stopnie * PI / 180<<" rad"<<endl;
	return 0;
}
