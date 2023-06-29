//
//  DNSResolver.h
//  networkDemo
//
//  Created by LJP on 2023/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNSResolver : NSObject

@property NSString *hostname;
@property NSArray *addresses;
@property NSError *error;
@property BOOL shouldCancel;
- (BOOL)lookup;

@end

NS_ASSUME_NONNULL_END
