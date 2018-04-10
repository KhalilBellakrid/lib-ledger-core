// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGAmount;
@class LGBitcoinLikeBlock;
@class LGBitcoinLikeInput;
@class LGBitcoinLikeOutput;


/**Class representing a Bitcoin transaction */
@interface LGBitcoinLikeTransaction : NSObject

/**
 *Get transaction hash
 *@return string, transaction hash
 */
- (nonnull NSString *)getHash;

/**
 *Get list of inputs aggregated under that transaction
 *@return list of BitcoinLikeInput objects
 */
- (nonnull NSArray<LGBitcoinLikeInput *> *)getInputs;

/**
 *Get list of outputs aggregated under that transaction
 *@return list of BitcoinLikeOutput objects
 */
- (nonnull NSArray<LGBitcoinLikeOutput *> *)getOutputs;

/**
 *Get block to which this transaction belongs
 *@return Optional BitcoinLikeBlock
 */
- (nullable LGBitcoinLikeBlock *)getBlock;

/**
 *Get lock time of transaction, block height from which transaction may be accepted by miners
 *@return 64 bits integer, block height after which transaction can be accepted
 */
- (int64_t)getLockTime;

/**
 *Get fees payed for this transaction
 *@return Amount object, amount of fees
 */
- (nullable LGAmount *)getFees;

/**
 *Get time of creation of this transaction
 *@return Date object
 */
- (nonnull NSDate *)getTime;

@end