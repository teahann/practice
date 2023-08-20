#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<double> inputs = {1, 2, 3, 2.5};
	std::vector<std::vector<double>> weights = {
		{0.2, 0.8, -0.5, 1.0},
		{0.5, -0.91, 0.26, -0.5},
		{-0.26, -0.27, 0.17, 0.87}
	};
	std::vector<double> biases = {2, 3, 0.5};

	for (int i = 0; i < weights.size(); ++i) {
		std::vector<double> current_weights = weights[i];
		double bias = biases[i];
		double output = std::inner_product(inputs.begin(), inputs.end(), current_weights.begin(), bias);
		std::cout << output << " ";
	}

	return 0;
}
