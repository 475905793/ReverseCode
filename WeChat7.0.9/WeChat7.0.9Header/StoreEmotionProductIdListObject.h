//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface StoreEmotionProductIdListObject : MMObject <PBCoding>
{
    NSMutableArray *pids;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)instance;
+ (void)initialize;
+ (void)PBArrayAdd_pids;
@property(retain, nonatomic) NSMutableArray *pids; // @synthesize pids;
- (void).cxx_destruct;
- (void)addFirstPid:(id)arg1;
- (void)deletePid:(id)arg1;
- (id)getPids;
- (void)savePidToFile:(id)arg1;
- (void)savePidsToFile:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
