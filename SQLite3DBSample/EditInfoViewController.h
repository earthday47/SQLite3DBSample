//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by Wesley Jones on 2/3/15.
//  Copyright (c) 2015 Accelerate Media. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol EditInfoViewControllerDelegate

-(void)editingInfoWasFinished;

@end

@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;

@property (nonatomic) int recordIDToEdit;

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;

@property (weak, nonatomic) IBOutlet UITextField *txtLastname;

@property (weak, nonatomic) IBOutlet UITextField *txtAge;

-(IBAction)saveInfo:(id)sender;

@end
