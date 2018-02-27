#include "../include/functions.h"
#include <iostream>
#include <stack>
#include <deque>
#include <queue>
#include <string>




	std::stack<char, std::deque<char> > char_stack;
	std::stack<char, std::deque<char> > charStack;
	std::string final = "";
	

	bool balancedSymbols(std::string input) {
		bool result = true;

		for(int i = 0; i < input.size(); i++){
			if(input.at(i) == '{' || input.at(i) == '[' || input.at(i) == '('){
				char_stack.push(input.at(i));				
			}
			else if(input.at(i) == '}' || input.at(i) == ']' || input.at(i) || ')'){
				if(input.at(i) == '}' && char_stack.top() == '{'){
					char_stack.pop();
				}
				else if(input.at(i) == ')' && char_stack.top() == '('){
					char_stack.pop();	
				}
				else if(input.at(i) == ']' && char_stack.top() == '['){
					char_stack.pop();
				}
				else if(char_stack.empty()){
                        	        result = false;
					break;
        	                }
			}
			
		std::cout << char_stack.size() << std::endl;
		}
			return result;
	}

	std::string iToP(std::string input)
	{
		for(int i = 0; i < input.size(); i++){
			if(input.at(i) != '(' || input.at(i) != ')' || input.at(i) != '+' || input.at(i) != '-' || input.at(i) != '*' || input.at(i) != '/'){
				final.push_back(input.at(i));	
			}
			else if(input.at(i) == '('){
				charStack.push(input.at(i));
			}
			else if(input.at(i) == ')'){
				while(charStack.top() != '('){
				final.push_back(charStack.top());
				charStack.pop();
				}
			}
			else if(input.at(i) == '*' || input.at(i) == '/'){
				if(charStack.top() == '/' || charStack.top() == '*'){
					final.push_back(charStack.top());
					charStack.pop();
				}
				else{
					charStack.push(input.at(i));
				}
			}
			else if(input.at(i) == '+' || input.at(i) == '-'){
				if(charStack.top() == '+' || charStack.top() == '-'){
                                        final.push_back(charStack.top());
                                        charStack.pop();
				}
				else{
					charStack.push(input.at(i));
				}
                        }
		}
		std::cout << final;
	}

