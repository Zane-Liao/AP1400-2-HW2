#include "client.h"


Client::Client(std::string id, const Server& server) {

}

std::string Client::get_id()
{
    return std::string();
}

std::string Client::get_publickey() {
    return std::string();
}

double Client::get_wallet() {
    return 0.0f;
}

std::string Client::sign(std::string txt) {
    return std::string();
}

bool Client::transfer_money(std::string receiver, double value) {
    return true;
}

size_t Client::sgenerate_nonce() {
    return size_t();
}