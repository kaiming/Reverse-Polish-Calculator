#include "wrapper.h"


void reorganize(std::vector<std::shared_ptr<Tree>>& stack, const std::string& item, bool& invalid) {
	// if item is a number
	try {
		// confirm that item is a number
		int num {std::stoi(item)};

		auto number {std::make_shared<Number>(std::to_string(num))};
		stack.push_back(number);

		return;
	} catch (...) {}

	// if item is an operator
	if (static_cast<int>(item.length()) == 1) {
		char operation {item[0]};

		// catches and invalid expression (attempts to use and operation with one element on stack)
		if (static_cast<int>(stack.size()) < 2) {
			invalid = true;
			return;
		}	

		switch (operation) {
			case '+':
				{ // add previous two entries in stack
					auto plus {std::make_shared<Plus>(stack[static_cast<int>(stack.size()) - 2],
						   	stack[static_cast<int>(stack.size()) - 1])};
					stack.pop_back();
					stack.pop_back();
					stack.push_back(plus);
					break;
				}

			case '-':
				{ // subtract previous two entries in stack
					auto minus {std::make_shared<Minus>(stack[static_cast<int>(stack.size()) - 2], 
							stack[static_cast<int>(stack.size()) - 1])};
					stack.pop_back();
					stack.pop_back();
					stack.push_back(minus);
					break;
				}

			case '*':
				{ // multiply previous two entries in stack
					auto multiply {std::make_shared<Multiply>(stack[static_cast<int>(stack.size()) - 2], 
							stack[static_cast<int>(stack.size()) - 1])};
					stack.pop_back();
					stack.pop_back();
					stack.push_back(multiply);
					break;
				}

			case '/':
				{ // divide previous two entries in stack
					auto divide {std::make_shared<Divide>(stack[static_cast<int>(stack.size()) - 2], 
							stack[static_cast<int>(stack.size()) - 1])};
					stack.pop_back();
					stack.pop_back();
					stack.push_back(divide);
					break;
				}

			default: // any unknown command
				invalid = true;
				break;
		}
	}
}	
