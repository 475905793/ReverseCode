//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayAddressInfo : NSObject
{
    NSString *_address_name;
    NSString *_phone_num;
    NSString *_address;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *phone_num; // @synthesize phone_num=_phone_num;
@property(retain) NSString *address_name; // @synthesize address_name=_address_name;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;

@end

