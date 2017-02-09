include <vector>
typedef unsigned long long ull;
class ProdFib
{
  public:
      static std::vector<ull> productFib(ull prod);

};

std::vector<ull> 
ProdFib::productFib(ull prod)
{
    ull op1 = 0, op2 = 1, next;
      /* walk the fib. numbers until F(n)*F(n+1)>prod */
    while (op1*op2 < prod) {
          next = op1 + op2; 
              op1 = op2;
                  op2 = next;
                    
    }
      /* build the output vector {F(n), F{n+1}, (F(n)*F(n+1)==prod)} */
      std::vector<ull> res = { op1, op2, op1*op2 == prod ? true : false  };
        return res;

};
