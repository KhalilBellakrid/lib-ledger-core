// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGTimePeriod.h"
#import "LGWalletType.h"
#import <Foundation/Foundation.h>
@class LGBitcoinLikeAccount;
@class LGEventBus;
@class LGLogger;
@class LGOperationQuery;
@class LGPreferences;
@protocol LGAmountCallback;
@protocol LGAmountListCallback;
@protocol LGBlockCallback;
@protocol LGStringListCallback;

/**
 *Key of the synchronization duration time in the synchronize event payload.
 *The value is stored in a int 64 time expressed in miliseconds.
 */
extern NSString * __nonnull const LGAccountEVSYNCDURATIONMS;
/**Key of the synchronization error code. The code is a stringified version of the value in the ErrorCode enum. */
extern NSString * __nonnull const LGAccountEVSYNCERRORCODE;
/**Key of the synchronization error message. The message is stored as a string. */
extern NSString * __nonnull const LGAccountEVSYNCERRORMESSAGE;
/**TODO */
extern NSString * __nonnull const LGAccountEVNEWBLOCKCURRENCYNAME;
extern NSString * __nonnull const LGAccountEVNEWBLOCKHASH;
extern NSString * __nonnull const LGAccountEVNEWBLOCKHEIGHT;
/**TODO */
extern NSString * __nonnull const LGAccountEVNEWOPWALLETNAME;
extern NSString * __nonnull const LGAccountEVNEWOPACCOUNTINDEX;
extern NSString * __nonnull const LGAccountEVNEWOPUID;

/**Class representing an account */
@interface LGAccount : NSObject

/**
 *Get index of account in user's wallet
 *32 bits integer
 */
- (int32_t)getIndex;

/**TODO */
- (nullable LGOperationQuery *)queryOperations;

/**
 *Get balance of account
 *@param callback, if getBalacne, Callback returning an Amount object which represents account's balance
 */
- (void)getBalance:(nullable id<LGAmountCallback>)callback;

/**
 *Get balance of account at a precise interval with a certain granularity
 *@param start, lower bound of search range
 *@param end, upper bound of search range
 *@param precision, granularity at which we want results
 *@param callback, ListCallback returning a list of Amount object which represents account's balance
 */
- (void)getBalanceHistory:(nonnull NSString *)start
                      end:(nonnull NSString *)end
                   period:(LGTimePeriod)period
                 callback:(nullable id<LGAmountListCallback>)callback;

/**
 *Get synchronization status of account
 *@return bool
 */
- (BOOL)isSynchronizing;

/**
 *Start synchronization of account
 *@return EventBus, handler will be notified of synchronization outcome
 */
- (nullable LGEventBus *)synchronize;

/**
 *Return account's preferences
 *@return Preferences object
 */
- (nullable LGPreferences *)getPreferences;

/**
 *Return account's logger which provides all needed (e.g. database) logs
 *@return Logger Object
 */
- (nullable LGLogger *)getLogger;

/**
 *Return preferences of specific operation
 *@param uid, string of operation id
 *@return Preferences
 *Return operation for a specific operation
 *@param uid, string of operation id
 */
- (nullable LGPreferences *)getOperationPreferences:(nonnull NSString *)uid;

- (nullable LGBitcoinLikeAccount *)asBitcoinLikeAccount;

/**
 * asEthereumLikeAccount(): Callback<EthereumLikeAccount>;
 * asRippleLikeAccount(): Callback<RippleLikeAccount>;
 *Check if account is a Bitcoin one
 *@return bool
 */
- (BOOL)isInstanceOfBitcoinLikeAccount;

/**
 *Check if account is an Ethereum one
 *@return bool
 */
- (BOOL)isInstanceOfEthereumLikeAccount;

/**
 *Check if account is a Ripple one
 *@return bool
 */
- (BOOL)isInstanceOfRippleLikeAccount;

/**TODO */
- (void)getFreshPublicAddresses:(nullable id<LGStringListCallback>)callback;

/**
 *Get type of wallet to which account belongs
 *@return WalletType object
 */
- (LGWalletType)getWalletType;

/**
 *Get event bus through which account is notified on synchronization status
 *@return EventBus object
 */
- (nullable LGEventBus *)getEventBus;

/**Start observing blockchain on which account synchronizes and send/receive transactions */
- (void)startBlockchainObservation;

/**Stop observing blockchain */
- (void)stopBlockchainObservation;

/**
 *Get account's observation status
 *@return boolean
 */
- (BOOL)isObservingBlockchain;

/**
 *Get Last block of blockchain on which account operates
 *@param callback, Callback returning, if getLastBlock succeeds, a Block object
 */
- (void)getLastBlock:(nullable id<LGBlockCallback>)callback;

/** Get the key used to generate the account */
- (nonnull NSString *)getRestoreKey;

@end
