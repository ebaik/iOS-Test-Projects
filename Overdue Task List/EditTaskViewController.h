//
//  EditTaskViewController.h
//  Overdue Task List
//
//  Created by EB on 3/31/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@protocol EditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface EditTaskViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>

@property (strong, nonatomic) Task *task;
@property (weak, nonatomic) id <EditTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
