//
//  Task.m
//  Overdue Task List
//
//  Created by EB on 4/2/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import "Task.h"

@implementation Task

@synthesize description;

-(id)initWithData:(NSDictionary *)data;
{
    self = [super init];
    
    if (self) {
        self.title = data[TASK_TITLE];
        self.description = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    
    return self;
}

-(id)init
{
    self = [self initWithData:nil];
    
    return self;
}

@end
