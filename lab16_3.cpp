#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int size)
{
	vector<int> vector;
	for (int i=0;i<size;i++){
		vector.push_back(rand()%10);
	}

}

void showVector(vector<int> sample)
{
	cout << "[";
	for (unsigned int i=0;i<sample.size();i++){
		cout << sample[i];
		if(i+1==sample.size()) cout << " ";
		else cout << " ";
	}
}

int dotProduct(vector<int> a,vector<int> b)
{
	int sum = 0;
	for(unsigned int i = 0; i<a.size() ; i++) sum += a[i]*b[i];	
	return sum;
}