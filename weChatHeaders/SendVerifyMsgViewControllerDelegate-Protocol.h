//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CVerifyContactWrap;

@protocol SendVerifyMsgViewControllerDelegate <NSObject>

@optional
- (void)contactAddContactOk:(CVerifyContactWrap *)arg1;
- (void)contactSendRequestOk:(CVerifyContactWrap *)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
@end

