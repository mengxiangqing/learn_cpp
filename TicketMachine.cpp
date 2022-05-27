//
// Created by 蒙西昂请 on 2022/5/27.
//

#include <iostream>
#include "TicketMachine.h"

TicketMachine::TicketMachine() : PRICE(0) {

}

TicketMachine::~TicketMachine() {

}

void TicketMachine::showPrompt() {
    std::cout << "something" << std::endl;
}

void TicketMachine::insertMoney(int money) {
    balance += money;

}

void TicketMachine::showBalance() {
    std::cout << balance << std::endl;
}

void TicketMachine::printTicket() {

}

void TicketMachine::showTotal() {

}
