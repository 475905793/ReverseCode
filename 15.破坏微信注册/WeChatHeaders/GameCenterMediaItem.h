//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameCenterMediaItem : MMObject <PBCoding>
{
    _Bool videoH5Play;
    unsigned int mediaType;
    NSString *thumbURL;
    NSString *mediaURL;
}

+ (void)initialize;
@property(nonatomic) _Bool videoH5Play; // @synthesize videoH5Play;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL;
@property(retain, nonatomic) NSString *thumbURL; // @synthesize thumbURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

