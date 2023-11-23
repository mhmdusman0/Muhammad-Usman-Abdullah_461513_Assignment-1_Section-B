#include <iostream>
using namespace std;
//int main(){
//	int num;
//	cout<<"Enter a number: "<<endl;
//	cin>>num;
//	cout<<"The factors of the number "<<num<<" are: "<<endl;
//	for(int i=1;i<=num;++i){
//		if(num%i==0){
//			cout<<i<<endl;
//			
//		}
//	}
//	return 0;
//}


//TASK 3
//int main(){
//	int n;
//	cout<<"Enter an integer value: ";
//	cin>>n;
//	if(n>10 && n<=20){
//		cout<<"1"<<endl;
//	}
//	else{
//		cout<<"0"<<endl;
//	}
//	return 0;	     
//}

//TASK 4
//int main(){
//	int N;
//	cout<<"Enter a positive integer: ";
//	cin>>N;
//	while(N>=2){
//		int f=0;
//		int a=1;
//		while(a<=N){
//			if(N%a==0){
//				f++;
//			}
//			a++;
//		}
//		if(f==2){
//			cout<<"The Largest Prime Number is: "<<N;
//			break;
//		}
//		N--;
//		
//	}
//	return 0;
//}

//TASK 6

//int main() {
//    int divid, div, q=0;
//    cout<< "Enter dividend: ";
//    cin>>divid;
//    cout<<"Enter divisor: ";
//    cin>>div;
//    int x=divid;
//    if(div == 0) {
//        cout << "Error: Division by zero." <<endl;
//    }
//    while (x >= div) {
//        x -= div;
//        q++;
//    }
//    cout<<divid<<" / "<<div<<" = "<<q<<endl;
//
//    return 0;
//}

//TASK 7
//#include <string>
//int main(){
//	string str,final;
//	cout<<"Enter a string: ";
//	cin>>str;
//	bool ch;
//	for(int i=0;i<str.length();++i){
//		ch=false;
//		for(int j=0;j<final.length();++j){
//			if(str[i] == final[j]){
//				ch=true;
//			}
//		}
//		if(ch==false){
//			final+=str[i];
//		}
//	}
//	cout<<"The Resultant String is"<<endl;
//	cout<<final;
//	return 0;
//}

//TASK 8
//int main(){
//	int a[5]={1,2,3,4,5};
//	int n=8;
//	int b[8];
//	for(int i=0;i<5;++i){
//		b[i]=a[i];
//	}
//	int n1,n2,n3;
//	cout<<"Enter the first element to add to the array: ";
//	cin>>n1;
//	cout<<"Enter the second element to add to the array: ";
//	cin>>n2;
//	cout<<"Enter the third element to add to the array: ";
//	cin>>n3;
//	b[5]=n1;
//	b[6]=n2;
//	b[7]=n3;
//	cout<<"The New Array is: ";
//	for(int i=0;i<8;++i){
//		cout<<b[i]<<" ";
//	}
//	return 0;
//	
//}

//TASK 9
//int main()
//{
//    int  array[5], X, final;
//
//    bool triplet = false;
//    cout<<"Enter the value of X: ";
//    cin>>X;
//    
//    cout<<"Enter  the integers for array: "<<endl;
//    for (int i = 0; i<5; i++) {
//        cin>>array[i];
//    }
//
//    cout<<"Triplets that sum up to "<<X<<" is:  "<<endl;
//    for (int i = 0; i<5; i++) {
//        for (int j = 0; j<5; j++) {
//            if (i == j)
//                continue;
//
//            for (int k = 0; k<5; k++) {
//                if (k == i || k == j)
//                    continue;
//
//                final = array[i] + array[j] + array[k];
//                if (final == X) {
//                    cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
//                    triplet = true; }
//            }
//        }}
//    if (triplet == false) {
//        cout<<"No Triplet";
//    }
//    return 0;
//}

//TASK 10
int main(){
	int a[6];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<6;++i){
		cin>>a[i];
	}
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				
				
			}
		}
	}
	cout<<"The Sorted Array is: "<<endl;
	for(int i=0;i<6;++i){
		cout<<a[i]<<" ";
	}
	return 0;
}

//TASK 5
//int main()
//{
//    string str1,str2,r;
//    cout<<"Enter the first string:";
//    cin>>str1;
//    cout<<"Enter the second string:";
//    cin>>str2;
//    if (str1 == str2){
//        for (int x=0;x<str1.length();x++){
//            r=str1[x]+r;
//        }
//        cout<<"Strings are unequal. Rotated string is : ";
//        cout<<r;
//        }
//        else {
//            cout<<"Strings are unequal";
//        
//        }
//    return 0;
//}

