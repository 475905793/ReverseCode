//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString, WePkgUpdateConfigExt;

@interface WePkgUpdateConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _pkgType;
    NSString *_pkgId;
    NSString *_appId;
    NSString *_entranceDomain;
    WePkgUpdateConfigExt *_ext;
}

+ (void)__wcdb_WePkgUpdateConfigTable_primary_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ext;
+ (void)__wcdb_WePkgUpdateConfigTable_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)entranceDomain;
+ (void)__wcdb_WePkgUpdateConfigTable_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)pkgType;
+ (void)__wcdb_WePkgUpdateConfigTable_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appId;
+ (void)__wcdb_WePkgUpdateConfigTable_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)pkgId;
+ (void)__wcdb_WePkgUpdateConfigTable_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) WePkgUpdateConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *entranceDomain; // @synthesize entranceDomain=_entranceDomain;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
