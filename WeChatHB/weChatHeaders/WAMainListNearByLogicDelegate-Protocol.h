//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WAMainListNearByLogicDelegate <NSObject>

@optional
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onNearByInfoTriggerUpdated;
- (void)onFirstTimeGetNearByInfo;
- (void)onGetLocationWithLatitude:(double)arg1 longitude:(double)arg2;
@end
