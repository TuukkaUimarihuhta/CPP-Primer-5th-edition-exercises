#include <iostream>

using std::cout; using std::cin; using std::endl; using std::string; using std::cerr;

int ex1_9() {
	int num{ 50 }, sum{ 0 };

	while (num <= 100)
	{
		sum +=num;
		num++;
	}
	cout << sum << endl;

    return 0;
}

int ex1_10() {
	int num{ 10 };

	while (num > 0)
	{
        cout << num << endl;
        num--;
	}
	cout << num << endl;

    return 0;
}

int exe1_11() {
    int val1{ 0 }, val2{ 0 };
    // Asks you to give values for variables
    cout << "Give values to variables val1 and val2." << endl << endl;
    cout << "val1: ";
    // enter value for val1
    cin >> val1;
    cout << "val2: ";
    // enter value for val2
    cin >> val2;
    // while loop that gives you all numbers in range of val1 and val2
    while (val1 <= val2) {
        cout << val1 << endl;
        val1++;
    }
    return 0;
}

struct Sales_data {
    string bookNo;
    unsigned units_sold{ 0 };
    double revenue{ 0.0 };
};

void ex1_20() {
    Sales_data book;
    double price{ 0 };
    //when entered it gives in order ie. 0-201-78345-X 2 25.00
    while (cin >> book.bookNo >> book.units_sold >> price)
    {
        //revenue comes from units sold times the price
        book.revenue = book.units_sold * price;
        //comes out ion order of book name, units and total revenue
        cout << book.bookNo << " " << book.units_sold << " " << book.revenue << endl;
    }
}

int ex1_21() {

    //two sales_data items
    Sales_data item1, item2;
    //price in double
    double price{ 0 };
    //adding item1 to have ISBN, units sold and price
    if (cin >> item1.bookNo >> item1.units_sold >> price) {
        //getting item1 revenue
        item1.revenue = item1.units_sold * price;
        //adding item2 ISBN, units sold and price
        if (cin >> item2.bookNo >> item2.units_sold >> price) {
            //item2 revenue
            item2.revenue = item2.units_sold * price;
            //checking item1 and item2 ISBN is the same
            if (item1.bookNo == item2.bookNo) {
                //if same, total sold items comes from adding the units sold from both
                unsigned totalSold{ item1.units_sold + item2.units_sold };
                //revenue comes from both items revenue
                double totalRevenue{ item1.revenue + item2.revenue };
                //get back item1 ISBN, total amount of sold books and total revenue
                cout << item1.bookNo << " " << totalSold << " " << totalRevenue << " ";
                //checks if total sold is zero
                if (totalSold != 0)
                    //if not, then it gives you the average amount of revenue made per book
                    cout << totalRevenue / totalSold << endl;
                else
                    //if yes, then inform that there is no sales
                    cout << "(no sales)" << endl;
            }
            else {
                //if item1 and item2 ISBN are not same, give error
                cerr << "Data must refer to the same ISBN!" << endl;
                return -1;
            }
        }
        else {
            //if no data given for item2, give error
            cerr << "No data for item two!" << endl;
            return -1;
        }
    }
    else {
        //if no data for item1, give error
        cerr << "No data for item one!" << endl;
        return -1;
    }
    return 0;
}

int exe1_22() {
    Sales_data curItem, item;
    //variable for price
    double price{ 0 };
    //give ISBN, amount sold and price
    if (cin >> curItem.bookNo >> curItem.units_sold >> price)
    {
        // revenue from amoint and price
        curItem.revenue = curItem.units_sold * price;
        //give second ISBN, amount sold and price
        while (cin >> item.bookNo >> item.units_sold >> price)
        {
            //revenue gotten from amount and price
            item.revenue = item.units_sold * price;
            //check if ISBNs match
            if (curItem.bookNo == item.bookNo)
            {
                //if yes, add units sold together
                curItem.units_sold += item.units_sold;
                //add revenues together
                curItem.revenue += item.revenue;
            }
            else
            {
                //give first items ISBN, units sold and total revenue
                cout << curItem.bookNo << " " << curItem.units_sold << " " << curItem.revenue;

                if (curItem.units_sold != 0)
                    // get average price of book
                    cout << curItem.revenue / curItem.units_sold << endl;
                else
                    cout << "(no sales)" << endl;

                //replace first items info with second items info
                curItem.bookNo = item.bookNo;
                curItem.units_sold = item.units_sold;
                curItem.revenue = item.revenue;
            }
        }

        //give first items info aat the end
        cout << curItem.bookNo << " " << curItem.units_sold << " " << curItem.revenue;
        if (curItem.units_sold != 0)
            cout << curItem.revenue / curItem.units_sold << endl;
        else
            cout << "(no sales)" << endl;
    }
    else
    {
        //if no data given, return error
        cerr << "No data for item!" << endl;
        return -1;
    }
    return 0;
}

int ex1_23() {

    Sales_data currItem, item;

    double price{ 0 }
    ;
    if (cin >> currItem.bookNo >> currItem.units_sold >> price)
    {
        //add count when inserted item
        int cnt{ 1 };
        //give second items info
        while (cin >> item.bookNo >> item.units_sold >> price)

        {
            //if items have same ISBN, add 1 to count
            if (currItem.bookNo == item.bookNo) {
                ++cnt;
            }
            else
            {
                //give first items ISBN and amount of times it was inserted
                cout << currItem.bookNo << " " << cnt << endl;
                // replace first items info with second item
                currItem.bookNo = item.bookNo;
                currItem.units_sold = item.units_sold;
                //reset count to 1
                cnt = 1;
            }
        }
        //give give the current items ISBN and count at the end
        cout << currItem.bookNo << " " << cnt << endl;
    }
    else {
        //if no data for item, return error
        cerr << "No data for item!" << endl;
        return -1;
    }
    return 0;
}

int e3_1() {
    ex1_9();
    ex1_10();
    exe1_11();
    ex1_20();
    ex1_21();
    exe1_22();
    ex1_23();

    return 0;
}