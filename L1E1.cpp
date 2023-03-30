#include <iostream>

using namespace std;

int main(){
	int SIZE=5, data[SIZE]={0,1,2,3,4};
    int *p = &data[0];//pointer p points at the first array element on SIZE
    cout << "p[0] = " << p[0] << endl;
    cout << "*p = " << *p << endl;
	cout << "*(p+0) = " << *(p+0) << endl;
	cout << "*(p+1) = " << *(p+1) << endl;
	cout << "*(p+2) = " << *(p+2) << endl;
	cout << "*p++ = " << *p++ << endl;
	cout << "*p++ = " << *p++ << endl;
	
	//q5
	for(int i = 0; i<SIZE; i++){
		cout << data[i] << " ";
	}
	cout << endl;
	
	//q6
	p = &data[0];
	for(int i = 0; i < SIZE; i++){
		cout << *(p+i) << " " ;
	}
	return 0;
}
