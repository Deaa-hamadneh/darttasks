#include<iostream>
#include<iomanip>
using namespace std;
void printarray(int a[], int size);//or (int [],int)like that
void swap(int & , int &);
int main()
{
	//الايليمنت تبعات الارراي تتعامل معاملة الفاريبل يعني اي شي ينطبق ع الفاريبل ينطبق عليهن
	 //const int n[3]={3,4}
		//هيك طبعا ما بصير لاني عرفته كونستانت لازم اعطيه القيم كامله
		//const int n[3]={3,4,5,}هيك بده يكون 





	const int arraysize = 10;
	int n[arraysize] = { 1,2,3,4,5,6,7,8,9,10 };

	swap(n[0], n[1]);

	printarray(n, arraysize); //في الاستعدعاء ما بحط الاقواس بس بالبروتوتايب والماين 

	return 0;
}
void swap(int& x, int& y) {

	int temp = 10;
	x = y;
	y = temp;
}
			

		
		void printarray(int a[],int size)//without size ok وهون لو ما حطيته كونست عادي 
		{

			cout << "setw(7)" << "element" << setw(13) << "value" << setw(17) << "histogram" << endl;
			for (int i = 0; i < size; i++) {
				cout << "setw(7)" << i << setw(13) << a[i] << setw(9);
				for (int j = 0; j < 0; j++) {
					cout << "*";
					cout << endl;
				}

			}
		}

		
		
	
