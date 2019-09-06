#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void JINX (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is Thread 1 \n";
	}
}

void JHIN(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 2 \n";
	}
}
void VAYNE(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 3 \n";
	}
}

void RIVEN(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 4 \n";
	}
}

int main() {
	
	int i = 0;
	thread th1(JINX, 4);
	thread th2(JHIN, 4);
	thread th3(VAYNE, 4);
	thread th4(RIVEN, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "this print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
