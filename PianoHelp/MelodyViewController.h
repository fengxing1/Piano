//
//  MelodyViewController.h
//  PianoHelp
//
//  Created by Jobs on 14-5-15.
//  Copyright (c) 2014年 FlintInfo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APLProduct.h"
#import "BaseViewController.h"
#import "MelodyTableViewCell.h"
#import "Melody.h"

@protocol FixSearchDisplayDelegate <NSObject>

-(void)fixSearchBarPosition;

@end

@interface MelodyViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, MelodyTableViewCellDelegate, FixSearchDisplayDelegate>
{
    BOOL isNeedFixSearchBar;
}

@property (weak, nonatomic) IBOutlet UIView *toolBarView;
@property (weak, nonatomic) IBOutlet UILabel *labTitle;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSSet *melodySet;
@property (nonatomic) NSArray *melodyArray; // The master content.
@property (nonatomic) NSMutableArray *searchResults;

- (IBAction)btnBack_onclick:(id)sender;
@end
