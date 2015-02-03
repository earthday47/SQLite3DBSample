//
//  ViewController.h
//  SQLite3DBSample
//
//  Created by Wesley Jones on 2/3/15.
//  Copyright (c) 2015 Accelerate Media. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;

-(IBAction)addNewRecord:(id)sender;

@end

