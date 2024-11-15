
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
  ifstream file;
  string filename;
  cout << "File: ";
  cin >> filename;
  file.open(filename);
  if (file.fail())
  {
    cout << "File failed to open." << endl;
    return 1; 
  }
  string line;
  long long unsigned sum=0;
  while (!file.eof())
  {
    getline(file, line);
	vector<int> a;
	for(int i=0;i<line.size();i++ )
	{
		if((line[i]>='0'&& line[i]<='9'))
		{
         a.push_back(line[i]-48);
		}
	}
	if(a.size()>1)
	{
		int b=a[0];
		b=(b*10)+a[a.size()-1];
		sum+=b;
	}
	if(a.size()==1){
		int b=(a[0]*10)+a[0];
		sum+=b;
	}
  }
  file.close();
  cout<<sum;
  return 0;
}