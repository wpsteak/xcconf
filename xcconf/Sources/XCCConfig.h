//
// Created by AlexDenisov on 04/02/15.
// Copyright (c) 2015 AlexDenisov. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XCCEnvironment;

@interface XCCConfig : NSObject

@property (copy) NSString *principalClassName;
@property (copy) NSArray *environments;

- (XCCEnvironment *)objectForKeyedSubscript:(NSString *)key;

@end
