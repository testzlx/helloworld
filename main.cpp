#include <iostream>
#include "stringutil.h"
#include "testrunnable.h"
#include "Atomic.h"

using  namespace  tbsys;
using  namespace  std;

void testStringUtil(){
    cout << CStringUtil::isInt("21")<<endl;
    char arr[]="ABC##BCD#G";
    cout << CStringUtil::isInt(arr)<<endl;
    cout << CStringUtil::strToLower(arr)<<endl;
    vector<char*> result;
    CStringUtil::split(arr,"#",result);
    for (int i = 0;i < result.size();i++) {
        cout << result[i] << endl;
    }
}

void testThread(){
    TestRunnable testRunnable;
    testRunnable.start();
    testRunnable.wait();
}
void testAtomic(){
    muduo::AtomicInteger<int> a;
    cout<< a.addAndGet(56)<<endl;
}

int main() {
    cout << "Hello, World!" <<endl;
    testStringUtil();
    testThread();
    testAtomic();
    return 0;
}
