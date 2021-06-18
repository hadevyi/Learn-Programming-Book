#include <iostream>
#include <string>
using namespace std;

void main()
{
	char word[100] = {};
	char max[100] = {};

	cout << "5명의 이름을 'j'으로 구분하여 입력하세요.\n>> ";

	for (int i = 0; i < 5; i++) {
		cin.getline(word, 100, ';');
		cout << i << " : " << word << endl;
		if (strlen(max) < strlen(word)) {
			strcpy(max, word);
		}
	}

	cout << "가장 긴 이름은 " << max << endl;
}
//Mozart;Elvis Presley;Jim Carry;Schubert;Dominggo;
