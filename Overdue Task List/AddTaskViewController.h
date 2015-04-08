//
//  AddTaskViewController.h
//  Overdue Task List
//
//  Created by EB on 3/31/15.
//  Copyright (c) 2015 Test Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@protocol AddTaskViewControllerDelegate <NSObject>

-(void)didCancel;
-(void)didAddTask:(Task *)task;

@end

@interface AddTaskViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate>

@property (weak, nonatomic) id <AddTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;


- (IBAction)addTaskButtonPressed:(id)sender;
- (IBAction)cancelButtonPressed:(id)sender;

@end
