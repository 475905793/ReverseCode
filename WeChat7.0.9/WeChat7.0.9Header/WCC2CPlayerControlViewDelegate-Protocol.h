//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCC2CPlayerControlViewDelegate <NSObject>
- (void)onGetBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onProgressBarBeginSeek;
- (void)onSightProgressBarHidden;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseVideoPlay;
- (void)onVideoPlayFail:(int)arg1 localizedErrorDes:(NSString *)arg2;
- (void)onStartPlayIconClick;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay;
@end
