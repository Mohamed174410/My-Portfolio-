#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class Customer {
public:
    int id;
    string name;
    string password;
    Customer* next;

    Customer() {
        id = 0;
        name = "";
        password = "";
        next = nullptr;
    }
};

class CustomerList {
public:
    Customer* head;
    Customer* tail;

    CustomerList() {
        head = nullptr;
        tail = nullptr;
    }

    ~CustomerList() {
        Customer* temp = head;
        while (head != nullptr) {
            head = temp->next;
            delete temp;
            temp = head;
        }
    }
    //1
    void addCustomer(Customer* newCustomer) {
        if (head == nullptr) {
            head = newCustomer;
            tail = newCustomer;
        }
        else {
            tail->next = newCustomer;
            tail = newCustomer;
        }
    }
    
    //2
    void saveToFile(const string& filename) {
        Customer* current = head;
        ofstream outFile(filename);
        if (outFile.is_open()) {
            while (current != nullptr) {
                outFile << current->id << "," << current->name << "," << current->password << endl;
                current = current->next;
            }
            outFile.close();
        }
        else {
            cerr << "Error: Cannot open file for writing." << endl;
        }
    }

    //3
    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (!inFile.is_open()) {
            return; // File could not be opened
        }

        string line;
        while (getline(inFile, line)) {
            stringstream ss(line);
            string idStr, name, password;
            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, password, ',');

            // Validate 
            int id=0;
            int valid = 1;

            // Validate each string to ensure it's made up of digits only
            for (size_t i = 0; i < idStr.size(); i++) {
                if (idStr[i] < '0' || idStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }

            if (valid == 0 || idStr.size() == 0 ) {
                continue; // Skip invalid lines
            }

            // Convert validated data to integers
            id = stoi(idStr);

            Customer* newCustomer = new Customer();
            newCustomer->id = id;
            newCustomer->name = name;
            newCustomer->password = password;
            addCustomer(newCustomer);

        }

        inFile.close();
    }

    //4
    Customer* authenticate(int id, const string& password) {
        Customer* current = head;
        while (current != nullptr) {
            if (current->id == id && current->password == password) {
                cout << "Login successful! Welcome, " << current->name << "!" << endl;
                return current;
            }
            current = current->next;
        }
        cout << "Invalid ID or password." << endl;
        return nullptr;
    }
};

class Product {
public:
    int id;
    string name;
    int stock;
    int price;
    int expYear;
    int expMonth;
    Product* next;

    Product() {
        id = 0;
        name = "";
        stock = 0;
        price = 0;
        expYear = 0;
        expMonth = 0;
        next = nullptr;
    }
};

class ProductList {
public:
    Product* head;
    Product* tail;

    ProductList() {
        head = nullptr;
        tail = nullptr;
    }

    ~ProductList() {
        Product* temp = head;
        while (head != nullptr) {
            head = temp->next;
            delete temp;
            temp = head;
        }
    }

    //1
    void addNewProduct(int id, const string& name, int stock, int price, int expYear, int expMonth) {
        Product* newProduct = new Product();
        newProduct->id = id;
        newProduct->name = name;
        newProduct->stock = stock;
        newProduct->price = price;
        newProduct->expYear = expYear;
        newProduct->expMonth = expMonth;

        if (head == nullptr) {
            head = newProduct;
            tail = newProduct;
        }
        else {
            tail->next = newProduct;
            tail = newProduct;
        }
    }

    //2
    void saveToFile(const string& filename) {
        Product* current = head;
        ofstream outFile(filename);
        if (outFile.is_open()) {
            while (current != nullptr) {
                outFile << current->id << "," << current->name << "," << current->stock << "," << current->price << "," << current->expMonth << "," << current->expYear << endl;
                current = current->next;
            }
            outFile.close();
        }
        else {
            cerr << "Error: Cannot open file for writing." << endl;
        }
    }

