#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <sstream>
#include "wrapper.h"
#include "solutionVisitor.h"
#include "infixVisitor.h"


int main() {
	std::vector<std::shared_ptr<Tree>> stack; // stack
	std::string line;
	bool invalid {false};

	while (true) {
		// aquire entire expression (one line of input)
		getline(std::cin, line);

		// read break
		if (std::cin.fail()) {
			if (std::cin.eof()) break;

			std::cin.clear();
			std::cin.ignore();
			continue;
		}

		// read in each item of input
		std::string item;
		std::istringstream in {line};
		while (in >> item) {
			// appropriatly pushs or pops trees from stack
			reorganize(stack, item, invalid);
		}

		// if the current stack has more than 1 item or less than 1 item or the invalid flag is true
		// then output error message and ignore this expression (expression is invalid)
		if (invalid || static_cast<int>(stack.size()) != 1) {
			std::cerr << "Invalid Expression! :(\n";
			
			// reset
			stack.clear();
			invalid = false;
			continue;
		}

		// print and evaluate expression
		InfixVisitor getExpression;
		const std::string exp {stack[0]->accept(getExpression)};
		SolutionVisitor getSolution;
		const std::string sol {stack[0]->accept(getSolution)};

		std::cout << exp + " = " + sol << std::endl;

		// clears stack and makes room for a new expression
		stack.clear();
		invalid = false;
	}
}
