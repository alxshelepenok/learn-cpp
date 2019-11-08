#include <iostream>

using namespace std;

class blockFence;

class ground {
	int length, width;

	public:
		ground(int l,int w){
		    length = l;
			width = w;
		};

		friend int countBlockFence(ground g, blockFence b); 
};

class blockFence {
	int width, price;

	public:
		blockFence(int w) {
			width = w;
		};

		friend int countBlockFence(ground g, blockFence b); 
};

int countBlockFence(ground g, blockFence b){
	return (g.length + 2 * g.width) / b.width;
}

int main(){
	ground g(100, 30);
	
	blockFence b1(2);
	
	cout << "Вам потребуется " << countBlockFence(g, b1) << " блоков" << endl;

	return 0;
}