    //3
    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (!inFile.is_open()) {
            return; // File could not be opened
        }

        string line;
        while (getline(inFile, line)) {
            stringstream ss(line);
            string idStr, name, stockStr, priceStr, expMonthStr, expYearStr;
            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, stockStr, ',');
            getline(ss, priceStr, ',');
            getline(ss, expMonthStr, ',');
            getline(ss, expYearStr, ',');

            // Validate 
            int id = 0, stock = 0, price = 0, expYear = 0, expMonth = 0;
            int valid = 1;

            for (size_t i = 0; i < idStr.size(); i++) {
                if (idStr[i] < '0' || idStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < stockStr.size(); i++) {
                if (stockStr[i] < '0' || stockStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < priceStr.size(); i++) {
                if (priceStr[i] < '0' || priceStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < expYearStr.size(); i++) {
                if (expYearStr[i] < '0' || expYearStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < expMonthStr.size(); i++) {
                if (expMonthStr[i] < '0' || expMonthStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }

            if (valid == 0 || idStr.size() == 0 || stockStr.size() == 0 || priceStr.size() == 0 || expYearStr.size() == 0 || expMonthStr.size() == 0) {
                continue; // Skip invalid lines
            }

            id = stoi(idStr);
            stock = stoi(stockStr);
            price = stoi(priceStr);
            expYear = stoi(expYearStr);
            expMonth = stoi(expMonthStr);

            addNewProduct(id, name, stock, price, expYear, expMonth);
        }
        inFile.close();
    }

    //4
    Product* searchById(int id) {
        Product* current = head;
        while (current != nullptr) {
            if (current->id == id) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    //5
    void displayProducts() {
        Product* current = head;
        while (current != nullptr) {
            cout << "ID: " << current->id << ", Name: " << current->name << ", Stock: " << current->stock << ", Price: " << current->price << ", Exp: " << current->expMonth << "/" << current->expYear << endl;
            current = current->next;
        }
    }
};

class Order {
public:
    int Pid;
    int Cid;
    int quantity;
    int price;
    string date;
    Order* next;

    Order() {
        this->Pid = 0;
        this->Cid = 0;
        this->quantity = 0;
        this->price = 0;
        this->date = "";
        this->next = NULL;
    }
};
class OrderList {
public:
    Order* phead;
    Order* ptail;

    OrderList() {
        phead = NULL;
        ptail = NULL;
    }

    ~OrderList() {
        Order* ptrav = phead;
        while (phead != NULL) {
            phead = ptrav->next;
            delete ptrav;
            ptrav = phead;
        }
    }

    //1
    void addOrder(int pid, int cid, int quantity, int price, string date) {
        Order* newOrder = new Order();
        newOrder->Pid = pid;
        newOrder->Cid = cid;
        newOrder->quantity = quantity;
        newOrder->price = price;
        newOrder->date = date;
        newOrder->next = NULL;

        if (phead == NULL) {
            phead = newOrder;
            ptail = newOrder;
        }
        else {
            ptail->next = newOrder;
            ptail = newOrder;
        }
    }

    //2
    void writeToFile(string filename, bool append = false) {
        ofstream outputfile;
        if (append) {
            outputfile.open(filename, ios::app);
        }
        else {
            outputfile.open(filename);
        }

        if (outputfile.is_open()) {
            Order* current = phead;
            while (current != NULL) {
                outputfile << current->Cid << ","
                    << current->Pid << ","
                    << current->quantity << ","
                    << current->price << ","
                    << current->date << endl;
                current = current->next;
            }
            outputfile.close();
        }
        else {
            cerr << "Error: Unable to open file for writing." << endl;
        }
    }

    //3
    void loadFromFile(const string& filename) {
        ifstream inputFile(filename);
        if (!inputFile.is_open()) {
            return; // File could not be opened
        }

        string line;
        while (getline(inputFile, line)) {
            stringstream ss(line);
            string cidStr, pidStr, quantityStr, priceStr, date;

            getline(ss, cidStr, ',');
            getline(ss, pidStr, ',');
            getline(ss, quantityStr, ',');
            getline(ss, priceStr, ',');
            getline(ss, date, ',');

            int cid = 0, pid = 0, quantity = 0, price = 0;
            int valid = 1;

            // Validate
            for (size_t i = 0; i < cidStr.size(); i++) {
                if (cidStr[i] < '0' || cidStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < pidStr.size(); i++) {
                if (pidStr[i] < '0' || pidStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < quantityStr.size(); i++) {
                if (quantityStr[i] < '0' || quantityStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }
            for (size_t i = 0; i < priceStr.size(); i++) {
                if (priceStr[i] < '0' || priceStr[i] > '9') {
                    valid = 0;
                    break;
                }
            }

            // Skip the line if any field is invalid
            if (valid == 0 || cidStr.size() == 0 || pidStr.size() == 0 || quantityStr.size() == 0 || priceStr.size() == 0) {
                continue;
            }

            // Convert validated strings to integers
            cid = stoi(cidStr);
            pid = stoi(pidStr);
            quantity = stoi(quantityStr);
            price = stoi(priceStr);

            // Add the order to the system
            addOrder(pid, cid, quantity, price, date);
        }

        inputFile.close();
    }

    //4
    Order* findOrdersByCustomerId(int customerID) {
        Order* current = phead;
        Order* result = NULL;
        Order* tail = NULL;

        while (current != NULL) {
            if (current->Cid == customerID) {
                Order* newOrder = new Order(*current);
                newOrder->next = NULL;

                if (result == NULL) {
                    result = newOrder;
                    tail = newOrder;
                }
                else {
                    tail->next = newOrder;
                    tail = newOrder;
                }
            }
            current = current->next;
        }

        return result;
    }

    //5
    void dis(int customerID)
    {

        Order* orders = findOrdersByCustomerId(customerID);
        if (orders != NULL) {
            cout << "Orders for Customer ID " << customerID << ":" << endl;
            while (orders != NULL) {
                cout << "Product ID: " << orders->Pid
                    << ", Quantity: " << orders->quantity
                    << ", Price: " << orders->price
                    << ", Date: " << orders->date << endl;
                orders = orders->next;
            }
        }
        else {
            cout << "No orders found for Customer ID " << customerID << endl;
        }
    }


};
void purchaseProduct(int productId, int customerId, int quantity, string date, ProductList& products, OrderList& orders) {
    Product* product = products.searchById(productId);
    if (product == NULL) {
        cout << "Product not found." << endl;
        return;
    }

    if (product->stock < quantity) {
        cout << "Not enough stock available." << endl;
        return;
    }

    int totalPrice = product->price * quantity;
    product->stock -= quantity;

    orders.addOrder(productId, customerId, quantity, totalPrice, date);
    products.saveToFile("Product.txt");
    orders.writeToFile("Orders.txt");

    cout << "Purchase successful! Total Price: " << totalPrice << endl;
}
int returnProduct(int customerId, int productId, int quantity, ProductList& products, OrderList& orders) {
    Product* product = products.searchById(productId);
    if (product == NULL) {
        cout << "Product not found." << endl;
        return -1;
    }

    Order* current = orders.phead;
    Order* previous = NULL;
    int status = 0;

    while (current != NULL) {
        if (current->Cid == customerId && current->Pid == productId && current->quantity >= quantity) {
            current->quantity -= quantity;
            product->stock += quantity;
            status = 1;

            if (current->quantity == 0) {
                if (previous == NULL) {
                    orders.phead = current->next;
                    if (current == orders.ptail) {
                        orders.ptail = NULL;
                    }
                }
                else {
                    previous->next = current->next;
                    if (current == orders.ptail) {
                        orders.ptail = previous;
                    }
                }
                delete current;
            }

            products.saveToFile("Product.txt");
            orders.writeToFile("Orders.txt");
            cout << "Product returned succesfuly!" << endl;
            return status;
        }

        previous = current;
        current = current->next;
    }

    if (status == 0) {
        cout << "No matching order found for this product and customer." << endl;
    }
    return status;
}
class admin {
public:
    int id;
    string name;
    string password;
    admin* next;

    admin() {
        this->id = 0;
        this->name = " ";
        this->password = " ";
        this->next = NULL;
    }
};
class adminlist {
public:
    admin* phead;
    admin* ptail;

    adminlist() {
        phead = NULL;
        ptail = NULL;
    }

    ~adminlist() {
        admin* ptrav = phead;
        while (phead != NULL) {
            phead = ptrav->next;
            delete ptrav;
            ptrav = phead;
        }
    }

    //1
    void addadmin(int id, string name, string password) {
        admin* newadmin = new admin;
        newadmin->id = id;
        newadmin->name = name;
        newadmin->password = password;
        if (phead == NULL) {
            phead = newadmin;
            ptail = newadmin;
        }
        else {
            ptail->next = newadmin;
            ptail = newadmin;
        }
    }

    //2
    admin* login(int id, string password) {
        admin* current = phead;
        while (current != NULL) {
            if (current->id == id && current->password == password) {
                cout << "Login successful! Welcome, " << current->name << "!" << endl;
                return current;
            }
            current = current->next;
        }
        cout << "Invalid ID or password." << endl;
        return NULL;
    }

    //3
    void adminMonitorOrders(OrderList& ol, int customerID) {
        Order* orders = ol.findOrdersByCustomerId(customerID);
        if (orders != NULL) {
            cout << "Orders for Customer ID " << customerID << ":" << endl;
            while (orders != NULL) {
                cout << "Product ID: " << orders->Pid << ", Quantity: " << orders->quantity << ", Price: " << orders->price << ", Date: " << orders->date << endl;
                orders = orders->next;
            }
        }
        else {
            cout << "No orders found for Customer ID " << customerID << endl;
        }
    }
};
adminlist loadAdmins() {
    adminlist adminL;
    ifstream myreadfile("Admin.txt");

    if (myreadfile.is_open()) {
        string line;
        while (getline(myreadfile, line)) {
            stringstream ss(line);
            string idStr, name, password;

            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, password, ',');

            try {
                int id = stoi(idStr);
                adminL.addadmin(id, name, password);
            }
            catch (...) {
                cerr << "Invalid data in line: " << line << ". Skipping." << endl;
            }
        }
        myreadfile.close();
    }
    else {
        cerr << "Error: Unable to open admin file." << endl;
    }

    return adminL;
}

int main() {
    CustomerList customers;
    ProductList products;
    OrderList orders;
    adminlist admins = loadAdmins();

    customers.loadFromFile("Customer.txt");
    products.loadFromFile("Product.txt");
    orders.loadFromFile("Orders.txt");

    int choice;
    int customerchoice;
    while (true)
    {
        cout << "1. Customer Registration" << endl;
        cout << "2. Login / Sign In" << endl;
        cout << "3. Admin Login" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // Customer Registration
            int id;
            string name, password;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter password: ";
            cin >> password;

            Customer* newCustomer = new Customer;
            newCustomer->id = id;
            newCustomer->name = name;
            newCustomer->password = password;
            customers.addCustomer(newCustomer);

            customers.saveToFile("Customer.txt");
            cout << "Customer registered successfully!" << endl;
        }
        else if (choice == 2) {
            // Customer Login
            int id;
            string password;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter password: ";
            cin >> password;

            Customer* loggedInCustomer = customers.authenticate(id, password);
            if (loggedInCustomer)
            {
                cout << "Customer logged in successfully!" << endl;
                // Add further customer-specific functionality here

                while (true)
                {

                    cout << "customer menu:" << endl;
                    cout << "1. purchase product" << endl;
                    cout << "2.return product" << endl;
                    cout << "3.view products" << endl;
                    cout << "4.view orders" << endl;
                    cout << "5.logout " << endl;
                    cout << "Enter choice: ";
                    cin >> customerchoice;


                    if (customerchoice == 1)
                    {
                        int productId, quantity, customerId;
                        string date;

                        cout << "Enter Product ID: ";
                        cin >> productId;
                        cout << "Enter Quantity: ";
                        cin >> quantity;
                        cout << "Enter Customer ID: ";
                        cin >> customerId;
                        cout << "Enter Purchase Date (YYYY-MM-DD): ";
                        cin >> date;

                        purchaseProduct(productId, customerId, quantity, date, products, orders);
                    }
                    if (customerchoice == 2)
                    {
                        int customerId, productId, quantity;
                        string date;


                        cout << "Enter Customer ID to return product: ";
                        cin >> customerId;

                        cout << "Enter Product ID to return: ";
                        cin >> productId;

                        cout << "Enter Quantity to return: ";
                        cin >> quantity;

                        // Call returnProduct function and store status
                        int returnStatus = returnProduct(customerId, productId, quantity, products, orders);

                        if (returnStatus == 1) {
                            cout << "Product return successful. Stock updated!" << endl;
                        }
                        else if (returnStatus == 0) {
                            cout << "No matching order found for this product and customer." << endl;
                        }
                        else {
                            cout << "Error: Could not complete the return." << endl;
                        }
                    }
                    if (customerchoice == 3)
                    {
                        //View Products
                        products.displayProducts();
                    }
                    if (customerchoice == 4)
                    {
                        // View Orders for a customer
                        int customerID;
                        cout << "Enter Customer ID to view orders: ";
                        cin >> customerID;
                        orders.dis(customerID);
                    }
                    if (customerchoice == 5)
                    {
                        cout << "customer logged out." << endl;
                        break;  // Exit admin menu
                    }
                    else {
                        cout << "Invalid choice. Please try again." << endl;
                    }
                }
            }

        }
        else if (choice == 3)
        {
            // Admin Login
            int adminID;
            string adminPassword;
            cout << "Enter Admin ID: ";
            cin >> adminID;
            cout << "Enter Password: ";
            cin >> adminPassword;

            admin* loggedInAdmin = admins.login(adminID, adminPassword);
            if (loggedInAdmin)
            {
                cout << "Admin logged in successfully!" << endl;

                // Admin menu
                while (true) {
                    int adminChoice;
                    cout << "Admin Menu:" << endl;
                    cout << "1. Add Product" << endl;
                    cout << "2. Logout" << endl;
                    cout << "Enter choice: ";
                    cin >> adminChoice;

                    if (adminChoice == 1) {
                        // Add Product
                        int id, stock, price, exp_year, exp_month;
                        string name;

                        cout << "Enter Product ID: ";
                        cin >> id;
                        cout << "Enter Product Name: ";
                        cin.ignore();  // Ignore previous newline
                        getline(cin, name);
                        cout << "Enter Stock Quantity: ";
                        cin >> stock;
                        cout << "Enter Price: ";
                        cin >> price;
                        cout << "Enter Expiration Year: ";
                        cin >> exp_year;
                        cout << "Enter Expiration Month: ";
                        cin >> exp_month;

                        products.addNewProduct(id, name, stock, price, exp_year, exp_month);
                        products.saveToFile("Product.txt");
                        cout << "Product added successfully and saved to file!" << endl;
                    }

                    else if (adminChoice == 2)
                    {
                        // Logout from Admin Menu
                        cout << "Admin logged out." << endl;
                        break;  // Exit admin menu
                    }
                    else {
                        cout << "Invalid choice. Please try again." << endl;
                    }
                }
            }
            else {
                cout << "Invalid Admin ID or Password." << endl;
            }
        }
        else if (choice == 4)
        {
            // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
