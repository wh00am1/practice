#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 5

class Stack{
private:
	char item[MAX][20];
	int top;

public:
	Stack();
	void push();
	void pop();
	void list();
};

Stack::Stack(){
	top = -1;
}

void Stack::push(){
	if (top >= MAX- 1){
		printf("[!]Stack is full\n");
	}
	else{
		top++;
		printf("\n[+]Enter item to insert:\n");
		cin.getline(item[top], 21);

	}
}

void Stack::pop(){
	if (top < 0){
		printf("[-]No item, Stack empty\n");

	}
	else{
		printf("\n [+]Item ");
		printf("%s\n", item[top]);
		printf("deleted\n");
		top --;

	}
}

void Stack::list(){
	int coount = 0, i;

	if (top < 0){
		printf("[-]No item, Stack empty\n" );

	}
	else{
		printf("\n Item\n");
		printf("==========================================\n");
		cout.setf(ios::left, ios::adjustfield);
		for (i=0; i <= top; i++){
			cout << " " ;
			cout.width(20);
			cout << item[i] << "\n";
			coount++;
		}
		cout.setf(ios::right, ios::adjustfield);
		printf("==========================================\n");
		printf("[+]Total item: %d\n", coount);
	}
}

int main(int argc, char const *argv[])
{
	Stack stk;
	int opt;

	while(1){
		printf("==========================================\n" );
		printf("[1] Insrt \n");
		printf("[2] Delete\n");
		printf("[3] List\n" );
		printf("[4] Quit\n");
		printf("==========================================\n");
		printf(">>");
		while(cin.get(opt)){
			switch(opt){
				case 1:	stk.push();	break;
				case 2:	stk.pop();	break;
				case 3: stk.list();	break;
				case 4: system("pause");	break;

			}
		}
	}
	return 0;
}