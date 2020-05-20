//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "ViewLocationDelegate.h"

@class NSString;

@interface WNParaObjectLocationNewView : WNParaObjectBaseView <ViewLocationDelegate>
{
}

- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onClickObject;
- (id)getImage;
- (id)getDescription;
- (id)getTitle;
- (void)layoutView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
