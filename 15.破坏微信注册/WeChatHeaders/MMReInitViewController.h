//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"

@class NSString, UIScrollView;

@interface MMReInitViewController : MMUIViewController <MMTipsViewControllerDelegate>
{
    UIScrollView *m_mainScrollView;
}

- (void).cxx_destruct;
- (void)OnClickBackBarButton:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)doReinit;
- (void)onReinit;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

