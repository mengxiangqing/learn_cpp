//
// Created by 蒙西昂请 on 2022/5/27.
//

#ifndef CLION_TICKETMACHINE_H
#define CLION_TICKETMACHINE_H


class TicketMachine {
public:
    TicketMachine();

    virtual ~TicketMachine();

    void showPrompt();

    void insertMoney(int money);

    void showBalance();


    void printTicket();

    void showTotal();

private:
    const int PRICE;
    int balance;
    int total;
};


#endif //CLION_TICKETMACHINE_H
