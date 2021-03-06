//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCStoryCommentsForSelfTableViewCellDelegate.h"

@class NSMutableArray, NSString;

@interface WCStoryCommentsForSelfShowViewModel : NSObject <WCStoryCommentsForSelfTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataArray;
    id <WCStoryCommentsForSelfShowViewModelDelegate> _delegate;
    NSMutableArray *_cellFrameArray;
}

+ (id)viewModelWithDataArray:(id)arg1;
@property(retain, nonatomic) NSMutableArray *cellFrameArray; // @synthesize cellFrameArray=_cellFrameArray;
@property(nonatomic) __weak id <WCStoryCommentsForSelfShowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)WCStoryCommentsForSelfTableViewCellDidDoubleClickHeadView:(id)arg1;
- (void)WCStoryCommentsForSelfTableViewCellDidClickHeadView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

