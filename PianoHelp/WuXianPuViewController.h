//
//  WuXianPuViewController.h
//  PianoHelp
//
//  Created by zhengyw on 14-6-25.
//  Copyright (c) 2014年 FlintInfo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "StaveFramework/MidiFile.h"
#import "StaveFramework/MidiPlayer.h"
#import "StaveFramework/Piano.h"
#import "StaveFramework/SheetMusic.h"
#import "StaveFramework/SheetMusicPlay.h"
#import "StaveFramework/SFCountdownView.h"
#import "Melody.h"

@interface WuXianPuViewController : BaseViewController <MidiPlayerDelegate, UIGestureRecognizerDelegate>
{
    MidiFile *midifile;         /** The midifile that was read */
    SheetMusic *sheetmusic;     /** The sheet music to display */
    UIScrollView *scrollView;   /** For scrolling through the sheet music */
    MidiPlayer *player;         /** The top panel for playing the music */
    Piano *piano;               /** The piano at the top, for highlighting notes */
    float zoom;                 /** The zoom level */
    MidiOptions options;        /** The options selected in the menus */
    SheetMusicPlay *sheetmsic1;
}


@property (nonatomic) int type;
@property (strong, nonatomic) NSString *fileName;
@property (weak, nonatomic) IBOutlet UIButton *btnPlay;
@property (weak, nonatomic) IBOutlet UIButton *btnPuKu;
@property (weak, nonatomic) IBOutlet UIView *toolBarView;
@property (weak, nonatomic) Melody *melody;
@property BOOL isFromSearchViewController;

- (IBAction)btnPuKuClick:(UIButton *)sender;
- (IBAction)btnPlayClick:(UIButton *)sender;
- (IBAction)btnBackClick:(UIButton *)sender;

@end
