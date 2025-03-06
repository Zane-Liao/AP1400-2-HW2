#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client
{
public:
    /** Constructor Creates an object of Client and assigning the 
     * specified variables using the inputs. Also generate RSA keys 
     * for the client (public and private keys). 
     */
	Client(std::string id, const Server& server);
    /** Returns the Client's id. */
	std::string get_id();
    /** Returns the Client's public key. */
	std::string get_publickey();
    /** Returns the amount of money the client has. */
	double get_wallet();
    /** :UPDATE:: sign signs the input with the private 
     * key and returns the signature.
     */
	std::string sign(std::string txt);
    /** Creates a transaction in the server according to its inputs. 
     * To create a transaction use the specified string format described 
     * in above sections and sign the final transaction string with your 
     * private key. use both your signature and your transaction signature 
     * to create a pending transaction in the Server using add_pending_trx 
     * function. 
     */
	bool transfer_money(std::string receiver, double value);
    /** Returns a random number as a nonce so the server uses it for mining. */
	size_t generate_nonce();
private:
	Server const* const server;
	const std::string id;
	std::string public_key;
	std::string private_key;
};

#endif //CLIENT_H