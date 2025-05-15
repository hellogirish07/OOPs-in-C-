# include <iostream> 

using namespace std;

class BankAccount {
private:
    double balance;
    string password;

public:
    string accountId;
    string username;
};

int main() {
    BankAccount account1;

    account1.accountId = "123456789";
    account1.username = "John Doe";
    // account1.balance = 1000.0; // Error: balance is private
    // account1.password = "password123"; // Error: password is private

    cout << "Account ID: " << account1.accountId << endl;
    cout << "Username: " << account1.username << endl;
    return 0;
}