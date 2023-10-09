#include <string>

using namespace std;

struct RouterNode {
    RouterNode* children[2]; //two children for 0 and 1 bits
    int routerNumber;

    RouterNode();
};

class PrefixMatcher {
private:
    RouterNode* root;
    void insert(const string& address, RouterNode* node, int routerNum, int index);

public:
    PrefixMatcher();
    void insert(string address, int routerNum);
    int selectRouter(string networkAddress);
};
