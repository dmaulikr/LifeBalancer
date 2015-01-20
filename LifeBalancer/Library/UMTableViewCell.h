//
//  UMTableViewCell.h
//  SWTableViewCell
//
//  Created by Matt Bowman on 12/2/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "customtextfield.h"
#import "QRadioButton.h"

/*
 *  Example of a custom cell built in Storyboard
 */
@interface UMTableViewCell : SWTableViewCell <UITextFieldDelegate,QRadioButtonDelegate>

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (nonatomic) QRadioButton *radioButton;
@property (nonatomic, assign) BOOL canSwipe;

@end
