#include <fstream>
using namespace std;

int main()
{
	ofstream outFile;
	outFile.open( "file.txt" );
	
	outFile << "Question: What is the capital of Washington?" << endl;
	outFile << "Answer: Olympia" << endl;
	
	outFile.close();

	return 0;
} 
