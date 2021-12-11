//Классный умный дом - 1
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Zolushka {
public:
int t = 0, c = 0, pil = 0, kon = 0, in = 0, de = 0, lvl = 0;
void SetTemp (int tmp) {
t = tmp;
}
void SetClean (int tmp) {
c = tmp;
}
void GetTemp (int tmp) {
if (tmp > t) {
de += tmp - t;
kon++;
}
else if (tmp < t) {
in += t - tmp;
kon++;
}
}
void GetClean (int tmp) {
if (tmp < c) {
pil++;
lvl += c - tmp;
}
}
void GetComand (string str) {
if (str == "STATISTICS HOME") {
cout << "Zolushka used cleaner " << pil << " times, used air conditioning " << kon << " times" << endl;
}
if (str == "STATISTICS AIR") {
cout << "Zolushka summary increase temperature for " << in << " degrees today, summary decrease temperature for " << de << " degrees today" << endl;
}
if (str == "STATISTICS CLEANER") {
cout << "Zolushka raised cleanliness today for " << lvl << " points" << endl;
}
}
};
int main()
{
Zolushka zlo;
string nishto, str;
int tmp, skolko, kolvo;
cin >> nishto >> str >> tmp;
zlo.SetTemp(tmp);
cin >> nishto >> str >> tmp;
zlo.SetClean(tmp);
cin >> skolko;
skolko = skolko / 3;
for (int i = 0; i < skolko; i++) {
cin >> nishto >> str >> tmp;
zlo.GetTemp(tmp);
cin >> nishto >> str >> tmp;
zlo.GetClean(tmp);
}
cin >> kolvo;
getline(cin, str);
zlo.GetComand(str);
for (int i = 0; i < kolvo; i++) {
getline(cin, str);
zlo.GetComand(str);
}
return 0;
}

//Классный умный дом - 2
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

class Zolushka{
	public:
		int temp, clean;
		int tH = 0, tL = 0;
		int conAm = 0, vacAm = 0, vH = 0;
		vector<string> cmds;
		vector<int> tem;
		vector<int> cln;
		
		void Type(string cmd){
			for(int i = 0; i < cmds.size(); i++){
				if(cmds[i] == cmd){
					temp = tem[i];
					clean = cln[i];
				}
			}
		}
		void tempUpg(int x){
			if(x != temp){
				conAm++;
				if(temp > x){
					tH += temp - x;
				} else {
					tL += x - temp;
				}
			}
		}
		void clUpg(int x){
			if(x < clean){
				vacAm++;
				vH += clean - x; 
			}
		}
		void stat(string statN){
			if(statN == "HOME"){
				cout << "Zolushka used cleaner " << vacAm << " times, used air conditioning " << conAm << " times\n";
			}
			if(statN == "AIR"){
				cout << "Zolushka summary increase temperature for " << tH << " degrees today, summary decrease temperature for " << tL << " degrees today\n";
			}
			if(statN == "CLEANER"){
				cout << "Zolushka raised cleanliness today for " << vH << " points\n";
			}
		}
};


int main()
{
    Zolushka zol;
    string cmd;
    int N, rM;
    cin >> N;
    int time, amount;
    for(int i = 0; i < N; i++){
    	cin >> cmd >> cmd >> rM;
    	zol.cmds.push_back(cmd);
    	zol.tem.push_back(rM);
    	cin >> rM;
    	zol.cln.push_back(rM);
	}
	if(N != 0){
		cin >> cmd >> cmd;
	    zol.Type(cmd);
	} else{
		cin >> cmd >> cmd >> zol.temp >> cmd >> cmd >> zol.clean;
	}
    cin >> time;
    for(int i = 0; i <= time + 1; i += 3){
    	cin >> cmd >> cmd;
    	if (cmd == "TEMP"){
    		int x;
    		cin >> x;
    		zol.tempUpg(x);
		}
		if (cmd == "CLEANLINESS"){
			int x;
			cin >> x;
			zol.clUpg(x);
		}
	}
	cin >> amount;
	for(int i = 0; i < amount; i++){
		cin >> cmd >> cmd;
		zol.stat(cmd);
	}
}
