//
//  Task.h
//  Overdue Task List
//
//  Created by EB on 4/2/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSDate *date;
@property (nonatomic) BOOL isCompleted;

-(id)initWithData:(NSDictionary *)data;

@end
