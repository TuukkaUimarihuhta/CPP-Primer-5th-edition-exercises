#include <iostream>
#include <string>
#include "Sales_data.h"

void e1_20() {
    Sales_data book;
    double price{ 0 };
    //when entered it gives in order ie. 0-201-78345-X 2 25.00
    while (std::cin >> book.bookNo >> book.units_sold >> price) 
    {
        //revenue comes from units sold times the price
        book.revenue = book.units_sold * price;
        //comes out ion order of book name, units and total revenue
        std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << std::endl;
    }
}

int e1_21() {

    //two sales_data items
    Sales_data item1, item2;
    //price in double
    double price{ 0 };
    //adding item1 to have ISBN, units sold and price
    if (std::cin >> item1.bookNo >> item1.units_sold >> price) {
        //getting item1 revenue
        item1.revenue = item1.units_sold * price;
        //adding item2 ISBN, units sold and price
        if (std::cin >> item2.bookNo >> item2.units_sold >> price) {
            //item2 revenue
            item2.revenue = item2.units_sold * price;
            //checking item1 and item2 ISBN is the same
            if (item1.bookNo == item2.bookNo) {
                //if same, total sold items comes from adding the units sold from both
                unsigned totalSold{ item1.units_sold + item2.units_sold };
                //revenue comes from both items revenue
                double totalRevenue{ item1.revenue + item2.revenue };
                //get back item1 ISBN, total amount of sold books and total revenue
                std::cout << item1.bookNo << " " << totalSold << " " << totalRevenue << " ";
                //checks if total sold is zero
                if (totalSold != 0)
                    //if not, then it gives you the average amount of revenue made per book
                    std::cout << totalRevenue / totalSold << std::endl;
                else
                    //if yes, then inform that there is no sales
                    std::cout << "(no sales)" << std::endl;
            }
            else {
                //if item1 and item2 ISBN are not same, give error
                std::cerr << "Data must refer to the same ISBN!" << std::endl;
                return -1;
            }
        }
        else {
            //if no data given for item2, give error
            std::cerr << "No data for item two!" << std::endl;
            return -1;
        }
    }
    else {
        //if no data for item1, give error
        std::cerr << "No data for item one!" << std::endl;
        return -1;
    }
    return 0;
}

int ex1_22() {
    Sales_data curItem, item;
    //variable for price
    double price{ 0 };
    //give ISBN, amount sold and price
    if (std::cin >> curItem.bookNo >> curItem.units_sold >> price) 
    {
        // revenue from amoint and price
        curItem.revenue = curItem.units_sold * price;
        //give second ISBN, amount sold and price
        while (std::cin >> item.bookNo >> item.units_sold >> price) 
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
                std::cout << curItem.bookNo << " " << curItem.units_sold << " " << curItem.revenue;

                if (curItem.units_sold != 0)
                    // get average price of book
                    std::cout << curItem.revenue / curItem.units_sold << std::endl;
                else
                    std::cout << "(no sales)" << std::endl;

                //replace first items info with second items info
                curItem.bookNo = item.bookNo;
                curItem.units_sold = item.units_sold;
                curItem.revenue = item.revenue;
            }
        }

        //give first items info aat the end
        std::cout << curItem.bookNo << " " << curItem.units_sold << " " << curItem.revenue;
        if (curItem.units_sold != 0)
            std::cout << curItem.revenue / curItem.units_sold << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
    }
    else 
    {
        //if no data given, return error
        std::cerr << "No data for item!" << std::endl;
        return -1;
    }
    return 0;
}

int e1_23() {

    Sales_data currItem, item;

    double price{ 0 }
    ;
    if (std::cin >> currItem.bookNo >> currItem.units_sold >> price) 
    {
        //add count when inserted item
        int cnt{ 1 };
        //give second items info
        while (std::cin >> item.bookNo >> item.units_sold >> price) 

        {
            //if items have same ISBN, add 1 to count
            if (currItem.bookNo == item.bookNo) {
                ++cnt;
            }
            else 
            {
                //give first items ISBN and amount of times it was inserted
                std::cout << currItem.bookNo << " " << cnt << std::endl;
                // replace first items info with second item
                currItem.bookNo = item.bookNo;
                currItem.units_sold = item.units_sold;
                //reset count to 1
                cnt = 1;
            }
        }
        //give give the current items ISBN and count at the end
        std::cout << currItem.bookNo << " " << cnt << std::endl;
    }
    else {
        //if no data for item, return error
        std::cerr << "No data for item!" << std::endl;
        return -1;
    }
    return 0;
}

int e2_41() {
    //e1_20();
    //e1_21();
    //ex1_22();  // Also for ex1.25
    //ex1_23();  // Also for ex1.24

    return 0;
}