//
//  DetailTaskViewController.h
//  Overdue Task List
//
//  Created by EB on 3/31/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"
#import "EditTaskViewController.h"

@protocol DetailTaskViewControllerDelegate <NSObject>

-(void)updateTask;

@end

@interface DetailTaskViewController : UIViewController <EditTaskViewControllerDelegate>

@property (strong, nonatomic) Task *task;
@property (weak, nonatomic) id <DetailTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
