#include <iostream>
#include "Client.h"
#include "CocaColaFactory.h"

using namespace std;

int main()
{
    Client* client = new Client(new CocaColaFactory());
    client->Run();

    return 0;
}
