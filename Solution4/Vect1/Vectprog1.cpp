	  #include <iostream>
	  #include "Vect1.h"
	  int main()
	  {
	int arr1[]={10,20,30,40,50,60,70,80,90,100};
	int arr2[]={1,2,3,4,5,6,7,8,9,10};
	Vect a(arr1,10),b(arr2,10);
	for(int i=0;i<10;++i){
		 cout<<a.next();
		 cout<<"\t\t";
		 for(int j=0;j<10;++j)
			cout<<b.next();
		 cout<<endl;
		 }
	  }
