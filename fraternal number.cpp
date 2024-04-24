
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  cout << "2000以下の自然数について友愛数を求めよう" << endl; //友愛数ってかわいいね
	int sum[2001];
	for (int a = 1; a <= 2000; a++) {  //ループに入れる
		sum[a] = 0;
	  for (int i = 1; i < a; i++) {  //二数のすべての公約数を求める
	  	if (a % i == 0) {  //iの和がsum
			  sum[a] += i;
			}
    }
    if (sum[sum[a]] == a && a != sum[a]) {  //sum[a]のsumとaが一致かつa!=bで出力する
	    cout << "( " << sum[a] << ", " << a << " )" << endl;
    }
	}
  return 0;
}
