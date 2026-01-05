/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
*/

#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

string str_tolower(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return tolower(c); } // correct
                  );
    return s;
}

int main(){
	string str1, str2;

	cin >> str1;
	cin >> str2;

	str1 = str_tolower(str1);
	str2 = str_tolower(str2);

	int r = str1.compare(str2);

	if(r==0){
		cout << r;
	} else {
		cout << r/abs(r);
	}

	return 0;
}
