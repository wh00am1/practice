#include <iostream>
#include <string>

using namespace std;

int romantoint(string in){
	int sum = 0;
	for(int i=0; i <= in.size(); i++){
		if(&in[i] == "I" && &in[i+1] == "V"){
			sum += 4;
		}
		if(&in[i] == "I" && &in[i+1] == "V"){
			sum += 4;
		}
		else if(&in[i] == "I" && &in[i+1] == "X"){
			sum += 9;
		}
		else if(&in[i] == "X" && &in[i+1] == "L"){
			sum += 40;
		}
		else if(&in[i] == "X" && &in[i+1] == "C"){
			sum += 90;
		}
		else if(&in[i] == "C" && &in[i+1] == "D"){
			sum += 400;
		}
		else if(&in[i] == "C" && &in[i+1] == "M"){
			sum += 900;

		}
		else
		{
			if(&in[i] == "I"){
				sum += 1;
			}
			else if(&in[i] == "V"){
				sum += 5;
			}
			else if(&in[i] == "X"){
				sum += 10;
			}
			else if(&in[i] == "L"){
				sum += 50;
			}
			else if(&in[i] == "C"){
				sum += 100;
			}
			else if(&in[i] =="D"){
				sum += 500;
			}
			else if(&in[i] == "M"){
				sum += 1000;
			}
		}
	}
	return sum;
}
string inttoroman(int i){
	string ans;
	if(i == 0){
		return "ZERO";

	}
	while(i > 0){
		if(i >= 1000){
			ans += "M";
			i -= 1000;

		}
		else if(i >= 900){
			ans += "CM";
			i -= 900;
		}
		else if(i >= 500){
			ans += "D";
			i -= 500;
		}
		else if(i >= 400){
			ans += "CD";
			i -= 400;
		}
		else if(i >= 100){
			ans += "C";
			i -= 100;
		}
		else if(i >= 90){
			ans += "XC";
			i -= 90;
		}
		else if(i >= 50){
			ans += "L";
			i -= 50;

		}
		else if(i >= 40){
			ans += "XL";
			i -= 40;
		}
		else if(i >= 10){
			ans += "X";
			i -= 10;
		}
		else if(i >= 9){
			ans += "IX";
			i -= 9;
		}
		else if(i >= 5){
			ans += "V";
			i -= 5;
		}
		else if(i >= 4){
			ans += "IV";
			i -= 4;
		}
		else if(i >= 1){
			ans += "I";
			i -= 1;
		}
		
	}
	return ans;
}
int main(int argc, char **argv){
	string i, j, res;
	int output;
	while(scanf("%s %s", &i, &j)){
		if(i == "#" && j == ""){
			return 0;
		}
		output = romantoint(i) - romantoint(j);
		res = inttoroman(output);
		printf("%s\n", res);
	}

	return 0;
}