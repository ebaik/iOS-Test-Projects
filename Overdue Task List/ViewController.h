//
//  ViewController.h
//  Overdue Task List
//
//  Created by EB on 3/31/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddTaskViewController.h"
#import "DetailTaskViewController.h"

@interface ViewController : UIViewController <AddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, DetailTaskViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarButtonItemPressed:(UIBarButtonItem *)sender;


@end

