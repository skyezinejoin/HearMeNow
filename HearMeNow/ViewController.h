//
//  ViewController.h
//  HearMeNow
//
//  Created by Lau Philip on 6/2/14.
//  Copyright (c) 2014 Ubersoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;

@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;

- (IBAction)playPressed:(id)sender;

@end
