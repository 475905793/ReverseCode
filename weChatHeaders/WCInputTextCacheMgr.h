//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface WCInputTextCacheMgr : NSObject
{
    NSMutableArray *_arrCacheText;
    NSMutableDictionary *_dicRedEnvelopesReceiveInfo;
    _Bool m_bNeedCacheRecieveInfo;
    NSMutableDictionary *pasteLengthDic;
}

- (void).cxx_destruct;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)saveAllCache;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (void)cacheFreeStatus:(id)arg1;
- (void)cacheRewardStatus:(id)arg1;
- (void)saveRedEnvelopesReceiveInfo;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2 PasteLogic:(id)arg3;
- (void)cacheText:(id)arg1 refDataItem:(id)arg2 refCommentItem:(id)arg3 PasteLogic:(id)arg4;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (id)cacheTextKey:(id)arg1 refCommentItem:(id)arg2;
- (void)dealloc;
- (void)saveCacheText;
- (id)init;

@end

