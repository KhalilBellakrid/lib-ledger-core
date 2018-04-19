// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_ACCOUNT_HPP
#define DJINNI_GENERATED_ACCOUNT_HPP

#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class AmountCallback;
class BlockCallback;
class EventBus;
class Logger;
class OperationQuery;
class Preferences;
class StringListCallback;
enum class WalletType;

/**Class representing an account */
class Account {
public:
    virtual ~Account() {}

    /**
     *Key of the synchronization duration time in the synchronize event payload.
     *The value is stored in a int 64 time expressed in miliseconds.
     */
    static std::string const EV_SYNC_DURATION_MS;

    /**Key of the synchronization error code. The code is a stringified version of the value in the ErrorCode enum. */
    static std::string const EV_SYNC_ERROR_CODE;

    /**Key of the synchronization error message. The message is stored as a string. */
    static std::string const EV_SYNC_ERROR_MESSAGE;

    /**TODO */
    static std::string const EV_NEW_BLOCK_CURRENCY_NAME;

    static std::string const EV_NEW_BLOCK_HASH;

    static std::string const EV_NEW_BLOCK_HEIGHT;

    /**TODO */
    static std::string const EV_NEW_OP_WALLET_NAME;

    static std::string const EV_NEW_OP_ACCOUNT_INDEX;

    static std::string const EV_NEW_OP_UID;

    /**
     *Get index of account in user's wallet
     *32 bits integer
     */
    virtual int32_t getIndex() = 0;

    /**TODO */
    virtual std::shared_ptr<OperationQuery> queryOperations() = 0;

    /**
     *Get balance of account
     *@param callback, if getBalacne, Callback returning an Amount object which represents account's balance
     */
    virtual void getBalance(const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     *Get synchronization status of account
     *@return bool
     */
    virtual bool isSynchronizing() = 0;

    /**
     *Start synchronization of account
     *@return EventBus, handler will be notified of synchronization outcome
     */
    virtual std::shared_ptr<EventBus> synchronize() = 0;

    /**
     *Return account's preferences
     *@return Preferences object
     */
    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    /**
     *Return account's logger which provides all needed (e.g. database) logs
     *@return Logger Object
     */
    virtual std::shared_ptr<Logger> getLogger() = 0;

    /**
     *Return preferences of specific operation
     *@param uid, string of operation id
     *@return Preferences
     *Return operation for a specific operation
     *@param uid, string of operation id
     */
    virtual std::shared_ptr<Preferences> getOperationPreferences(const std::string & uid) = 0;

    /**
     * asBitcoinLikeAccount(): Callback<BitcoinLikeAccount>;
     * asEthereumLikeAccount(): Callback<EthereumLikeAccount>;
     * asRippleLikeAccount(): Callback<RippleLikeAccount>;
     *Check if account is a Bitcoin one
     *@return bool
     */
    virtual bool isInstanceOfBitcoinLikeAccount() = 0;

    /**
     *Check if account is an Ethereum one
     *@return bool
     */
    virtual bool isInstanceOfEthereumLikeAccount() = 0;

    /**
     *Check if account is a Ripple one
     *@return bool
     */
    virtual bool isInstanceOfRippleLikeAccount() = 0;

    /**TODO */
    virtual void getFreshPublicAddresses(const std::shared_ptr<StringListCallback> & callback) = 0;

    /**
     *Get type of wallet to which account belongs
     *@return WalletType object
     */
    virtual WalletType getWalletType() = 0;

    /**
     *Get event bus through which account is notified on synchronization status
     *@return EventBus object
     */
    virtual std::shared_ptr<EventBus> getEventBus() = 0;

    /**Start observing blockchain on which account synchronizes and send/receive transactions */
    virtual void startBlockchainObservation() = 0;

    /**Stop observing blockchain */
    virtual void stopBlockchainObservation() = 0;

    /**
     *Get account's observation status
     *@return boolean
     */
    virtual bool isObservingBlockchain() = 0;

    /**
     *Get Last block of blockchain on which account operates
     *@param callback, Callback returning, if getLastBlock succeeds, a Block object
     */
    virtual void getLastBlock(const std::shared_ptr<BlockCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ACCOUNT_HPP
