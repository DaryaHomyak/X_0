#include <iostream>
using namespace std;
int pole[9] ={0, 0, 0, 0, 0, 0, 0, 0, 0};
int n;
void put_x();
void put_o();
void table_saw(int last_move){
		for(int i=0; i < 9; i++){
		if (pole[i] == 0) cout << "_" << " ";
		else if (pole[i] == 1) cout << "0" << " ";
		else cout << "x" << " ";
		if ((i + 1) % 3 == 0) cout << endl;
		}
	if (last_move == 1) put_o();
	else put_x();
	}
void check_win(int n){
	if(pole[0] == 1 && pole[1] == 1 && pole[2] == 1) cout << "Победили нолики!" << endl;
	else if(pole[3] == 1 && pole[4] == 1 && pole[5] == 1) cout << "Победили нолики!" << endl;
	else if(pole[6] == 1 && pole[7] == 1 && pole[8] == 1) cout << "Победили нолики!" << endl;
	else if(pole[0] == 1 && pole[3] == 1 && pole[6] == 1) cout << "Победили нолики!" << endl;
	else if(pole[1] == 1 && pole[4] == 1 && pole[7] == 1) cout << "Победили нолики!" << endl;
	else if(pole[2] == 1 && pole[5] == 1 && pole[8] == 1) cout << "Победили нолики!" << endl;
	else if(pole[0] == 1 && pole[4] == 1 && pole[8] == 1) cout << "Победили нолики!" << endl;
	else if(pole[2] == 1 && pole[4] == 1 && pole[6] == 1) cout << "Победили нолики!" << endl;

	else if (pole[0] == 2 && pole[1] == 2 && pole[2] == 2) cout << "Победили крестики!" << endl;
	else if(pole[3] == 1 && pole[4] == 1 && pole[5] == 1) cout << "Победили крестики!" << endl;
	else if(pole[6] == 1 && pole[7] == 1 && pole[8] == 1) cout << "Победили крестики!" << endl;
	else if(pole[0] == 1 && pole[3] == 1 && pole[6] == 1) cout << "Победили крестики!" << endl;
	else if(pole[1] == 1 && pole[4] == 1 && pole[7] == 1) cout << "Победили крестики!" << endl;
	else if(pole[2] == 1 && pole[5] == 1 && pole[8] == 1) cout << "Победили крестики!" << endl;
	else if(pole[0] == 1 && pole[4] == 1 && pole[8] == 1) cout << "Победили крестики!" << endl;
	else if(pole[2] == 1 && pole[4] == 1 && pole[6] == 1) cout << "Победили крестики!" << endl;
		
	else table_saw(n);
}
void put_x(){
	cout << "Поставьте нолик" << endl;
	cin >> n;
	pole[n] = 1;
	check_win(1);
	table_saw(1);
	}
void put_o(){
	cout << "Поставьте крестик" << endl;
	cin >> n;
	pole[n] = 2;
	check_win(2);
	table_saw(2);
	}
int main() {
	table_saw(2);
}