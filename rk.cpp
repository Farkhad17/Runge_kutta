#include <iostream>
#include <math.h>

void f();

int main(int argc, char* argv[]){
	f();
	return 0;
}

void f(){
	int i, n;
	double fx, shaq, pogr, max_pogr = 0.0, h, k1, k2, k3, k4;
	double mas_y[11];
	
	n = 5;
	h = 0.2;
	mas_y[0] = 3;
	
	for(i = 0; i < n; i++){
		fx = exp(shaq) + shaq*shaq + 2.0*shaq + 2.0;
		k1 = mas_y[i] - shaq*shaq;
		k2 = mas_y[i] + h*k1/2.0 - (shaq + h/2.0)*(shaq + h/2.0);
		k3 = mas_y[i] + h*k2/2.0 - (shaq + h/2.0)*(shaq + h/2.0); 
		k4 = mas_y[i] + h*k3 - (shaq + h)*(shaq + h);
		mas_y[i + 1] = mas_y[i] + (h/6.0)*(k1 + 2*k2 + 2*k3 + k4);
		//std::cout << "x = " << shaq << " k1 = " << k1 << " k2 = " << k2 << " k3 = " << k3 << " k4 = " << k4 << "y n+1 = " << mas_y[i + 1] <<std::endl;
		std::cout << std::endl;
		shaq += 0.2;	
		pogr = fabs(mas_y[i] - fx)/ fx*100.0;
		if(max_pogr < pogr)max_pogr = pogr;
		std::cout << "x = " << shaq << " inter f(x) = " << mas_y[i + 1] << " f(x) = " << fx << " pogr = " << pogr << std::endl;
		std::cout << std::endl;
	}	
	std::cout << "max_pogr = " << max_pogr << std::endl;
}

