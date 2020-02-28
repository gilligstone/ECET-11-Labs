#include<iostream>
#include<string>
using namespace std;

const int COEFFICIENTS = 5;
class Polynomial
{
private:
	int poly[COEFFICIENTS];
public:
	Polynomial operator+(Polynomial&);
	Polynomial operator-(Polynomial&);
	void operator+=(Polynomial&);
	Polynomial operator*(Polynomial&); //only for binomials of form a + bx
	Polynomial(int[]);
	Polynomial();
	void setPolynomial(int[]);
	int* getPolynomial();
	void displayPolynomial();
};



Polynomial::Polynomial(int sample[COEFFICIENTS])
{
	setPolynomial(sample);
}
Polynomial::Polynomial()
{
	for (int i = 0; i < COEFFICIENTS; i++)
		poly[i] = 0;
}
Polynomial Polynomial::operator+(Polynomial& poly2)
{
	Polynomial ret;
	for (int i = 0; i < COEFFICIENTS; i++)
	{
		ret.poly[i] = poly[i] + poly2.poly[i];
	}
	return ret;
}
Polynomial Polynomial::operator-(Polynomial& poly2)
{
	Polynomial ret;
	for (int i = 0; i < COEFFICIENTS; i++)
	{
		ret.poly[i] = poly[i] - poly2.poly[i];
	}
	return ret;
}
void Polynomial::operator+=(Polynomial& poly2)
{
	for (int i = 0; i < COEFFICIENTS; i++)
	{
		poly[i] += poly2.poly[i];
	}
}
Polynomial Polynomial::operator*(Polynomial& poly2)
{
	Polynomial ret;
	ret.poly[COEFFICIENTS - 3] = poly[COEFFICIENTS - 2] * poly2.poly[COEFFICIENTS - 2];
	ret.poly[COEFFICIENTS - 2] = poly[COEFFICIENTS - 2] * poly2.poly[COEFFICIENTS - 1] + poly[COEFFICIENTS - 1] * poly2.poly[COEFFICIENTS - 2];
	ret.poly[COEFFICIENTS - 1] = poly[COEFFICIENTS - 1] * poly2.poly[COEFFICIENTS - 1];
	cout << ret.poly[COEFFICIENTS - 3] << ret.poly[COEFFICIENTS - 2] << ret.poly[COEFFICIENTS - 1];
	return ret;

}
void Polynomial::setPolynomial(int sample[COEFFICIENTS])
{
	for (int i = 0; i < COEFFICIENTS; i++)
		poly[i] = sample[i];
}
void Polynomial::displayPolynomial()
{
	for (int i = 0; i < COEFFICIENTS; i++)
	{
		int exp = COEFFICIENTS - i - 1;
		bool zero = true;
		for (int b = i; b > 0; b--)
		{
			if (poly[b - 1] != 0)
				zero = false;
		}
		if (i != 0 && poly[i] != 0 && !zero)
		{
			if (poly[i] > 0)
				cout << "+ ";
			else
				cout << "- ";
		}
		else if (poly[i] < 0)
			cout << "- ";
		
		if (poly[i] != 0 && (i != (COEFFICIENTS - 1)) && abs(poly[i] != 1) && exp != 1)
			cout << abs(poly[i]) << "x^" << exp << " ";
		else if (poly[i] != 0 && i != COEFFICIENTS - 1 && abs(poly[i] != 1))
			cout << abs(poly[i]) << "x" << " ";
		else if (i == COEFFICIENTS - 1)
			cout << abs(poly[i]);
		else if (abs(poly[i]) == 1 && exp != 1)
			cout << "x^" << exp << " ";
		else if (abs(poly[i]) == 1)
			cout << "x ";
	}
	cout << endl;
}
int* Polynomial::getPolynomial()
{
	return &poly[0];


}



int main()
{
	while (true)
	{
		int p1[COEFFICIENTS];
		int p2[COEFFICIENTS];
		cout << "Enter First Polynomial: ";
		for (int i = 0; i < COEFFICIENTS; i++)
			cin >> p1[i];
		Polynomial poly1(p1);
		cout << "P1: ";
		poly1.displayPolynomial();
		cout << "Enter Second Polynomial: ";
		for (int i = 0; i < COEFFICIENTS; i++)
			cin >> p2[i];
		Polynomial poly2(p2);
		cout << "P2: ";
		poly2.displayPolynomial();

		Polynomial sum;
		sum = poly1 + poly2;
		Polynomial dif;
		dif = poly1 - poly2;
		poly1 += poly2;
		cout << "P1 + P2: ";
		sum.displayPolynomial();
		cout << "P1 - P2: ";
		dif.displayPolynomial();
		cout << "P1 += P2: ";
		poly1.displayPolynomial();


		int b1[COEFFICIENTS];
		int b2[COEFFICIENTS];
		for (int i = 0; i < COEFFICIENTS; i++)
		{
			b1[i] = 0;
			b2[i] = 0;
		}
		cout << "P1 * P2: P1 & P2 must be BINOMIALS" << endl;
		cout << "Enter First Binomial: ";
		cin >> b1[COEFFICIENTS - 2] >> b1[COEFFICIENTS - 1]; 
		Polynomial bin1(b1);
		cout << "P1: ";
		bin1.displayPolynomial();
		cout << "Enter Second Binomial: ";
		cin >> b2[COEFFICIENTS - 2] >> b2[COEFFICIENTS - 1];
		Polynomial bin2(b2);
		cout << "P2: ";
		bin2.displayPolynomial();
		Polynomial Product;
		Product = bin1 * bin2;
		cout << "P1 * P2: ";
		Product.displayPolynomial();
	}

}