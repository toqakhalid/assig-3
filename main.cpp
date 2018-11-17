#include <iostream>

using namespace std;

int jump(int a[], int pos, int End){//end is the last index of the array
	if(pos == End){
	//	cout << "Jump to " << a[end] << endl;
		return a[End];
	}
	else{
		if(pos  + 1 == End){
			return a[pos ] + jump(a, pos  + 1, End);
		}
		else if(pos  + 2 == End){
		//	cout << "Jump to " << a[end] << endl;
			return a[pos ] + a[End];
		}
		else{
			if(jump(a, pos  + 1, End) > jump(a, pos  + 2, End)){
		//		cout << "Jump to " << a[pos  + 2] << endl;
				return a[pos ] + jump(a, pos  + 2, End);

			}
			else{
		//		cout << "Jump to " << a[pos  + 1] << endl;
				return a[pos ] + jump(a, pos  + 1, End);
			}

		}
	}
}

int main()
{

int a[]={0,3, 80, 6, 57, 10};
  cout<< jump(a,0,5);

    return 0;
}
