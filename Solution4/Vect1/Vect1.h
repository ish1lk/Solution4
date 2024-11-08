     using namespace std;
     class Vect{
     private:
		 int* p;         
		 int  size;    
		 int curr_index;
	  public:
		 Vect();
		 Vect(int n);
		 Vect(const Vect& v);
		 Vect(const int a[],int n);
		 ~Vect(){ delete [] p;}
		 Vect operator-(void);
		 Vect operator-(const Vect& v);
	  friend Vect operator+(const Vect& a,const Vect& b);
	  friend Vect operator!(const Vect& v);
		 int& operator[](int i);
		 Vect& operator=(const Vect& v);
		 void reset_index(int n=0) { curr_index=n; }
		 int& current() { return (p[curr_index]); }
		 int& next();

	  };
