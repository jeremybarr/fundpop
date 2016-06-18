//
//  Event.h
//  fundpop
//
//  Created by admin on 6/17/16.
//  Copyright © 2016 FundPOp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Event : NSObject

@property(nonatomic, strong) NSString *eventName;
@property(nonatomic, strong) NSString *creator;
@property(nonatomic, strong) NSString *desc;
@property(nonatomic, strong) NSDecimalNumber *current;
@property(nonatomic, strong) NSDecimalNumber *total;
@property(nonatomic, assign) NSInteger *index;

@end
