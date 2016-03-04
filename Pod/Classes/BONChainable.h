//
//  BONChainable.h
//  Pods
//
//  Created by Zev Eisenberg on 10/9/15.
//
//

@import Foundation;

@class BONText;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Objects conforming to this protocol can be used in BonMot chaining operations.
 */
@protocol BONChainable <NSObject>

@property (strong, nonatomic, readonly) BONText *text;

@end

NS_ASSUME_NONNULL_END
