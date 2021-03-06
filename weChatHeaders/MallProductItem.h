//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface MallProductItem : NSObject <PBCoding, NSCopying>
{
    unsigned int type;
    NSString *mallProductInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *mallProductInfo; // @synthesize mallProductInfo;
@property(nonatomic) unsigned int type; // @synthesize type;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

