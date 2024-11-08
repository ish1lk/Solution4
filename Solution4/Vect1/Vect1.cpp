  #include <iostream>
  #include "Vect1.h"
	Vect::Vect():curr_index(0)     //����������� �� ���������
	  {
		size=10; p=new int[size];
		for(int index=0;index<size;index++)
		  p[index]=0;
	  }
	Vect::Vect(int n):curr_index(0)
	  {
		if (n<=0){
			cerr<<"Invalidate array size:� "<<n<<endl;
		exit(1);
	  }
		size=n; p=new int [size];
		for(int index=0;index<size;index++)
		p[index]=0;
	  }
	Vect::Vect(const Vect& v)     // ����������� �����
	  {
		size=v.size; p=new int[size];
		curr_index=v.curr_index;
		for(int i=0;i<size;i++)
		  p[i]=v.p[i];
	  }
	Vect::Vect(const int a[],int n):curr_index(0)
	  {
		if(n<=0){
			cerr<<"Invalidate array size:� "<<n<<endl;
			exit(1);
		}
		size=n; p=new int [size];
		for(int i=0;i<size;i++)
		  p[i]=a[i];
	  }

	Vect Vect::operator-()
	  {
		for(int i=0;i<size;++i)
		  p[i]=-p[i];
		return (*this);
	  }
	Vect Vect::operator-(const Vect& v)
	  {
		int s=(size<v.size)?size:v.size;
		Vect temp(s);
		if(v.size!=size)
		  cerr<<"Invalidate array sizes: "<<size<<" and "<<v.size<<endl;
		for(int i=0;i<s;++i)
		  temp.p[i]=p[i]-v.p[i];
		return (temp);
		  }
	Vect operator+(const Vect& a,const Vect& b)
	  {
		int s=(a.size<b.size)?a.size:b.size;
		Vect sum(s);
		if(a.size!=b.size)
		  cerr<<"Invalidate array sizes:  "<<a.size<<" and "<<b.size<<endl;
		for(int i=0;i<s;++i)
		  sum.p[i]=a.p[i]+b.p[i];
		return (sum);
	  }
	Vect operator!(const Vect& v)
	  {
		Vect temp(v.size);
		for(int i=0;i<v.size;++i)
		  if(v.p[i]) temp.p[i]=0;
		  else temp.p[i]=1;
		return (temp);
	  }
	int& Vect::operator[](int i)
	  {
		if(i<1 || i>size){
			cerr<<"Invalidate array size:� "<<i<<endl;
		exit(1);
		}
		return (p[i-1]);
	  }
	Vect& Vect::operator=(const Vect& v)
	  {
		int s=(size<v.size)?size:v.size;
		if(v.size!=size)
		  cerr<<"Invalidate array sizes: "<<size<<" and "<<v.size<<endl;
		for(int i=0;i<s;++i)
		  p[i]=v.p[i];
		return (*this);
	  }
	int& Vect::next()
	  {
		if(curr_index==size)
		  curr_index=0;
      return(p[curr_index++]);
	  }

