////
//// Created by jeevan on 3/29/17.
////
//#include <string>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <deque>
//
//using namespace std;
//
//class BigInt
//{
//public:
//    BigInt() : digits_m(1, 0)
//    {
//    }
//
//    BigInt(const string &str)
//    {
//        std::for_each(str.cbegin(), str.cend(), [this](const char c) { digits_m.push_front(c - '0'); });
//    }
//
//    BigInt(size_t cnt, char c) : digits_m(cnt, c)
//    {
//    }
//
//    BigInt(const BigInt& other) = default;
//    BigInt& operator=(const BigInt& other) = default;
//    BigInt(BigInt&& other) = default;
//    BigInt& operator=(BigInt&& other) = default;
//
//    BigInt operator*(const BigInt &other) const
//    {
//        return multiply(*this, other);
//    }
//
//    BigInt& operator+= (const BigInt &other)
//    {
//        BigInt otherc = other;
//        auto oSize = otherc.digits_m.size();
//        auto tSize = digits_m.size();
//
//        if (tSize > oSize)
//        {
//            for (long i = tSize - oSize; i > 0; --i)
//            {
//                otherc.digits_m.push_back(0x00);
//            }
//        }
//        else
//        {
//            for (long i = oSize - tSize; i > 0; --i)
//            {
//                digits_m.push_back(0x00);
//            }
//        }
//
//        char carry = 0x00;
//        for (auto i = 0u; i < digits_m.size(); ++i)
//        {
//            auto add = digits_m[i] + otherc.digits_m[i] + carry;
//            carry = add / 10;
//            digits_m[i] = add % 10;
//        }
//
//        if (carry != 0)
//        {
//            while (carry > 0)
//            {
//                digits_m.push_back(carry % 10);
//                carry -= carry % 10;
//            }
//        }
//
//        return *this;
//    }
//
//    string to_string()
//    {
//        string res;
//        trimLeadingZeros();
//        std::for_each(digits_m.rbegin(), digits_m.rend(), [&res](char c) mutable { res.push_back(c + '0'); });
//        return res;
//    }
//
//private:
//    friend class XpUnitTest_unit_test;
//
//    void trimLeadingZeros()
//    {
//        auto size = digits_m.size() - 1;
//        for (auto i = 0u; i < size; ++i)
//        {
//            if (digits_m.back() != 0x00)
//                return;
//            digits_m.pop_back();
//        }
//    }
//
//    BigInt multiply(const BigInt &bi1, const BigInt &bi2) const
//    {
//        std::vector<BigInt> res;
//        for (auto i = 0u; i < bi2.digits_m.size(); ++i)
//        {
//            res.emplace_back(i, 0x00);
//            auto carry = 0;
//            for (auto j = 0u; j < bi1.digits_m.size(); ++j)
//            {
//                auto mult = bi1.digits_m[j] * bi2.digits_m[i] + carry;
//                carry = mult / 10;
//                res[i].digits_m.push_back(mult % 10);
//            }
//            if (carry != 0)
//            {
//                while (carry > 0)
//                {
//                    res[i].digits_m.push_back(carry % 10);
//                    carry -= carry % 10;
//                }
//            }
//        }
//
//        auto result = BigInt{"0"};
//
//        for (auto &i : res)
//        {
//            result += i;
//        }
//
//        return result;
//    }
//
//    deque<char> digits_m;
//};
//
///*You are required to complete below function */
//string multiplyStrings(string s1, string s2) {
//    //Your code here
//    BigInt bi1(s1);
//    BigInt bi2(s2);
//
//    return (bi1 * bi2).to_string();
//}
//
//int main() {
//
//
//    string s1;
//    return 0;
//}