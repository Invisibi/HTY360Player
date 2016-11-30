//
//  HTY360PlayerVC.h
//  HTY360Player
//
//  Created by  on 11/8/15.
//  Copyright © 2015 Hanton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "HTYGLKVC.h"

@protocol HTY360PlayerVCDelegate <NSObject>

- (void)updatePlayer:(AVPlayer *)player playProgress:(float)progress;
- (void)playerReachEnd:(AVPlayer *)player;
- (void)playerOnClick:(AVPlayer *)player;

@end

@interface HTY360PlayerVC : UIViewController <AVPlayerItemOutputPullDelegate>

@property (strong, nonatomic) IBOutlet UIView *playerControlBackgroundView;
@property (strong, nonatomic) HTYGLKVC *glkViewController;
@property (weak, nonatomic, nullable) id<HTY360PlayerVCDelegate> delegate;

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil url:(NSURL*)url;
- (CVPixelBufferRef)retrievePixelBufferToDraw;
- (void)toggleControls;

- (void)configureGLKView;
- (void)removeGLKView;

@end
