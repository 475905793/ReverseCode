//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface GameCenterMsgDbModel : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    _Bool _showInMsgCenter;
    _Bool _unRead;
    unsigned int _localId;
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _recvTime;
    long long lastInsertedRowID;
    NSString *_svrMsgId;
    NSString *_content;
    NSString *_mergeId;
}

+ (void)__wcdb_GameCenterMsgDbModel_primary_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recvTime;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)mergeId;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)unRead;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showInMsgCenter;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)content;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)svrMsgId;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localId;
+ (void)__wcdb_GameCenterMsgDbModel_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int recvTime; // @synthesize recvTime=_recvTime;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;
@property(nonatomic) _Bool showInMsgCenter; // @synthesize showInMsgCenter=_showInMsgCenter;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;
- (id)initWithGameCenterMsg:(id)arg1;

@end

