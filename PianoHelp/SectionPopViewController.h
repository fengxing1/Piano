//
//  SectionPopViewController.h
//  PianoHelp
//
//  Created by Jobs on 14-6-2.
//  Copyright (c) 2014年 FlintInfo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StaveFramework/PianoCommon.h"
@class MelodyDetailViewController;

@interface SectionPopViewController : UIViewController <UITextFieldDelegate>
{
    
}

@property (weak, nonatomic) MelodyDetailViewController *parentVC;
@property (nonatomic, assign) id <SheetMusicsDelegate> shd;


@property (weak, nonatomic) IBOutlet UITextField *txtFrom;
@property (weak, nonatomic) IBOutlet UITextField *txtTo;

- (IBAction)btnNumber_click:(id)sender;
- (IBAction)btnOK_click:(id)sender;
- (IBAction)btnDel_click:(id)sender;
- (IBAction)btnRet_click:(id)sender;


@end
