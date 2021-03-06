//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCCardOfflineCodeConfigData : MMObject <WCTTableCoding>
{
    _Bool needInsertShowTimestamp;
    unsigned int lowerBound;
    unsigned int expireTimeInterval;
    unsigned int showExpireInterval;
    unsigned int localUpdateTime;
    NSString *cardId;
    NSString *showTimestampEncryptKey;
}

+ (void)__wcdb_WCCardOfflineCodeConfigData_primary_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showTimestampEncryptKey;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)needInsertShowTimestamp;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localUpdateTime;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showExpireInterval;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)expireTimeInterval;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lowerBound;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardId;
+ (void)__wcdb_WCCardOfflineCodeConfigData_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *showTimestampEncryptKey; // @synthesize showTimestampEncryptKey;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) _Bool needInsertShowTimestamp; // @synthesize needInsertShowTimestamp;
@property(nonatomic) unsigned int showExpireInterval; // @synthesize showExpireInterval;
@property(nonatomic) unsigned int expireTimeInterval; // @synthesize expireTimeInterval;
@property(nonatomic) unsigned int lowerBound; // @synthesize lowerBound;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

