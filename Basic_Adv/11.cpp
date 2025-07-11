//VECTOR:
        // In C++ Dynamic array is implemented using the std::vector container from Standard Template Library[STL].

        // - We can change the sizeof vector during runtime 


        //Important Functions

        //1. push_back();
        //2. pop_back();
        //3. size();
        // 4. empty();
        //5. clear();
        //6. at();
        //7. front();
        //8. back();
        //9. begin();
        // 10. end();



#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    while ( ! v.empty()) {
        cout << v[ v.size() -1 ] << " ";
        v.pop_back();
    }

    return 0;
}
