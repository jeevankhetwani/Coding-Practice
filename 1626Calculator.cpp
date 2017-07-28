////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//bool isOperator(char ch) {
//    return ( ch == '+' || ch == '-' || ch == '*' || ch == '/');
//}
//
//int perform(int a, int b, char op) {
//    switch (op) {
//        case '+' :
//            return a + b;
//        case '-':
//            return a - b;
//        case '*':
//            return a * b;
//        case '/':
//            return a / b;
//    }
//}
//
//bool nextLowPriority(char op1, char op2) {
//    if ( op1 == '*' || op1 == '/' )
//    return true;
//
//    if ( op2 == '+' || op2 == '-' )
//    return true;
//
//    return false;
//
//}
//
//void perform(char op2, stack<char>& operators, stack<int>& operands) {
//
//    if ( operators.empty() || !nextLowPriority(operators.top(), op2) ) {
//        operators.push(op2);
//        return;
//    }
//
//    int opnd2 = operands.top(); operands.pop();
//    int opnd1 = operands.top(); operands.pop();
//    char op = operators.top(); operators.pop();
//    operands.push(perform(opnd1, opnd2, op));
//    operators.push(op2);
//}
//
//bool isOperand(char ch) {
//    return  ( ch >= '0' && ch <= '9' );
//}
//
//int eval(string s) {
//    stack<int> operands;
//    stack<char> operators;
//
//    for (int i = 0; i < s.size(); i++) {
//        if ( isOperator(s[i]) )
//            perform(s[i], operators, operands);
//        else if ( isOperand(s[i]) )
//            operands.push(s[i] - '0');
//    }
//
//
//    while( ! operators.empty() ) {
//        int opnd2 = operands.top(); operands.pop();
//        int opnd1 = operands.top(); operands.pop();
//        char op = operators.top(); operators.pop();
//        operands.push(perform(opnd1, opnd2, op));
//    }
//
//    return operands.top();
//}
//
//int main() {
//    string s = "2 + 5 * 3 / 2 - 4";
//    cout << eval(s);
//    return 0;
//}
//
