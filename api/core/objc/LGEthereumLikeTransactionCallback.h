// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGError.h"
#import <Foundation/Foundation.h>
@class LGEthereumLikeTransaction;


/**
 *Callback triggered by main completed task,
 *returns optional result of template type T
 */
@protocol LGEthereumLikeTransactionCallback

/**
 * Method triggered when main task complete
 * @params result optional of type T, non null if main task failed
 * @params error optional of type Error, non null if main task succeeded
 */
- (void)onCallback:(nullable LGEthereumLikeTransaction *)result
             error:(nullable LGError *)error;

@end
