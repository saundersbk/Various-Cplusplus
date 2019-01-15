#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		cout << "Too few arguments"<<endl;
		cout << "Usage: main.exe inputFile "<<endl;
		return 1;
	}
	if(argc > 2)
	{
		cout << "Too many arguments"<<endl;
		cout << "Usage: main.exe inputFile "<<endl;
		return 1;
	}
	
	/* double sum =0;
	
	for(int i =1; i < argc; i++)
	{
		sum += atof(argv[i]);
	}
	
	cout << "sum     = " << sum <<endl;
	cout << "average = " << sum / (argc-1) <<endl; */
	
	ifstream iFile;
	
	
	iFile.open(argv[1]);
	
	if(!iFile.is_open())
	{
		cout << argv[1] <<" did not open" <<endl;
		return 1;
	}
	
	char buffer[256];
	
	while(!iFile.eof())
	{
		iFile.getline(buffer,256,',');
		cout << buffer;
		if(atoi(buffer)%2 ==0)
			cout << " EVEN"<<endl;
		else
			cout << " ODD" <<endl;
	}
	
	
	
	
	iFile.close();
	
	
	
	
	
	
	return 0;
	
}