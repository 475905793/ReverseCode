//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCDataItem, WCDownloadImageCdnMgr, WCDownloadMgr, WCTimelineMgr;

@protocol WCPreloadLogicDelegate <NSObject>

@optional
- (void)onPreloadSnsVideoForDataItem:(WCDataItem *)arg1;
- (_Bool)couldPreloadBigImageForUser:(NSString *)arg1 limit:(int)arg2;
- (NSArray *)getAllAdDataItems;
- (WCDownloadImageCdnMgr *)getDownloadImageCdnMgr;
- (WCDownloadMgr *)getDownloadMgr;
- (WCTimelineMgr *)getTimelineMgr;
@end
