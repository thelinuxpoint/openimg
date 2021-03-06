#include<string>

namespace opencpr{

	unsigned long factorial(unsigned long var);
	//
	unsigned long permutation(unsigned long n,unsigned long x);
	//
	unsigned long combination(unsigned long n,unsigned long x);
	// 
	double poisson();		
	// gives probability of a event using binomial distribution B(p,q,n,x)
	double binomial(double p,double q,unsigned long n,unsigned long x);
	//
	double bayes();
	//
	double momentgf();
	//
	double hypergeometric();
	//
	double covariance();
	//
	bool is_prime(unsigned long arg);
	// Conversion Tools	
	std::string hexstr(std::string arg);
	//
	template<typename ...T>
	unsigned long mean();
	// Euclidian Extended Algorithm
	int inverseMod(int a, int m);
}
